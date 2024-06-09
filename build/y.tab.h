/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BUILD_Y_TAB_H_INCLUDED
# define YY_YY_BUILD_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    COUT = 258,                    /* COUT  */
    ENDL = 259,                    /* ENDL  */
    VAR_FLAG_DEFAULT = 260,        /* VAR_FLAG_DEFAULT  */
    SHR = 261,                     /* SHR  */
    SHL = 262,                     /* SHL  */
    BAN = 263,                     /* BAN  */
    BOR = 264,                     /* BOR  */
    BNT = 265,                     /* BNT  */
    BXO = 266,                     /* BXO  */
    ADD = 267,                     /* ADD  */
    SUB = 268,                     /* SUB  */
    MUL = 269,                     /* MUL  */
    DIV = 270,                     /* DIV  */
    REM = 271,                     /* REM  */
    NOT = 272,                     /* NOT  */
    GTR = 273,                     /* GTR  */
    LES = 274,                     /* LES  */
    GEQ = 275,                     /* GEQ  */
    LEQ = 276,                     /* LEQ  */
    EQL = 277,                     /* EQL  */
    NEQ = 278,                     /* NEQ  */
    LAN = 279,                     /* LAN  */
    LOR = 280,                     /* LOR  */
    VAL_ASSIGN = 281,              /* VAL_ASSIGN  */
    ADD_ASSIGN = 282,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 283,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 284,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 285,              /* DIV_ASSIGN  */
    REM_ASSIGN = 286,              /* REM_ASSIGN  */
    BAN_ASSIGN = 287,              /* BAN_ASSIGN  */
    BOR_ASSIGN = 288,              /* BOR_ASSIGN  */
    BXO_ASSIGN = 289,              /* BXO_ASSIGN  */
    SHR_ASSIGN = 290,              /* SHR_ASSIGN  */
    SHL_ASSIGN = 291,              /* SHL_ASSIGN  */
    INC_ASSIGN = 292,              /* INC_ASSIGN  */
    DEC_ASSIGN = 293,              /* DEC_ASSIGN  */
    EQL_ASSIGN = 294,              /* EQL_ASSIGN  */
    IF = 295,                      /* IF  */
    ELSE = 296,                    /* ELSE  */
    FOR = 297,                     /* FOR  */
    WHILE = 298,                   /* WHILE  */
    RETURN = 299,                  /* RETURN  */
    BREAK = 300,                   /* BREAK  */
    CONTINUE = 301,                /* CONTINUE  */
    VARIABLE_T = 302,              /* VARIABLE_T  */
    BOOL_LIT = 303,                /* BOOL_LIT  */
    IDENT = 304,                   /* IDENT  */
    STR_LIT = 305,                 /* STR_LIT  */
    INT_LIT = 306,                 /* INT_LIT  */
    FLOAT_LIT = 307,               /* FLOAT_LIT  */
    UMINUS = 308                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define COUT 258
#define ENDL 259
#define VAR_FLAG_DEFAULT 260
#define SHR 261
#define SHL 262
#define BAN 263
#define BOR 264
#define BNT 265
#define BXO 266
#define ADD 267
#define SUB 268
#define MUL 269
#define DIV 270
#define REM 271
#define NOT 272
#define GTR 273
#define LES 274
#define GEQ 275
#define LEQ 276
#define EQL 277
#define NEQ 278
#define LAN 279
#define LOR 280
#define VAL_ASSIGN 281
#define ADD_ASSIGN 282
#define SUB_ASSIGN 283
#define MUL_ASSIGN 284
#define DIV_ASSIGN 285
#define REM_ASSIGN 286
#define BAN_ASSIGN 287
#define BOR_ASSIGN 288
#define BXO_ASSIGN 289
#define SHR_ASSIGN 290
#define SHL_ASSIGN 291
#define INC_ASSIGN 292
#define DEC_ASSIGN 293
#define EQL_ASSIGN 294
#define IF 295
#define ELSE 296
#define FOR 297
#define WHILE 298
#define RETURN 299
#define BREAK 300
#define CONTINUE 301
#define VARIABLE_T 302
#define BOOL_LIT 303
#define IDENT 304
#define STR_LIT 305
#define INT_LIT 306
#define FLOAT_LIT 307
#define UMINUS 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "./compiler.y"

    ObjectType var_type;

    bool b_var;
    int i_var;
    float f_var;
    char *s_var;

    Object object_val;

#line 184 "./build/y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BUILD_Y_TAB_H_INCLUDED  */
