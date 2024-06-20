/* Definition section */
%{
    #include "compiler_common.h"
    #include "compiler_util.h"
    #include "main.h"

    int yydebug = 1;
    int arrNum = 0;
    int autoType = 100;   // 為了對付auto型別，平時為100，用完回歸100
    int Label_num = 0;    // lablel數量


%}

/* Variable or self-defined structure */
%union {
    ObjectType var_type;

    bool b_var;
    char c_var;
    int32_t i_var;
    int64_t l_var;
    float f_var;
    double d_var;
    char *s_var;

    Object obj_val;


    // LinkList<Object*>
    LinkedList* array_subscript;
}

/* Token without return */
%token COUT ENDL VAR_FLAG_DEFAULT // TODO:我宣告的的VAR_FLAG_DEFAULT
%token SHR SHL BAN BOR BNT BXO ADD SUB MUL DIV REM NOT GTR LES GEQ LEQ EQL NEQ LAN LOR
%token VAL_ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN REM_ASSIGN BAN_ASSIGN BOR_ASSIGN BXO_ASSIGN SHR_ASSIGN SHL_ASSIGN INC_ASSIGN DEC_ASSIGN EQL_ASSIGN
%token IF ELSE FOR WHILE RETURN BREAK CONTINUE
%token '(' ')'


/* Token with return, which need to sepcify type */
%token <var_type> VARIABLE_T
%token <b_var> BOOL_LIT
%token <c_var> CHAR_LIT
%token <i_var> INT_LIT
%token <f_var> FLOAT_LIT
%token <s_var> STR_LIT
%token <s_var> IDENT

/* Nonterminal with return, which need to sepcify type */
%type <obj_val> Expression
%type <array_subscript> ArraySubscriptStmtList
%type <s_var> IDENTS ForThrid 
%type <i_var> InArr

%left LOR   // 越上面的越晚處理
%left LAN 
%left GTR LES GEQ LEQ EQL NEQ
%left ADD SUB
%left MUL DIV REM
%left BAN
%right NOT BNT

%nonassoc UMINUS
%nonassoc THEN
%nonassoc ELSE

/* Yacc will start at this nonterminal */
%start Program

%%
/* Grammar section */

Program
    : { pushScope(); } GlobalStmtList { dumpScope(); }
    | /* Empty file */
;

GlobalStmtList 
    : GlobalStmtList GlobalStmt {}
    | GlobalStmt {}
;

GlobalStmt
    : DefineVariableStmt {}
    | FunctionDefStmt {}
;

DefineVariableStmt
    : VARIABLE_T { autoType = $<var_type>1;} IDENTS';' { changePSD($<var_type>1); autoType = 100; }
    /*變數類型  變數名稱 賦值運算符    */
    | Expression Assign ';' {y_store($1.name);}   // = 走這邊 怪怪的             需要想個辦法抓到 x = 10  這邊的 x 變數名稱  
;

IDENTS
    : IDENTS ',' IDENT { pushSymbleData(autoType , $<s_var>3); }    // 傳入100是為了對付 int a , b 這種狀況
    | IDENT {  pushSymbleData(autoType, $<s_var>1); }
    | IDENTS ',' IDENT Assign2 { pushSymbleData(autoType, $<s_var>3); }
    | IDENT  Assign2 { pushSymbleData(autoType, $<s_var>1);  } 
    | IDENT '[' INT_LIT { printf("INT_LIT %d\n",$3);}  ']' InArr  { printf("create array: %d\n",arrNum); arrNum = 0; pushSymbleData(autoType, $<s_var>1); } 
                                                                        ///  這邊要改成實際幾個數字

;
/*
Assign2
    : EQL_ASSIGN Expression // =
*/

/* Function */
FunctionDefStmt
    : VARIABLE_T IDENT { createFunction($<var_type>1, $<s_var>2); } '(' FunctionParameterStmtListFirst ')'  { record_JNI($<s_var>2);} '{' {resetPushsym();} StmtList '}' { dumpScope(); }
;

FunctionParameterStmtListFirst
    : { pushFun();} FunctionParameterStmtList 

FunctionParameterStmtList 
    : FunctionParameterStmtList ',' FunctionParameterStmt {  }
    | FunctionParameterStmt {   }
    | /* Empty function parameter */
;
FunctionParameterStmt   
    : VARIABLE_T IDENT '[' ']'{ pushFunParm($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT); }
    | VARIABLE_T IDENT { pushFunParm($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT);}
    /*變數類型  變數名稱*/
;

/* Scope */
ScopeStmt
    : '{' { pushScope(); } StmtList '}' { dumpScope(); }
    | '{' { pushScope(); } '}' { dumpScope(); }
    | BodyStmt
;
ManualScopeStmt
    : '{' StmtList '}'
    | '{' '}'
    | BodyStmt
;
StmtList 
    :  StmtList  Stmt {}
    |  Stmt {}
;
Stmt
    : ';'
    | DefineVariableStmt
    | COUT  CoutParmListStmt ';' {stdoutPrint(); resetPushsym();}
    | RETURN Expression ';' { printf("RETURN\n"); }
    | IF IfStmt 
    | WHILE WhileStmt
    | FOR ForStmt
    | BREAK ';' {printf("BREAK\n");}
;

BodyStmt
    : ';'

/* IF scope */
IfStmt
    :'(' Expression ')' {printf("IF\n"); pushFun(); } '{' StmtList '}'  { dumpScope(); }
    | IfStmt ELSE { printf("ELSE\n"); pushFun(); }  '{' StmtList '}' { dumpScope(); }
    | '(' Expression ')'{printf("IF\n"); }  RETURN Expression ';' { printf("RETURN\n"); }

; 

/* while scope */
WhileStmt
    : {printf("WHILE\n"); } '(' Expression ')' {pushFun(); } '{' StmtList '}'  { dumpScope(); }
;

/*for scope */
ForStmt
    : {printf("FOR\n"); pushFun(); }  ForThrid '{' StmtList '}'  { dumpScope(); }
;

ForSecond
    : VARIABLE_T  IDENTS  
    /*變數類型  變數名稱 賦值運算符    */
    | Expression Assign 
    |
;

ForThrid
    : '(' ForSecond';' Expression ';' ForSecond ')'
    |  %prec UMINUS '(' ForSecond ':' IDENT ')' 
;

/* funct scope */

Func
    : Func ',' Expression 
    | Expression
;

/* array scope */

Arr     //  陣列元素們
    : Arr ',' Expression  {arrNum++;}
    | Expression      {arrNum++;}
    | 
;

InArr
    : InArr'[' INT_LIT { printf("INT_LIT %d\n",$<i_var>3);} ']'
    | Assign2 
;

/*SHL : <<*/     
CoutParmListStmt
    : CoutParmListStmt  SHL {codeRaw("getstatic java/lang/System/out Ljava/io/PrintStream;"); } Expression {
        if(strcmp($4.name,"endl")){
            invokevirtual($4.type);
        }
        pushFunInParm(&$<obj_val>4); } // 後
    | SHL {codeRaw("getstatic java/lang/System/out Ljava/io/PrintStream;"); } Expression { invokevirtual($3.type);} // 先
    |
;
// IDENT => 變數的意思
Expression
    : Expression ENDL Expression {
        printf("IDENT (name=endl, address=-1)\n");
        $$ = $<obj_val>2; 
        $$.type = 9;
        $$.name = "endl";
        codeRaw("invokevirtual java/io/PrintStream/println()V");} 
    | Expression ADD Expression { printf("ADD\n"); code("%sadd",getIdentTypeString($1.type)); /* 處理加法運算 */ }
    | Expression SUB Expression { printf("SUB\n"); code("%ssub",getIdentTypeString($1.type)); /* 處理減法運算 */ }    
    | Expression MUL Expression { printf("MUL\n"); code("%smul",getIdentTypeString($1.type)); /* 處理乘法運算 */ }
    | Expression DIV Expression { printf("DIV\n"); code("%sdiv",getIdentTypeString($1.type)); /* 處理除法運算 */ }
    | Expression REM Expression { printf("REM\n"); codeRaw("irem"); /* 處理取餘運算 */ }
    | SUB Expression %prec UMINUS { printf("NEG\n"); code("%sneg",getIdentTypeString($2.type));  } // 處理負號
    | Expression GTR Expression { printf("GTR\n"); /*大於*/
        $$ = $<obj_val>2; 
        $$.type = 8; 
        if($1.type == 4){  // int
            code("if_icmpgt greaterThanLabel%d",Label_num);  //如果大於就跳
            codeRaw("iconst_0");
            code("goto endLabel%d",Label_num);
            code("greaterThanLabel%d:",Label_num);           //大於的話做這邊
            codeRaw("iconst_1");
            code("endLabel%d:",Label_num++);  
        }else if($1.type == 6){  // float
            codeRaw("fcmpg");
            code("ifgt greaterThanLabel%d",Label_num);  //如果大於就跳
            codeRaw("iconst_0");
            code("goto endLabel%d",Label_num);
            code("greaterThanLabel%d:",Label_num);           //大於的話做這邊
            codeRaw("iconst_1");
            code("endLabel%d:",Label_num++);  
        }
         }                // 大於的處理結束
    | Expression LES Expression { printf("LES\n"); $$ = $<obj_val>2; $$.type = 8; /* 小於 */ }
    | Expression GEQ Expression { printf("GEQ\n"); $$ = $<obj_val>2; $$.type = 8;}
    | Expression EQL Expression { printf("EQL\n"); $$ = $<obj_val>2; $$.type = 8;/* 處理等於運算 */ }
    | Expression NEQ Expression { /* 處理運算 */
        printf("NEQ\n"); 
        $$ = $<obj_val>2; 
        $$.type = 8;
        code("if_icmpne notEqualToLabel%d",Label_num);
        codeRaw("iconst_0");
        code("goto endLabel%d",Label_num);
        code("notEqualToLabel%d:",Label_num);
        codeRaw("iconst_1");      
        code("endLabel%d:",Label_num++); } 
    | Expression LAN Expression { printf("LAN\n"); $$ = $<obj_val>2; $$.type = 8; code("%sand",getIdentTypeString($3.type));/* 處理and運算 */ }
    | Expression LOR Expression { printf("LOR\n"); $$ = $<obj_val>2; $$.type = 8; code("%sor",getIdentTypeString($3.type)); } 
    | Expression BAN Expression { printf("BAN\n"); $$ = $<obj_val>2; $$.type = 8;/* and & */} 
    | BNT Expression %prec UMINUS { printf("BNT\n");codeRaw("iconst_m1");code("%sxor",getIdentTypeString($2.type)); /*$$ = $<obj_val>2; $$.type = 8; not ~ */}    
    | Expression BOR Expression { printf("BOR\n"); $$ = $<obj_val>2; $$.type = 8;} 
    | Expression BXO Expression { printf("BXO\n"); $$ = $<obj_val>2; $$.type = 8;} 
    | Expression SHR Expression { printf("SHR\n"); $$ = $<obj_val>2; $$.type = 8;code("%sshr",getIdentTypeString($3.type));} 
    | NOT Expression %prec UMINUS { printf("NOT\n"); $$ = $<obj_val>2; $$.type = 8; codeRaw("iconst_1"); codeRaw("ixor");/* 處理NOT運算，iconst_1 做xor */ }
    | INT_LIT  {printf("INT_LIT %d\n",$1); code("ldc %d",$1); $$ = $<obj_val>1; $$.type = 4;}
    | STR_LIT  { 
        $$ = $<obj_val>1; 
        $$.type = 9; 
        $$.name = $1;
        printf("STR_LIT \"%s\"\n", $1); 
        code("ldc \"%s\"",$1);
        }
    | '(' Expression ')'  { $$ = $<obj_val>2;}
    | BOOL_LIT  {  // 處理true false
        printf("BOOL_LIT %s\n",($1 %2 == 1)?"TRUE":"FALSE"); 
        $$ = $<obj_val>1; 
        $$.type = 8;
        ($1 %2 == 1)?codeRaw("iconst_1"):codeRaw("iconst_0");
        }
    | '(' VARIABLE_T ')' Expression %prec UMINUS { castTo($<var_type>2); }    /// 提高它的優先權 使之較 ( exp ) 更早執行
    | FLOAT_LIT {printf("FLOAT_LIT %f\n",$1); code("ldc %f",$1); $$ = $<obj_val>1; $$.type = 6;}
    | IDENT {  $$ = $<obj_val>1; $$.type = findObjectType($<s_var>1);$$.name = $<s_var>1;}
    | IDENT '['INT_LIT { printf("INT_LIT %d\n",$3);} ']' {$$ = $<obj_val>1; $$.type = findObjectType($<s_var>1);$$.name = $<s_var>1; }
    |
;


Assign
    : ADD_ASSIGN Expression { printf("ADD_ASSIGN\n"); code("%sadd",getIdentTypeString($2.type));} // +=
    | EQL_ASSIGN Expression { printf("EQL_ASSIGN\n"); } // ==
    | SUB_ASSIGN Expression { printf("SUB_ASSIGN\n"); code("%ssub",getIdentTypeString($2.type));} // -=
    | MUL_ASSIGN Expression { printf("MUL_ASSIGN\n"); code("%smul",getIdentTypeString($2.type));} // *=
    | REM_ASSIGN Expression { printf("REM_ASSIGN\n"); code("%srem",getIdentTypeString($2.type));} // /=
    | SHR_ASSIGN Expression { printf("SHR_ASSIGN\n"); code("%sadd",getIdentTypeString($2.type));}
    | SHL_ASSIGN Expression { printf("SHL_ASSIGN\n"); code("%sadd",getIdentTypeString($2.type));}
    | BAN_ASSIGN Expression { printf("BAN_ASSIGN\n"); code("%sand",getIdentTypeString($2.type));}
    | BOR_ASSIGN Expression { printf("BOR_ASSIGN\n"); code("%sor",getIdentTypeString($2.type));}
    | BXO_ASSIGN Expression { printf("BXO_ASSIGN\n"); code("%sadd",getIdentTypeString($2.type));}
    | INC_ASSIGN Expression { printf("INC_ASSIGN\n"); code("%sadd",getIdentTypeString($2.type));} // ++
    | DEC_ASSIGN Expression { printf("DEC_ASSIGN\n"); code("%sadd",getIdentTypeString($2.type));}
    | DIV_ASSIGN Expression { printf("DIV_ASSIGN\n"); code("%sdiv",getIdentTypeString($2.type));} 
;     
Assign2
    : EQL_ASSIGN Expression { autoType = $<i_var>2 ;}// =   這邊回傳值會有 問題  但不知道錯在哪 printf("auto11 = %d\n",autoType);
    | EQL_ASSIGN IDENT  '(' Func')' {  findObjectType($<s_var>2);printf("call: check(IILjava/lang/String;B)B\n");}
    | EQL_ASSIGN '{'Arr'}' 
;    
%%
/* C code section */