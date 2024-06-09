

/* Definition section */
%{
    #include "compiler_common.h"
    #include "compiler_util.h"
    #include "main.h"

    int yydebug = 1;
    int arrNum = 0;
    int autoType = 100;   // 為了對付auto型別，平時為100，用完回歸100
%}

/* Variable or self-defined structure */
%union {
    ObjectType var_type;

    bool b_var;
    int i_var;
    float f_var;
    char *s_var;

    Object object_val;
}


/* Token without return */
%token COUT ENDL VAR_FLAG_DEFAULT // TODO:我宣告的的VAR_FLAG_DEFAULT
%token SHR SHL BAN BOR BNT BXO ADD SUB MUL DIV REM NOT GTR LES GEQ LEQ EQL NEQ LAN LOR
%token VAL_ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN REM_ASSIGN BAN_ASSIGN BOR_ASSIGN BXO_ASSIGN SHR_ASSIGN SHL_ASSIGN INC_ASSIGN DEC_ASSIGN EQL_ASSIGN
%token IF ELSE FOR WHILE RETURN BREAK CONTINUE
%token '(' ')'


/* Token with return, which need to sepcify type */
%token <var_type> VARIABLE_T BOOL_LIT  
%token <s_var> IDENT STR_LIT 
%token <i_var> INT_LIT 
%token <f_var> FLOAT_LIT 

/* Nonterminal with return, which need to sepcify type */
%type <object_val> Expression
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
    : VARIABLE_T  IDENTS';' { changePSD($<var_type>1); }  
    /*變數類型  變數名稱 賦值運算符    */
    | Expression Assign ';' 
;

IDENTS
    : IDENTS ',' IDENT { pushFunParm(autoType , $<s_var>3, VAR_FLAG_DEFAULT); autoType = 100; }    // 傳入100是為了對付 int a , b 這種狀況
    | IDENT {  pushFunParm(autoType, $<s_var>1, VAR_FLAG_DEFAULT); autoType = 100; }
    | IDENTS ',' IDENT Assign2 { pushFunParm(autoType, $<s_var>3, VAR_FLAG_DEFAULT); autoType = 100; }
    | IDENT  Assign2 { pushFunParm(autoType, $<s_var>1, VAR_FLAG_DEFAULT); autoType = 100; }  //// d 走這邊
    | IDENT '[' INT_LIT { printf("INT_LIT %d\n",$3);}  ']' InArr  { printf("create array: %d\n",arrNum); arrNum = 0; pushFunParm(autoType, $<s_var>1, VAR_FLAG_DEFAULT); autoType = 100;} 
                                                                        ///  這邊要改成實際幾個數字

;
/*
Assign2
    : EQL_ASSIGN Expression // =
*/

/* Function */
FunctionDefStmt
    : VARIABLE_T IDENT {  createFunction(10, $<s_var>2); } '(' FunctionParameterStmtListFirst ')'  '{' {resetPushsym();} StmtList '}' { dumpScope(); }
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
    | VARIABLE_T IDENT { pushFunParm($<var_type>1, $<s_var>2, VAR_FLAG_DEFAULT); }
    /*變數類型  變數名稱*/
;

/* Scope */
StmtList 
    :  StmtList  Stmt {}
    |  Stmt {}
;
Stmt
    : ';'
    | DefineVariableStmt
    | COUT CoutParmListStmt ';' {stdoutPrint(); resetPushsym();}
    | RETURN Expression ';' { printf("RETURN\n"); }
    | IF IfStmt 
    | WHILE WhileStmt
    | FOR ForStmt
    | BREAK ';' {printf("BREAK\n");}
;



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
    : VARIABLE_T  IDENTS  { changePSD($<var_type>1); }  
    /*變數類型  變數名稱 賦值運算符    */
    | Expression Assign 
    |
;

ForThrid
    : '(' ForSecond';' Expression ';' ForSecond ')'
    |  %prec UMINUS '(' ForSecond ':' IDENT ')' { changePSD(findObjectType($<s_var>5));}
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
    : CoutParmListStmt SHL Expression { pushFunInParm(&$<object_val>3); } // 後
    | SHL Expression { pushFunInParm(&$<object_val>2); } // 先
    |
;
// IDENT => 變數的意思
Expression
    : Expression ENDL Expression { printf("IDENT (name=endl, address=-1)\n");$$ = $<object_val>2; $$.type = 9;} 
    | Expression ADD Expression { printf("ADD\n"); /* 處理加法運算 */ }
    | Expression SUB Expression { printf("SUB\n"); /* 處理減法運算 */ }    
    | Expression MUL Expression { printf("MUL\n"); /* 處理乘法運算 */ }
    | Expression DIV Expression { printf("DIV\n"); /* 處理除法運算 */ }
    | Expression REM Expression { printf("REM\n"); /* 處理取餘運算 */ }
    | SUB Expression %prec UMINUS { printf("NEG\n");  } 
    | Expression GTR Expression { printf("GTR\n"); $$ = $<object_val>2; $$.type = 8; }
    | Expression LES Expression { printf("LES\n"); $$ = $<object_val>2; $$.type = 8;/* 小於 */ }
    | Expression LOR Expression { printf("LOR\n"); $$ = $<object_val>2; $$.type = 8; }
    | Expression GEQ Expression { printf("GEQ\n"); $$ = $<object_val>2; $$.type = 8;}
    | Expression EQL Expression { printf("EQL\n"); $$ = $<object_val>2; $$.type = 8;/* 處理取餘運算 */ }
    | Expression NEQ Expression { printf("NEQ\n"); $$ = $<object_val>2; $$.type = 8;/* 處理取餘運算 */ } 
    | Expression LAN Expression { printf("LAN\n"); $$ = $<object_val>2; $$.type = 8;/* 處理取餘運算 */ }
    | Expression LOR Expression { printf("LOR\n"); $$ = $<object_val>2; $$.type = 8;} 
    | Expression BAN Expression { printf("BAN\n"); $$ = $<object_val>2; $$.type = 8;/* and & */} 
    | BNT Expression %prec UMINUS { printf("BNT\n"); /*$$ = $<object_val>2; $$.type = 8; not ~ */}    
    | Expression BOR Expression { printf("BOR\n"); $$ = $<object_val>2; $$.type = 8;} 
    | Expression BXO Expression { printf("BXO\n"); $$ = $<object_val>2; $$.type = 8;} 
    | Expression SHR Expression { printf("SHR\n"); $$ = $<object_val>2; $$.type = 8;} 
    | NOT Expression %prec UMINUS { printf("NOT\n"); $$ = $<object_val>2; $$.type = 8;/* 處理取餘運算 */ }
    | INT_LIT  {printf("INT_LIT %d\n",$1); $$ = $<object_val>1; $$.type = 4;}
    | STR_LIT  { $$ = $<object_val>1; $$.type = 9; printf("STR_LIT \"%s\"\n", $1);}
    | '(' Expression ')'  { $$ = $<object_val>2; }
    | BOOL_LIT  {printf("BOOL_LIT %s\n",($1 %2 == 1)?"TRUE":"FALSE"); $$ = $<object_val>1; $$.type = 8;}
    | '(' VARIABLE_T ')' Expression %prec UMINUS { castTo($<var_type>2); }    /// 提高它的優先權 使之較 ( exp ) 更早執行
    | FLOAT_LIT {printf("FLOAT_LIT %f\n",$1); $$ = $<object_val>1; $$.type = 6;}
    | IDENT {  $$ = $<object_val>1; $$.type = findObjectType($<s_var>1);}
    | IDENT '['INT_LIT { printf("INT_LIT %d\n",$3);} ']' {$$ = $<object_val>1; $$.type = findObjectType($<s_var>1); }
    |
;


Assign
    : ADD_ASSIGN Expression { printf("ADD_ASSIGN\n"); } // +=
    | EQL_ASSIGN Expression { printf("EQL_ASSIGN\n"); }
    | SUB_ASSIGN Expression { printf("SUB_ASSIGN\n"); }
    | MUL_ASSIGN Expression { printf("MUL_ASSIGN\n"); }
    | REM_ASSIGN Expression { printf("REM_ASSIGN\n"); }
    | SHR_ASSIGN Expression { printf("SHR_ASSIGN\n"); }
    | SHL_ASSIGN Expression { printf("SHL_ASSIGN\n"); }
    | BAN_ASSIGN Expression { printf("BAN_ASSIGN\n"); }
    | BOR_ASSIGN Expression { printf("BOR_ASSIGN\n"); }
    | BXO_ASSIGN Expression { printf("BXO_ASSIGN\n"); }
    | INC_ASSIGN Expression { printf("INC_ASSIGN\n"); } // ++
    | DEC_ASSIGN Expression { printf("DEC_ASSIGN\n"); }
    | DIV_ASSIGN Expression { printf("DIV_ASSIGN\n"); } 
;     
Assign2
    : EQL_ASSIGN Expression { autoType = $<s_var>2 ;}// =   這邊回傳值會有 問題  但不知道錯在哪 printf("auto11 = %d\n",autoType);
    | EQL_ASSIGN IDENT  '(' Func')' {  findObjectType($<s_var>2);printf("call: check(IILjava/lang/String;B)B\n");}
    | EQL_ASSIGN '{'Arr'}' 
;    
%%
/* C code section */

// IDENT '[' INT_LIT ']' Assign2 