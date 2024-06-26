#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#define WJCL_LINKED_LIST_IMPLEMENTATION
#include "main.h"
#define WJCL_HASH_MAP_IMPLEMENTATION
#include "value_operation.h"

#define debug printf("%s:%d: ############### debug\n", __FILE__, __LINE__)

#define toupper(_char) (_char - (char)32)

#define iload(var) code("iload %" PRId64 " ; %s", (var).addr, (var).name)    /// 太牛逼了 原來address是這樣用的
#define lload(var) code("lload %" PRId64 " ; %s", (var).addr, (var).name)
#define fload(var) code("fload %" PRId64 " ; %s", (var).addr, (var).name)
#define dload(var) code("dload %" PRId64 " ; %s", (var).addr, (var).name)
#define aload(var) code("aload %" PRId64 " ; %s", (var).addr, (var).name)

#define istore(var) code("istore %" PRId64 " ; %s", (var).addr, (var).name)
#define lstore(var) code("lstore %" PRId64 " ; %s", (var).addr, (var).name)
#define fstore(var) code("fstore %" PRId64 " ; %s", (var).addr, (var).name)
#define dstore(var) code("dstore %" PRId64 " ; %s", (var).addr, (var).name)
#define astore(var) code("astore %" PRId64 " ; %s", (var).addr, (var).name)

#define ldz(val) code("ldc %d", getBool(val))
#define ldb(val) code("ldc %d", getByte(val))
#define ldc(val) code("ldc %d", getChar(val))
#define lds(val) code("ldc %d", getShort(val))
#define ldi(val) code("ldc %d", getInt(val))
#define ldl(val) code("ldc_w %" PRId64, getLong(val))
#define ldf(val) code("ldc %.6f", getFloat(val))
#define ldd(val) code("ldc_w %lf", getDouble(val))
#define ldt(val) code("ldc \"%s\"", getString(val))

#define storeMatrix(var)                                                       \
  if ((var).func_var == OBJECT_TYPE_FLOAT) {                                      \
    fstore(var);                                                               \
  } else if ((var).func_var == OBJECT_TYPE_INT ||                                 \
             (var).func_var == OBJECT_TYPE_BOOL) {                                \
    istore(var);                                                               \
  } else if ((var).func_var == OBJECT_TYPE_LONG) {                                \
    lstore(var);                                                               \
  } else if ((var).func_var == OBJECT_TYPE_DOUBLE) {                              \
    dstore(var);                                                               \
  } else if ((var).func_var == OBJECT_TYPE_STR) {                                 \
    astore(var);                                                               \
  }

#define loadMatrix(var)                                                         \
  if ((var).func_var == OBJECT_TYPE_FLOAT) {                                      \
    fload(var);                                                                \
  } else if ((var).func_var == OBJECT_TYPE_INT ||                                 \
             (var).func_var == OBJECT_TYPE_BOOL) {                                \
    iload(var);                                                                \
  } else if ((var).func_var == OBJECT_TYPE_LONG) {                                \
    lload(var);                                                                \
  } else if ((var).func_var == OBJECT_TYPE_DOUBLE) {                              \
    dload(var);                                                                \
  } else if ((var).func_var == OBJECT_TYPE_STR) {                                 \
    aload(var);                                                                \
  }

const char* objectTypeName[] = {
    [OBJECT_TYPE_UNDEFINED] = "undefined",
    [OBJECT_TYPE_VOID] = "void",
    [OBJECT_TYPE_BOOL] = "bool",
    [OBJECT_TYPE_BYTE] = "byte",
    [OBJECT_TYPE_CHAR] = "char",
    [OBJECT_TYPE_SHORT] = "short",
    [OBJECT_TYPE_INT] = "int",
    [OBJECT_TYPE_LONG] = "long",
    [OBJECT_TYPE_FLOAT] = "float",
    [OBJECT_TYPE_DOUBLE] = "double",
    [OBJECT_TYPE_STR] = "string",
};
const char* objectJavaTypeName[] = {
    [OBJECT_TYPE_UNDEFINED] = "V",
    [OBJECT_TYPE_VOID] = "V",
    [OBJECT_TYPE_BOOL] = "Z",
    [OBJECT_TYPE_BYTE] = "B",
    [OBJECT_TYPE_CHAR] = "C",
    [OBJECT_TYPE_SHORT] = "S",
    [OBJECT_TYPE_INT] = "I",
    [OBJECT_TYPE_LONG] = "J",
    [OBJECT_TYPE_FLOAT] = "F",
    [OBJECT_TYPE_DOUBLE] = "D",
    [OBJECT_TYPE_STR] = "Ljava/lang/String;",
};

char* yyInputFileName;
bool compileError;

int indent = 0;
int scopeLevel = -1;        //// 目前是哪個Scope
int funcLineNo = 0;
int variableAddress = 0;
ObjectType variableIdentType;

SymbolData symbols[9][10];  // 頂多9個scope，每個scope 10個變數
int symbolsLevel[9] = {0};  // 紀錄每個scope 現在儲存幾個變數了
int cout[15];               // cout輸出的linklist開頭
int coutCount = 0;          // 紀錄cout 陣列儲存多少東西了，幹不知道為甚麼起始為0用得時候會變1
int pushsym = 0;            // 紀錄這段時間推了幾個參數進來，這樣才可以改我要改的那些type
int JNI[9][2] = {0};        // 紀錄函式參數給JNI用，前為陣列TF，後為type
int JNI_count = 0;
bool now_Fun = false;        // 紀錄現在是不是在創建一個fun 預設false
bool printLoad = false;     // 能不能印load 預設不能


void pushScope() {
    scopeLevel++;
    printf("> Create symbol table (scope level %d)\n", scopeLevel);
    pushsym = 0;
}

void dumpScope() {
    printf("\n");
    printf("> Dump symbol table (scope level: %d)\n", scopeLevel);
    printf("Index     Name                Type      Addr      Lineno    Func_sig  \n");
    for(int i = 0 ; i < symbolsLevel[scopeLevel] ; i++){
        char tmp[15] = "";                 
        char Func_sig[] = "([Ljava/lang/String;)I";
        char check[] = "call: check(IILjava/lang/String;B)B";
        if(symbols[scopeLevel][i].addr == -1){symbols[scopeLevel][i].func_var = 10;}   // 最後dump出來時，functio需要是10 ，但為了判斷需要是回傳的型別，故以此判斷，若addr = -1則必定是function
        switch(symbols[scopeLevel][i].func_var){
            case 4: strcpy(tmp,"int"); break;
            case 6: strcpy(tmp,"float"); break;
            case 8: strcpy(tmp,"bool"); break;
            case 9: strcpy(tmp,"string"); break;
            case 10: strcpy(tmp,"function"); break;
        }

        printf("%-9d %-19s %-9s %-9ld %-9d %-10s\n",
                i,
                symbols[scopeLevel][i].name,
                tmp,
                symbols[scopeLevel][i].addr,
                symbols[scopeLevel][i].lineno,
                symbols[scopeLevel][i].func_sig  
                
        ); 
        
    }

    symbolsLevel[scopeLevel] = 0;
    scopeLevel--;
}

Object* createVariable(ObjectType variableType, LinkedList* arraySubscripts, char* variableName, Object* value) {
    return NULL;
}

void pushFun(){
    scopeLevel++;
    resetPushsym();
    printf("> Create symbol table (scope level %d)\n",scopeLevel);
}

void pushFunParm(ObjectType variableType, char* Name, int variableFlag) {  
    symbols[scopeLevel][symbolsLevel[scopeLevel]].index = symbolsLevel[scopeLevel];
    symbols[scopeLevel][symbolsLevel[scopeLevel]].name = Name;
    symbols[scopeLevel][symbolsLevel[scopeLevel]].lineno = yylineno;   
    symbols[scopeLevel][symbolsLevel[scopeLevel]].func_var =  variableType;
    strcpy(symbols[scopeLevel][symbolsLevel[scopeLevel]].func_sig ,"-");
    if(scopeLevel == 0){
        symbols[scopeLevel][symbolsLevel[scopeLevel]].addr = -1;
        printf("> Insert `%s` (addr: -1) to scope level %d\n",Name,scopeLevel);
    }else{
        
        symbols[scopeLevel][symbolsLevel[scopeLevel]].addr = variableAddress;
        printf("> Insert `%s` (addr: %d) to scope level %d\n",
            Name,
            symbols[scopeLevel][symbolsLevel[scopeLevel]].addr,
            scopeLevel);
        variableAddress++;
        
    }

    JNI[JNI_count][0] = variableFlag;    // 前為陣列，1為T，0為F，預設為0
    JNI[JNI_count][1] = variableType;  // 儲存該變數的type

    pushsym++;
    JNI_count++;
    symbolsLevel[scopeLevel]++;             
    // printf("symbolsLevel[%d] = %d, pushsym = %d\n",scopeLevel,symbolsLevel[scopeLevel],pushsym);
}

// 該函示用來把JNI附加到funtion的 func_sig 中，
void record_JNI(char* variableName){
    
    char str[60];
    strcpy(str, "("); 
    for(int i = 0 ; i < JNI_count ; i++){
        if(JNI[i][0]){
            strcat(str, "["); 
            JNI[i][0] = 0;
        }

        strcat(str, change_JNI(JNI[i][1]));      
        JNI[i][1] = 0;
    }
    JNI_count = 0;

    strcat(str, ")");
    // printf("symbols[%d][%d].func_var = %d, scopeLevel = %d, symbols[%d][%d].name = %s\n",
    //     scopeLevel- 1,
    //     symbolsLevel[scopeLevel -1] -1,
    //     symbols[scopeLevel - 1][symbolsLevel[scopeLevel -1] -1].func_var,
    //     scopeLevel - 1,
    //     scopeLevel- 1,
    //     symbolsLevel[scopeLevel -1] -1,
    //     symbols[scopeLevel - 1][symbolsLevel[scopeLevel -1] -1].name
    //     ); 
    // printf("%d\n",symbols[scopeLevel - 1][symbolsLevel[scopeLevel] - 1].func_var);

    int tmp = (int)(symbols[scopeLevel - 1][symbolsLevel[scopeLevel -1 ] - 1].func_var);
    switch(tmp){
        case 3: strcat(str, "C"); break;
        case 4: strcat(str, "I"); break;
        case 5: strcat(str, "J"); break;
        case 6: strcat(str, "F"); break;
        case 7: strcat(str, "D"); break;
        case 8: strcat(str, "B"); break;
        case 9: strcat(str, "Ljava/lang/String;"); break;
        default:  strcat(str, "WTFFFF"); break;
    }   

    tmp = symbolsLevel[scopeLevel -1] -1 ;
    strcpy(symbols[scopeLevel - 1][tmp].func_sig,str);
   

    // 作業三中 初始化該涵式
    // code(".method public static %s%s", symbols[scopeLevel - 1][tmp].name, symbols[scopeLevel - 1][tmp].func_sig);  // TODO: codeRaw 首發
    codeRaw(".method public static main([Ljava/lang/String;)V"); // TODO: 為什麼是void？？？
    codeRaw(".limit stack 100");
    codeRaw(".limit locals 100");

}

// 該函示把JNI陣列中的值轉換成字元後回傳
char* change_JNI(int main){       // 回傳字串的話就要 char*
    switch(main){
        case 3: return("C");
        case 4: return("I");
        case 5: return("J");
        case 6: return("F");
        case 7: return("D");
        case 8: return("B");
        case 9: return("Ljava/lang/String;");
        default: return ("WTFFFFFF");
    }
}

// 把函數也當成變數看，傳入他的型別
void createFunction(ObjectType variableType, char* funcName) {
    printf("func: %s\n", funcName);
    now_Fun = true;
    pushSymbleData(variableType,funcName,false); 
    now_Fun = false;
    
}

void debugPrintInst(char instc, Object* a, Object* b, Object* out) {
}


bool objectExpression(char op, Object* dest, Object* val, Object* out) {
    return false;
}

bool objectExpBinary(char op, Object* a, Object* b, Object* out) {
    return false;
}

bool objectExpBoolean(char op, Object* a, Object* b, Object* out) {
    return false;
}

bool objectExpAssign(char op, Object* dest, Object* val, Object* out) {
    return false;
}

bool objectValueAssign(Object* dest, Object* val, Object* out) {
    return false;
}

bool objectNotBinaryExpression(Object* dest, Object* out) {
    return false;
}

bool objectNegExpression(Object* dest, Object* out) {
    return false;
}
bool objectNotExpression(Object* dest, Object* out) {
    return false;
}

bool objectIncAssign(Object* a, Object* out) {
    return false;
}

bool objectDecAssign(Object* a, Object* out) {
    return false;
}

bool objectCast(ObjectType variableType, Object* dest, Object* out) {
    return false;
}

Object* findVariable(char* variableName) {
    Object* variable = NULL;
    return variable;
}

void resetPushsym(){
    pushsym = 0;
}

void pushFunInParm(Object* variable) {

    cout[coutCount] = variable-> type;
    // printf("type = %d\n",cout[coutCount]);
    coutCount++;

}

void stdoutPrint() {
    printf("cout");

    for(int i = 0 ; i < coutCount ; i++){
        // printf("tpye = %d\n",cout[i]);
        switch(cout[i]){
            case 4: printf(" int"); continue; 
            case 6: printf(" float"); continue;
            case 8: printf(" bool"); continue;
            case 9: printf(" string"); continue;
        }
    }
    coutCount = 0;
    printf("\n");
    
}

char* ObjectTypeToString(ObjectType type) {

    switch(type){
        case 4: return("func");
        case 8: return("bool");
        case 9: return("string");
        case 10: return("func");
    }
}

// 把type = 100 改成正確
void changePSD(ObjectType variableType){

    if(variableType == 1){
        return 0;
    }

    for(int i = 0 ; i < pushsym ; i++){    // 這邊負責 如果前後都是有形別的，那就用前面的 
        // printf("輸入var = %d,symbols[%d][%d].func_var = %d name = %s \n",variableType,scopeLevel,symbolsLevel[scopeLevel ]- i -1,symbols[scopeLevel][symbolsLevel[scopeLevel] - i -1].func_var, symbols[scopeLevel][symbolsLevel[scopeLevel] - i -1].name);
        if(symbols[scopeLevel][symbolsLevel[scopeLevel] - i -1].func_var < 10 && symbols[scopeLevel][symbolsLevel[scopeLevel] - i -1].func_var > 0){
            symbols[scopeLevel][symbolsLevel[scopeLevel] - i -1].func_var = variableType;
        }
    }
    pushsym = 0;

    for(int i = 0 ; i < symbolsLevel[scopeLevel] ; i++){   /// 這邊負責：如果是int a = 0, b = 0 ，那b一開始會沒有型別
        if(symbols[scopeLevel][i].func_var > 10 || symbols[scopeLevel][i].func_var < 1 ){
            symbols[scopeLevel][i].func_var = variableType;
            // printf("symbols[scopeLevel][i].func_var = %d\n",symbols[scopeLevel][i].func_var);
        }
    }
    // for(int i = 0 ; i < symbolsLevel[scopeLevel] ; i++){   /// 這邊負責：如果是int a = 0, b = 0 ，那b一開始會沒有型別
    //     printf("後symbols[%d][%d].func_var = %d\n",scopeLevel,i,symbols[scopeLevel][i].func_var);
    // }

}

void pushSymbleData(ObjectType variableType, char* Name,bool store){
    symbols[scopeLevel][symbolsLevel[scopeLevel]].index = symbolsLevel[scopeLevel];
    symbols[scopeLevel][symbolsLevel[scopeLevel]].name = Name;
    symbols[scopeLevel][symbolsLevel[scopeLevel]].lineno = yylineno;   
    symbols[scopeLevel][symbolsLevel[scopeLevel]].func_var =  variableType;   
    strcpy(symbols[scopeLevel][symbolsLevel[scopeLevel]].func_sig , "-");
    if(scopeLevel == 0){
        symbols[0][symbolsLevel[0]].addr = -1;
        printf("> Insert `%s` (addr: %d) to scope level 0\n",Name,-1);
    }else{
        
        symbols[scopeLevel][symbolsLevel[scopeLevel]].addr = variableAddress;
        printf("> Insert `%s` (addr: %d) to scope level %d\n",Name,symbols[scopeLevel][symbolsLevel[scopeLevel]].addr,scopeLevel,symbols[scopeLevel][symbolsLevel[scopeLevel]].func_var);
        variableAddress++;
    }

    // 以下處理作業三：
    if(!now_Fun && store){
        storeMatrix(symbols[scopeLevel][symbolsLevel[scopeLevel]]);
    }
    

    pushsym++;
    symbolsLevel[scopeLevel]++;
} 

// 專門給 變數 IDENT 用的
int findObjectType(char* target){   
    for(int j = 0 ; j <= scopeLevel ; j++){
        for(int i = 0 ; i < symbolsLevel[j] ; i++){     ///  有可能在 scope = 2 時使用scope = 1 的東西，會壞掉
            if( strcmp(symbols[j][i].name, target)==0 ){
                printf("IDENT (name=%s, address=%d)\n",symbols[j][i].name,symbols[j][i].addr);
                if(printLoad){
                    loadMatrix(symbols[j][i]);   
                    printLoad = false;
                }
                return symbols[j][i].func_var;
            }
        }
    }
}

// 給強轉型用的，傳入一個objectType
void castTo( ObjectType type, int behind_type){
    char two[2];
    int pass = 0;
    printf("Cast to");
    switch(type){
        case 4: printf(" int\n");two[0] = 'i';pass+=1;break;
        case 6: printf(" float\n");two[0] = 'f';pass+=1; break;
        case 8: printf(" bool\n");two[0] = 'b'; break;
        case 9: printf(" string\n"); two[0] = 's';pass+=1;break;
    }
    switch(behind_type){
        case 4: two[1] = 'i';pass+=1;break;
        case 6: two[1] = 'f';pass+=1; break;
        case 8: two[1] = 'b'; break;
        case 9: two[1] = 's';pass+=1;break;
    }
    if(pass == 2){
        code("%c2%c",two[1],two[0]);    ////TODO:f21
    }
}



// 印出不同型別的 invokevirtual
void invokevirtual(int type){
    code("invokevirtual java/io/PrintStream/print(%s)%s",objectJavaTypeName[type],"V");
}


// 印出istore用的
void y_store(char *target){
    for(int j = 0 ; j <= scopeLevel ; j++){
        for(int i = 0 ; i < symbolsLevel[j] ; i++){     ///  有可能在 scope = 2 時使用scope = 1 的東西，會壞掉
            if( strcmp(symbols[j][i].name, target)==0 ){
                storeMatrix(symbols[j][i]);     /// FIXME:吃屎ˋ吧
            }
        }
    }
}


char* getIdentTypeString(int type){
    switch(type){
        case 4: return "i";
        case 8: return "i";
        case 5: return "l";
        case 9: return "a";
        case 6: return "f";
        case 7: return "d";
    }
}

void setLoad(bool target){
    printLoad = target;
}

// 專門給 變數 IDENT 用的 不印東西
int findObjectTypeNoPrint(char* target){   
    for(int j = 0 ; j <= scopeLevel ; j++){
        for(int i = 0 ; i < symbolsLevel[j] ; i++){     ///  有可能在 scope = 2 時使用scope = 1 的東西，會壞掉
            if( strcmp(symbols[j][i].name, target)==0 ){
                return symbols[j][i].func_var;
            }
        }
    }
}



int main(int argc, char* argv[]) {
    char* outputFileName = NULL;
    if (argc == 3) {
        yyin = fopen(yyInputFileName = argv[1], "r");
        yyout = fopen(outputFileName = argv[2], "w");
    } else if (argc == 2) {
        yyin = fopen(yyInputFileName = argv[1], "r");
        yyout = stdout;
    } else {
        printf("require input file");
        exit(1);
    }
    if (!yyin) {
        printf("file `%s` doesn't exists or cannot be opened\n", yyInputFileName);
        exit(1);
    }
    if (!yyout) {
        printf("file `%s` doesn't exists or cannot be opened\n", outputFileName);
        exit(1);
    }
    codeRaw(".source Main.j");
    codeRaw(".class public Main");
    codeRaw(".super java/lang/Object");
    scopeLevel = -1;

    yyparse();
    codeRaw("return");
    codeRaw(".end method");
    printf("Total lines: %d\n", yylineno);
    fclose(yyin);

    yylex_destroy();

    return 0;
}