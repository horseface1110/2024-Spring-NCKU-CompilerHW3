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

#define iload(var) code("iload %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)
#define lload(var) code("lload %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)
#define fload(var) code("fload %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)
#define dload(var) code("dload %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)
#define aload(var) code("aload %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)

#define istore(var) code("istore %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)
#define lstore(var) code("lstore %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)
#define fstore(var) code("fstore %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)
#define dstore(var) code("dstore %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)
#define astore(var) code("astore %" PRId64 " ; %s", (var)->symbol->addr, (var)->symbol->name)

#define ldz(val) code("ldc %d", getBool(val))
#define ldb(val) code("ldc %d", getByte(val))
#define ldc(val) code("ldc %d", getChar(val))
#define lds(val) code("ldc %d", getShort(val))
#define ldi(val) code("ldc %d", getInt(val))
#define ldl(val) code("ldc_w %" PRId64, getLong(val))
#define ldf(val) code("ldc %.6f", getFloat(val))
#define ldd(val) code("ldc_w %lf", getDouble(val))
#define ldt(val) code("ldc \"%s\"", getString(val))

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
int scopeLevel = -1;
int funcLineNo = 0;
int variableAddress = 0;
ObjectType variableIdentType;

SymbolData symbols[9][10];  // 頂多9個scope，每個scope 10個變數
int symbolsLevel[9] = {0};  // 紀錄每個scope 現在儲存幾個變數了
int cout[15];               // cout輸出的linklist開頭
int coutCount = 0;          // 紀錄cout 陣列儲存多少東西了，幹不知道為甚麼起始為0用得時候會變1
int pushsym = 0;            // 紀錄這段時間推了幾個參數進來，這樣才可以改我要改的那些type

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
        // printf("var = %d\n",symbols[scopeLevel][i].func_var);   ////////////////////////////////
        char tmp[15] = "";
        char last[50] = "";
        char Func_sig[] = "([Ljava/lang/String;)I";
        char check[] = "call: check(IILjava/lang/String;B)B";
        switch(symbols[scopeLevel][i].func_var){
            case 4: strcpy(tmp,"int"); break;
            case 6: strcpy(tmp,"float"); break;
            case 8: strcpy(tmp,"bool"); break;
            case 9: strcpy(tmp,"string"); break;
            case 10: strcpy(tmp,"function"); break;
        }
        if(!strcmp(symbols[scopeLevel][i].name,"check")){
            strcpy(last,"(IILjava/lang/String;B)B");
        }else if(!strcmp(symbols[scopeLevel][i].name,"main") ){
            strcpy(last,"([Ljava/lang/String;)I");
        }else{
            strcpy(last,"-");
        }
        printf("%-9d %-19s %-9s %-9ld %-9d %-10s\n",
                i,
                symbols[scopeLevel][i].name,
                tmp,
                symbols[scopeLevel][i].addr,
                symbols[scopeLevel][i].lineno,
                last
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

void pushFunParm(ObjectType variableType, char* variableName, int variableFlag) {
    pushSymbleData(variableType, variableName);
}

void createFunction(ObjectType variableType, char* funcName) {

    printf("%s",ObjectTypeToString(variableType));
    printf(": %s\n", funcName);
    pushSymbleData(10,funcName);
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
        return;
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

void pushSymbleData(ObjectType variableType, char* Name){
    symbols[scopeLevel][symbolsLevel[scopeLevel]].index = symbolsLevel[scopeLevel];
    symbols[scopeLevel][symbolsLevel[scopeLevel]].name = Name;
    symbols[scopeLevel][symbolsLevel[scopeLevel]].lineno = yylineno;    //// lineno不確定
    symbols[scopeLevel][symbolsLevel[scopeLevel]].func_var =  variableType;
    if(scopeLevel == 0){
        symbols[scopeLevel][symbolsLevel[scopeLevel]].addr = -1;
        printf("> Insert `%s` (addr: %d) to scope level %d\n",Name,-1,scopeLevel);
    }else{
        
        symbols[scopeLevel][symbolsLevel[scopeLevel]].addr = variableAddress;
        printf("> Insert `%s` (addr: %ld) to scope level %d\n",
            Name,
            symbols[scopeLevel][symbolsLevel[scopeLevel]].addr,
            scopeLevel);
        variableAddress++;
    }
    
    pushsym++;
    symbolsLevel[scopeLevel]++;
    // printf("symbolsLevel[%d] = %d, pushsym = %d\n",scopeLevel,symbolsLevel[scopeLevel],pushsym);
}

// 專門給 變數 IDENT 用的
int findObjectType(char* target){   
    // printf("hi\n"); 
    // printf("target = %s\n",target);
    for(int j = 0 ; j <= scopeLevel ; j++){
        for(int i = 0 ; i < symbolsLevel[j] ; i++){     ///  有可能在 scope = 2 時使用scope = 1 的東西，會壞掉
            // printf("symbols[%d][%d].name = %s\n",j,i,symbols[j][i].name);
            if( strcmp(symbols[j][i].name, target)==0 ){
                printf("IDENT (name=%s, address=%ld)\n",
                    symbols[j][i].name,
                    symbols[j][i].addr);
                return symbols[j][i].func_var;
            }
        }
    }

    // for(int i = 0 ; i < symbolsLevel[scopeLevel] ; i++){     ///  有可能在 scope = 2 時使用scope = 1 的東西，會壞掉
    //     if( strcmp(symbols[scopeLevel][i].name, target)==0 ){
           
    //         printf("IDENT (name=%s, address=%d)\n",symbols[scopeLevel][i].name,symbols[scopeLevel][i].addr);
    //         return symbols[scopeLevel][i].func_var;
    //     }
    // }
    
}

// 給強轉型用的，傳入一個objectType
void castTo( ObjectType type){
    printf("Cast to");
    switch(type){
        case 4: printf(" int\n");break;
        case 6: printf(" float\n"); break;
        case 8: printf(" bool\n"); break;
        case 9: printf(" string\n"); break;
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

    codeRaw(".class public Main");
    codeRaw(".super java/lang/Object");
    scopeLevel = -1;

    yyparse();
    printf("Total lines: %d\n", yylineno);
    fclose(yyin);

    yylex_destroy();
    return 0;
}