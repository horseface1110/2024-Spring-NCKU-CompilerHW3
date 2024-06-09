/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "./compiler.y"

    #include "compiler_common.h"
    #include "compiler_util.h"
    #include "main.h"

    int yydebug = 1;
    int arrNum = 0;
    int autoType = 100;   // 為了對付auto型別，平時為100，用完回歸100

#line 81 "./build/y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COUT = 3,                       /* COUT  */
  YYSYMBOL_ENDL = 4,                       /* ENDL  */
  YYSYMBOL_VAR_FLAG_DEFAULT = 5,           /* VAR_FLAG_DEFAULT  */
  YYSYMBOL_SHR = 6,                        /* SHR  */
  YYSYMBOL_SHL = 7,                        /* SHL  */
  YYSYMBOL_BAN = 8,                        /* BAN  */
  YYSYMBOL_BOR = 9,                        /* BOR  */
  YYSYMBOL_BNT = 10,                       /* BNT  */
  YYSYMBOL_BXO = 11,                       /* BXO  */
  YYSYMBOL_ADD = 12,                       /* ADD  */
  YYSYMBOL_SUB = 13,                       /* SUB  */
  YYSYMBOL_MUL = 14,                       /* MUL  */
  YYSYMBOL_DIV = 15,                       /* DIV  */
  YYSYMBOL_REM = 16,                       /* REM  */
  YYSYMBOL_NOT = 17,                       /* NOT  */
  YYSYMBOL_GTR = 18,                       /* GTR  */
  YYSYMBOL_LES = 19,                       /* LES  */
  YYSYMBOL_GEQ = 20,                       /* GEQ  */
  YYSYMBOL_LEQ = 21,                       /* LEQ  */
  YYSYMBOL_EQL = 22,                       /* EQL  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_LAN = 24,                       /* LAN  */
  YYSYMBOL_LOR = 25,                       /* LOR  */
  YYSYMBOL_VAL_ASSIGN = 26,                /* VAL_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 27,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 28,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 29,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 30,                /* DIV_ASSIGN  */
  YYSYMBOL_REM_ASSIGN = 31,                /* REM_ASSIGN  */
  YYSYMBOL_BAN_ASSIGN = 32,                /* BAN_ASSIGN  */
  YYSYMBOL_BOR_ASSIGN = 33,                /* BOR_ASSIGN  */
  YYSYMBOL_BXO_ASSIGN = 34,                /* BXO_ASSIGN  */
  YYSYMBOL_SHR_ASSIGN = 35,                /* SHR_ASSIGN  */
  YYSYMBOL_SHL_ASSIGN = 36,                /* SHL_ASSIGN  */
  YYSYMBOL_INC_ASSIGN = 37,                /* INC_ASSIGN  */
  YYSYMBOL_DEC_ASSIGN = 38,                /* DEC_ASSIGN  */
  YYSYMBOL_EQL_ASSIGN = 39,                /* EQL_ASSIGN  */
  YYSYMBOL_IF = 40,                        /* IF  */
  YYSYMBOL_ELSE = 41,                      /* ELSE  */
  YYSYMBOL_FOR = 42,                       /* FOR  */
  YYSYMBOL_WHILE = 43,                     /* WHILE  */
  YYSYMBOL_RETURN = 44,                    /* RETURN  */
  YYSYMBOL_BREAK = 45,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 46,                  /* CONTINUE  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_VARIABLE_T = 49,                /* VARIABLE_T  */
  YYSYMBOL_BOOL_LIT = 50,                  /* BOOL_LIT  */
  YYSYMBOL_IDENT = 51,                     /* IDENT  */
  YYSYMBOL_STR_LIT = 52,                   /* STR_LIT  */
  YYSYMBOL_INT_LIT = 53,                   /* INT_LIT  */
  YYSYMBOL_FLOAT_LIT = 54,                 /* FLOAT_LIT  */
  YYSYMBOL_UMINUS = 55,                    /* UMINUS  */
  YYSYMBOL_56_ = 56,                       /* ';'  */
  YYSYMBOL_57_ = 57,                       /* ','  */
  YYSYMBOL_58_ = 58,                       /* '['  */
  YYSYMBOL_59_ = 59,                       /* ']'  */
  YYSYMBOL_60_ = 60,                       /* '{'  */
  YYSYMBOL_61_ = 61,                       /* '}'  */
  YYSYMBOL_62_ = 62,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_Program = 64,                   /* Program  */
  YYSYMBOL_65_1 = 65,                      /* $@1  */
  YYSYMBOL_GlobalStmtList = 66,            /* GlobalStmtList  */
  YYSYMBOL_GlobalStmt = 67,                /* GlobalStmt  */
  YYSYMBOL_DefineVariableStmt = 68,        /* DefineVariableStmt  */
  YYSYMBOL_IDENTS = 69,                    /* IDENTS  */
  YYSYMBOL_70_2 = 70,                      /* $@2  */
  YYSYMBOL_FunctionDefStmt = 71,           /* FunctionDefStmt  */
  YYSYMBOL_72_3 = 72,                      /* $@3  */
  YYSYMBOL_73_4 = 73,                      /* $@4  */
  YYSYMBOL_FunctionParameterStmtListFirst = 74, /* FunctionParameterStmtListFirst  */
  YYSYMBOL_75_5 = 75,                      /* $@5  */
  YYSYMBOL_FunctionParameterStmtList = 76, /* FunctionParameterStmtList  */
  YYSYMBOL_FunctionParameterStmt = 77,     /* FunctionParameterStmt  */
  YYSYMBOL_StmtList = 78,                  /* StmtList  */
  YYSYMBOL_Stmt = 79,                      /* Stmt  */
  YYSYMBOL_IfStmt = 80,                    /* IfStmt  */
  YYSYMBOL_81_6 = 81,                      /* $@6  */
  YYSYMBOL_82_7 = 82,                      /* $@7  */
  YYSYMBOL_83_8 = 83,                      /* $@8  */
  YYSYMBOL_WhileStmt = 84,                 /* WhileStmt  */
  YYSYMBOL_85_9 = 85,                      /* $@9  */
  YYSYMBOL_86_10 = 86,                     /* $@10  */
  YYSYMBOL_ForStmt = 87,                   /* ForStmt  */
  YYSYMBOL_88_11 = 88,                     /* $@11  */
  YYSYMBOL_ForSecond = 89,                 /* ForSecond  */
  YYSYMBOL_ForThrid = 90,                  /* ForThrid  */
  YYSYMBOL_Func = 91,                      /* Func  */
  YYSYMBOL_Arr = 92,                       /* Arr  */
  YYSYMBOL_InArr = 93,                     /* InArr  */
  YYSYMBOL_94_12 = 94,                     /* $@12  */
  YYSYMBOL_CoutParmListStmt = 95,          /* CoutParmListStmt  */
  YYSYMBOL_Expression = 96,                /* Expression  */
  YYSYMBOL_97_13 = 97,                     /* $@13  */
  YYSYMBOL_Assign = 98,                    /* Assign  */
  YYSYMBOL_Assign2 = 99                    /* Assign2  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   728

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,     2,     2,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,    56,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    49,    50,    51,    52,    53,    54,    55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    64,    65,    69,    70,    74,    75,    79,
      81,    85,    86,    87,    88,    89,    89,   100,   100,   100,
     104,   104,   107,   108,   109,   112,   113,   119,   120,   123,
     124,   125,   126,   127,   128,   129,   130,   137,   137,   138,
     138,   139,   139,   145,   145,   145,   150,   150,   154,   156,
     157,   161,   162,   168,   169,   175,   176,   177,   181,   181,
     182,   187,   188,   189,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   221,   222,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   242,   243,
     244
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "COUT", "ENDL",
  "VAR_FLAG_DEFAULT", "SHR", "SHL", "BAN", "BOR", "BNT", "BXO", "ADD",
  "SUB", "MUL", "DIV", "REM", "NOT", "GTR", "LES", "GEQ", "LEQ", "EQL",
  "NEQ", "LAN", "LOR", "VAL_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "REM_ASSIGN", "BAN_ASSIGN", "BOR_ASSIGN",
  "BXO_ASSIGN", "SHR_ASSIGN", "SHL_ASSIGN", "INC_ASSIGN", "DEC_ASSIGN",
  "EQL_ASSIGN", "IF", "ELSE", "FOR", "WHILE", "RETURN", "BREAK",
  "CONTINUE", "'('", "')'", "VARIABLE_T", "BOOL_LIT", "IDENT", "STR_LIT",
  "INT_LIT", "FLOAT_LIT", "UMINUS", "';'", "','", "'['", "']'", "'{'",
  "'}'", "':'", "$accept", "Program", "$@1", "GlobalStmtList",
  "GlobalStmt", "DefineVariableStmt", "IDENTS", "$@2", "FunctionDefStmt",
  "$@3", "$@4", "FunctionParameterStmtListFirst", "$@5",
  "FunctionParameterStmtList", "FunctionParameterStmt", "StmtList", "Stmt",
  "IfStmt", "$@6", "$@7", "$@8", "WhileStmt", "$@9", "$@10", "ForStmt",
  "$@11", "ForSecond", "ForThrid", "Func", "Arr", "InArr", "$@12",
  "CoutParmListStmt", "Expression", "$@13", "Assign", "Assign2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-136)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-58)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,    76,   529,  -136,   575,   575,   575,   555,   -29,  -136,
      15,  -136,  -136,  -136,   297,  -136,  -136,  -136,   626,   126,
     126,   126,    27,   490,    22,    10,    34,  -136,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,    39,   575,
    -136,   437,    45,    57,  -136,  -136,    55,  -136,   662,   662,
     126,   662,   662,    85,    85,    73,    73,    73,     2,     2,
       2,     2,     2,   705,   684,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   662,  -136,   126,
      12,   425,   662,  -136,  -136,    68,    49,   575,    29,   662,
      51,    63,    65,  -136,  -136,    17,   662,   575,  -136,    68,
      52,    72,    59,  -136,  -136,   575,   662,    82,  -136,  -136,
      93,    65,   662,    80,   312,    91,  -136,  -136,   127,   105,
    -136,  -136,   575,    97,   104,  -136,  -136,    75,  -136,  -136,
      98,   575,     0,   575,   115,  -136,   111,  -136,   112,   363,
    -136,   -35,  -136,  -136,  -136,   662,   575,  -136,   512,  -136,
      92,   100,   575,  -136,   662,   117,   107,   104,     6,   626,
     312,   539,   109,   120,   312,   108,   575,   121,  -136,   160,
    -136,   312,   575,   182,   385,   123,  -136,   114,   227,   409,
    -136,   289,  -136,   312,  -136,  -136,   128,   242,  -136,  -136
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    94,     1,    94,    94,    94,    94,     0,    88,
      91,    86,    85,    90,    94,     6,     7,     8,     0,    80,
      70,    84,     0,     0,    12,     0,     0,     5,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,     0,    94,
      87,    94,     0,     0,    14,     9,     0,    92,    64,    83,
      79,    81,    82,    65,    66,    67,    68,    69,    71,    72,
      74,    75,    76,    77,    73,    95,    97,    98,   107,    99,
     102,   103,   104,   100,   101,   105,   106,    96,    10,    89,
      91,    94,   108,    15,    20,    11,     0,    94,     0,    56,
       0,     0,    24,    13,    93,     0,    54,    94,   110,     0,
       0,     0,    21,    23,   109,    94,    55,    16,    60,    18,
      26,     0,    53,     0,    94,     0,    22,    58,    63,     0,
      46,    43,    94,     0,     0,    29,    30,    94,    28,    25,
       0,    94,     0,    94,    33,    35,     0,    34,     0,     0,
      36,    12,    19,    27,    59,    62,    94,    31,     0,    39,
      94,     0,    94,    32,    61,    37,     0,     0,     0,     0,
      94,     0,     0,     0,    94,    48,    94,     0,    49,    94,
      44,    94,    94,    94,     0,     0,    47,     0,    94,     0,
      40,    94,    52,    94,    38,    42,     0,    94,    51,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,  -136,  -136,   161,     7,     1,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,    48,  -120,  -135,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,   -21,  -136,  -136,  -136,
    -136,  -136,  -136,    -4,  -136,     4,  -100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    14,    15,   146,    25,   110,    17,    63,
     134,   111,   112,   122,   123,   147,   148,   154,   182,   176,
     183,   157,   158,   197,   155,   156,   178,   171,   115,   108,
     127,   150,   152,    18,   106,    58,    64
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    20,    21,    23,    61,   113,    28,   166,    29,    16,
      30,    31,   163,    32,    33,    34,    35,    36,    37,   128,
      -4,    16,    24,    62,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   163,    99,   167,   102,   163,   107,
     189,    61,   186,   163,   193,   124,    65,    66,   187,   -17,
      26,   198,   163,    26,   125,    59,     3,    28,   138,    29,
      62,    30,    31,   207,    32,     4,   117,    67,     5,    28,
     118,    29,     6,    30,    31,    98,    32,   109,   103,    35,
      36,    37,     4,   116,   104,     5,   105,    61,   114,     6,
     119,   120,   129,   126,   121,   139,   131,   140,   141,   142,
     143,   132,     7,   130,   144,     9,    10,    11,    12,    13,
      28,   145,    29,   137,   151,    31,   162,    32,   159,     7,
     133,   177,     9,    10,    11,    12,    13,   165,   -50,   168,
     149,   135,   153,   160,   -50,   161,   169,   164,   170,   172,
     180,   -41,   174,   138,   192,    66,   179,   184,   181,   191,
       4,   202,   195,     5,   203,    27,   208,     6,   185,   136,
     206,     0,   194,   188,     0,   138,     0,     0,   199,     0,
       0,     0,     4,     0,     0,     5,     0,   179,     0,     6,
     139,     0,   140,   141,   142,   143,     0,     7,     0,   144,
       9,    10,    11,    12,    13,     0,   145,     0,     0,     0,
       0,   196,   139,     0,   140,   141,   142,   143,     0,     7,
     138,   144,     9,    10,    11,    12,    13,     4,   145,     0,
       5,     0,     0,   200,     6,   138,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     5,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,   139,     0,   140,
     141,   142,   143,     0,     7,     0,   144,     9,    10,    11,
      12,    13,   139,   145,   140,   141,   142,   143,   204,     7,
       0,   144,     9,    10,    11,    12,    13,    -3,   145,     4,
       0,     0,     5,   209,     0,     0,     6,     4,     0,     0,
       5,     0,     0,     0,     6,   138,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     5,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     7,   -50,   177,     9,
      10,    11,    12,    13,     7,     0,     8,     9,    10,    11,
      12,    13,   139,     0,   140,   141,   142,   143,     0,     7,
       0,   144,     9,    10,    11,    12,    13,    28,   145,    29,
       0,    30,    31,     0,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,     0,    41,    42,    43,    44,    28,
       0,    29,     0,    30,    31,     0,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,    41,    42,    43,
      44,     0,     0,    28,     0,    29,     0,    30,    31,   173,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,    41,    42,    43,    44,     4,     0,     0,     5,     0,
       0,   201,     6,     0,     0,     0,     0,     4,     0,     0,
       5,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   205,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     9,    10,    11,    12,    13,
       0,     0,   -57,     0,     7,     0,   -57,     9,   100,    11,
      12,    13,     0,     0,    28,     0,    29,   101,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,    42,    43,    44,    28,     0,    29,     0,
      30,    31,     0,    32,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,    42,    43,    44,    60,     4,
       0,     0,     5,    28,     0,    29,     6,    30,    31,     0,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
     175,    41,    42,    43,    44,     4,     0,     0,     5,     0,
       0,     0,     6,     0,     0,     0,     7,     0,     8,     9,
      10,    11,    12,    13,     0,     4,     0,   190,     5,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,    22,     9,    10,    11,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     9,    10,    11,    12,    13,
      28,     0,    29,     0,    30,    31,     0,    32,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,    42,
      43,    44,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    28,     0,    29,     0,
      30,    31,     0,    32,    33,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,    42,    43,    44,    28,     0,
      29,     0,    30,    31,     0,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,     0,    41,    42,    43,    28,
       0,    29,     0,    30,    31,     0,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,    41,    42
};

static const yytype_int16 yycheck[] =
{
       4,     5,     6,     7,    39,   105,     4,     7,     6,     2,
       8,     9,   147,    11,    12,    13,    14,    15,    16,   119,
       0,    14,    51,    58,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   189,    59,    56,    61,   193,    47,
     180,    39,    56,   198,   184,    48,    56,    57,    62,    47,
      58,   191,   207,    58,    57,    48,     0,     4,     3,     6,
      58,     8,     9,   203,    11,    10,    57,    53,    13,     4,
      61,     6,    17,     8,     9,    56,    11,   101,    53,    14,
      15,    16,    10,   107,    47,    13,    51,    39,    59,    17,
      59,    48,    60,   117,    49,    40,    57,    42,    43,    44,
      45,   125,    47,    51,    49,    50,    51,    52,    53,    54,
       4,    56,     6,    53,     7,     9,    61,    11,   142,    47,
      58,    49,    50,    51,    52,    53,    54,   151,    56,   153,
      59,    58,    47,    56,    62,    51,    41,    59,    47,    47,
      60,    44,   166,     3,    44,    57,   170,    60,   172,    60,
      10,    48,    51,    13,    60,    14,    48,    17,   177,   131,
     201,    -1,   186,   179,    -1,     3,    -1,    -1,   192,    -1,
      -1,    -1,    10,    -1,    -1,    13,    -1,   201,    -1,    17,
      40,    -1,    42,    43,    44,    45,    -1,    47,    -1,    49,
      50,    51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    61,    40,    -1,    42,    43,    44,    45,    -1,    47,
       3,    49,    50,    51,    52,    53,    54,    10,    56,    -1,
      13,    -1,    -1,    61,    17,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    -1,    47,    -1,    49,    50,    51,    52,
      53,    54,    40,    56,    42,    43,    44,    45,    61,    47,
      -1,    49,    50,    51,    52,    53,    54,     0,    56,    10,
      -1,    -1,    13,    61,    -1,    -1,    17,    10,    -1,    -1,
      13,    -1,    -1,    -1,    17,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    47,    -1,    49,    50,    51,    52,
      53,    54,    40,    -1,    42,    43,    44,    45,    -1,    47,
      -1,    49,    50,    51,    52,    53,    54,     4,    56,     6,
      -1,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    -1,    22,    23,    24,    25,     4,
      -1,     6,    -1,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    -1,    -1,     4,    -1,     6,    -1,     8,     9,    56,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      -1,    22,    23,    24,    25,    10,    -1,    -1,    13,    -1,
      -1,    56,    17,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    -1,    57,    -1,    47,    -1,    61,    50,    51,    52,
      53,    54,    -1,    -1,     4,    -1,     6,    60,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,     4,    -1,     6,    -1,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    -1,    22,    23,    24,    25,    48,    10,
      -1,    -1,    13,     4,    -1,     6,    17,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      48,    22,    23,    24,    25,    10,    -1,    -1,    13,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    47,    -1,    49,    50,
      51,    52,    53,    54,    -1,    10,    -1,    48,    13,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
       4,    -1,     6,    -1,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    -1,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     4,    -1,     6,    -1,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    -1,    22,    23,    24,    25,     4,    -1,
       6,    -1,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    -1,    22,    23,    24,     4,
      -1,     6,    -1,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    -1,    22,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    64,    65,     0,    10,    13,    17,    47,    49,    50,
      51,    52,    53,    54,    66,    67,    68,    71,    96,    96,
      96,    96,    49,    96,    51,    69,    58,    67,     4,     6,
       8,     9,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    22,    23,    24,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    98,    48,
      48,    39,    58,    72,    99,    56,    57,    53,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    56,    96,
      51,    60,    96,    53,    47,    51,    97,    47,    92,    96,
      70,    74,    75,    99,    59,    91,    96,    57,    61,    59,
      48,    49,    76,    77,    48,    57,    96,    93,    99,    60,
      51,    57,    96,    58,    73,    58,    77,    53,     3,    40,
      42,    43,    44,    45,    49,    56,    68,    78,    79,    59,
      94,     7,    95,    47,    80,    87,    88,    84,    85,    96,
      56,    51,    61,    79,    59,    96,     7,    56,    96,    41,
      47,    90,    47,    56,    96,    48,    82,    49,    89,    96,
      60,    96,    81,    83,    60,    69,    56,    62,    98,    78,
      48,    60,    44,    78,    96,    51,    61,    86,    78,    96,
      61,    56,    48,    60,    61,    56,    89,    78,    48,    61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    65,    64,    64,    66,    66,    67,    67,    68,
      68,    69,    69,    69,    69,    70,    69,    72,    73,    71,
      75,    74,    76,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    81,    80,    82,
      80,    83,    80,    85,    86,    84,    88,    87,    89,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    94,    93,
      93,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    97,    96,    96,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     1,     1,     1,     3,
       3,     3,     1,     4,     2,     0,     6,     0,     0,    10,
       0,     2,     3,     1,     0,     4,     2,     2,     1,     1,
       1,     3,     3,     2,     2,     2,     2,     0,     7,     0,
       6,     0,     7,     0,     0,     8,     0,     5,     2,     2,
       0,     7,     5,     3,     1,     3,     1,     0,     0,     5,
       1,     3,     2,     0,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     2,     1,     1,     3,     1,     4,
       1,     1,     0,     5,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     5,
       4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 64 "./compiler.y"
      { pushScope(); }
#line 1415 "./build/y.tab.c"
    break;

  case 3: /* Program: $@1 GlobalStmtList  */
#line 64 "./compiler.y"
                                      { dumpScope(); }
#line 1421 "./build/y.tab.c"
    break;

  case 5: /* GlobalStmtList: GlobalStmtList GlobalStmt  */
#line 69 "./compiler.y"
                                {}
#line 1427 "./build/y.tab.c"
    break;

  case 6: /* GlobalStmtList: GlobalStmt  */
#line 70 "./compiler.y"
                 {}
#line 1433 "./build/y.tab.c"
    break;

  case 7: /* GlobalStmt: DefineVariableStmt  */
#line 74 "./compiler.y"
                         {}
#line 1439 "./build/y.tab.c"
    break;

  case 8: /* GlobalStmt: FunctionDefStmt  */
#line 75 "./compiler.y"
                      {}
#line 1445 "./build/y.tab.c"
    break;

  case 9: /* DefineVariableStmt: VARIABLE_T IDENTS ';'  */
#line 79 "./compiler.y"
                            { changePSD((yyvsp[-2].var_type)); }
#line 1451 "./build/y.tab.c"
    break;

  case 11: /* IDENTS: IDENTS ',' IDENT  */
#line 85 "./compiler.y"
                       { pushFunParm(autoType , (yyvsp[0].s_var), VAR_FLAG_DEFAULT); autoType = 100; }
#line 1457 "./build/y.tab.c"
    break;

  case 12: /* IDENTS: IDENT  */
#line 86 "./compiler.y"
            {  pushFunParm(autoType, (yyvsp[0].s_var), VAR_FLAG_DEFAULT); autoType = 100; }
#line 1463 "./build/y.tab.c"
    break;

  case 13: /* IDENTS: IDENTS ',' IDENT Assign2  */
#line 87 "./compiler.y"
                               { pushFunParm(autoType, (yyvsp[-1].s_var), VAR_FLAG_DEFAULT); autoType = 100; }
#line 1469 "./build/y.tab.c"
    break;

  case 14: /* IDENTS: IDENT Assign2  */
#line 88 "./compiler.y"
                     { pushFunParm(autoType, (yyvsp[-1].s_var), VAR_FLAG_DEFAULT); autoType = 100; }
#line 1475 "./build/y.tab.c"
    break;

  case 15: /* $@2: %empty  */
#line 89 "./compiler.y"
                        { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1481 "./build/y.tab.c"
    break;

  case 16: /* IDENTS: IDENT '[' INT_LIT $@2 ']' InArr  */
#line 89 "./compiler.y"
                                                                  { printf("create array: %d\n",arrNum); arrNum = 0; pushFunParm(autoType, (yyvsp[-5].s_var), VAR_FLAG_DEFAULT); autoType = 100;}
#line 1487 "./build/y.tab.c"
    break;

  case 17: /* $@3: %empty  */
#line 100 "./compiler.y"
                       {  createFunction(10, (yyvsp[0].s_var)); }
#line 1493 "./build/y.tab.c"
    break;

  case 18: /* $@4: %empty  */
#line 100 "./compiler.y"
                                                                                                       {resetPushsym();}
#line 1499 "./build/y.tab.c"
    break;

  case 19: /* FunctionDefStmt: VARIABLE_T IDENT $@3 '(' FunctionParameterStmtListFirst ')' '{' $@4 StmtList '}'  */
#line 100 "./compiler.y"
                                                                                                                                      { dumpScope(); }
#line 1505 "./build/y.tab.c"
    break;

  case 20: /* $@5: %empty  */
#line 104 "./compiler.y"
      { pushFun();}
#line 1511 "./build/y.tab.c"
    break;

  case 22: /* FunctionParameterStmtList: FunctionParameterStmtList ',' FunctionParameterStmt  */
#line 107 "./compiler.y"
                                                          {  }
#line 1517 "./build/y.tab.c"
    break;

  case 23: /* FunctionParameterStmtList: FunctionParameterStmt  */
#line 108 "./compiler.y"
                            {   }
#line 1523 "./build/y.tab.c"
    break;

  case 25: /* FunctionParameterStmt: VARIABLE_T IDENT '[' ']'  */
#line 112 "./compiler.y"
                              { pushFunParm((yyvsp[-3].var_type), (yyvsp[-2].s_var), VAR_FLAG_DEFAULT); }
#line 1529 "./build/y.tab.c"
    break;

  case 26: /* FunctionParameterStmt: VARIABLE_T IDENT  */
#line 113 "./compiler.y"
                       { pushFunParm((yyvsp[-1].var_type), (yyvsp[0].s_var), VAR_FLAG_DEFAULT); }
#line 1535 "./build/y.tab.c"
    break;

  case 27: /* StmtList: StmtList Stmt  */
#line 119 "./compiler.y"
                      {}
#line 1541 "./build/y.tab.c"
    break;

  case 28: /* StmtList: Stmt  */
#line 120 "./compiler.y"
            {}
#line 1547 "./build/y.tab.c"
    break;

  case 31: /* Stmt: COUT CoutParmListStmt ';'  */
#line 125 "./compiler.y"
                                {stdoutPrint(); resetPushsym();}
#line 1553 "./build/y.tab.c"
    break;

  case 32: /* Stmt: RETURN Expression ';'  */
#line 126 "./compiler.y"
                            { printf("RETURN\n"); }
#line 1559 "./build/y.tab.c"
    break;

  case 36: /* Stmt: BREAK ';'  */
#line 130 "./compiler.y"
                {printf("BREAK\n");}
#line 1565 "./build/y.tab.c"
    break;

  case 37: /* $@6: %empty  */
#line 137 "./compiler.y"
                        {printf("IF\n"); pushFun(); }
#line 1571 "./build/y.tab.c"
    break;

  case 38: /* IfStmt: '(' Expression ')' $@6 '{' StmtList '}'  */
#line 137 "./compiler.y"
                                                                        { dumpScope(); }
#line 1577 "./build/y.tab.c"
    break;

  case 39: /* $@7: %empty  */
#line 138 "./compiler.y"
                  { printf("ELSE\n"); pushFun(); }
#line 1583 "./build/y.tab.c"
    break;

  case 40: /* IfStmt: IfStmt ELSE $@7 '{' StmtList '}'  */
#line 138 "./compiler.y"
                                                                     { dumpScope(); }
#line 1589 "./build/y.tab.c"
    break;

  case 41: /* $@8: %empty  */
#line 139 "./compiler.y"
                        {printf("IF\n"); }
#line 1595 "./build/y.tab.c"
    break;

  case 42: /* IfStmt: '(' Expression ')' $@8 RETURN Expression ';'  */
#line 139 "./compiler.y"
                                                                  { printf("RETURN\n"); }
#line 1601 "./build/y.tab.c"
    break;

  case 43: /* $@9: %empty  */
#line 145 "./compiler.y"
      {printf("WHILE\n"); }
#line 1607 "./build/y.tab.c"
    break;

  case 44: /* $@10: %empty  */
#line 145 "./compiler.y"
                                               {pushFun(); }
#line 1613 "./build/y.tab.c"
    break;

  case 45: /* WhileStmt: $@9 '(' Expression ')' $@10 '{' StmtList '}'  */
#line 145 "./compiler.y"
                                                                               { dumpScope(); }
#line 1619 "./build/y.tab.c"
    break;

  case 46: /* $@11: %empty  */
#line 150 "./compiler.y"
      {printf("FOR\n"); pushFun(); }
#line 1625 "./build/y.tab.c"
    break;

  case 47: /* ForStmt: $@11 ForThrid '{' StmtList '}'  */
#line 150 "./compiler.y"
                                                                 { dumpScope(); }
#line 1631 "./build/y.tab.c"
    break;

  case 48: /* ForSecond: VARIABLE_T IDENTS  */
#line 154 "./compiler.y"
                          { changePSD((yyvsp[-1].var_type)); }
#line 1637 "./build/y.tab.c"
    break;

  case 52: /* ForThrid: '(' ForSecond ':' IDENT ')'  */
#line 162 "./compiler.y"
                                                { changePSD(findObjectType((yyvsp[0].s_var)));}
#line 1643 "./build/y.tab.c"
    break;

  case 55: /* Arr: Arr ',' Expression  */
#line 175 "./compiler.y"
                          {arrNum++;}
#line 1649 "./build/y.tab.c"
    break;

  case 56: /* Arr: Expression  */
#line 176 "./compiler.y"
                      {arrNum++;}
#line 1655 "./build/y.tab.c"
    break;

  case 58: /* $@12: %empty  */
#line 181 "./compiler.y"
                       { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1661 "./build/y.tab.c"
    break;

  case 61: /* CoutParmListStmt: CoutParmListStmt SHL Expression  */
#line 187 "./compiler.y"
                                      { pushFunInParm(&(yyvsp[0].object_val)); }
#line 1667 "./build/y.tab.c"
    break;

  case 62: /* CoutParmListStmt: SHL Expression  */
#line 188 "./compiler.y"
                     { pushFunInParm(&(yyvsp[0].object_val)); }
#line 1673 "./build/y.tab.c"
    break;

  case 64: /* Expression: Expression ENDL Expression  */
#line 193 "./compiler.y"
                                 { printf("IDENT (name=endl, address=-1)\n");(yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 9;}
#line 1679 "./build/y.tab.c"
    break;

  case 65: /* Expression: Expression ADD Expression  */
#line 194 "./compiler.y"
                                { printf("ADD\n"); /* 處理加法運算 */ }
#line 1685 "./build/y.tab.c"
    break;

  case 66: /* Expression: Expression SUB Expression  */
#line 195 "./compiler.y"
                                { printf("SUB\n"); /* 處理減法運算 */ }
#line 1691 "./build/y.tab.c"
    break;

  case 67: /* Expression: Expression MUL Expression  */
#line 196 "./compiler.y"
                                { printf("MUL\n"); /* 處理乘法運算 */ }
#line 1697 "./build/y.tab.c"
    break;

  case 68: /* Expression: Expression DIV Expression  */
#line 197 "./compiler.y"
                                { printf("DIV\n"); /* 處理除法運算 */ }
#line 1703 "./build/y.tab.c"
    break;

  case 69: /* Expression: Expression REM Expression  */
#line 198 "./compiler.y"
                                { printf("REM\n"); /* 處理取餘運算 */ }
#line 1709 "./build/y.tab.c"
    break;

  case 70: /* Expression: SUB Expression  */
#line 199 "./compiler.y"
                                  { printf("NEG\n");  }
#line 1715 "./build/y.tab.c"
    break;

  case 71: /* Expression: Expression GTR Expression  */
#line 200 "./compiler.y"
                                { printf("GTR\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8; }
#line 1721 "./build/y.tab.c"
    break;

  case 72: /* Expression: Expression LES Expression  */
#line 201 "./compiler.y"
                                { printf("LES\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;/* 小於 */ }
#line 1727 "./build/y.tab.c"
    break;

  case 73: /* Expression: Expression LOR Expression  */
#line 202 "./compiler.y"
                                { printf("LOR\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8; }
#line 1733 "./build/y.tab.c"
    break;

  case 74: /* Expression: Expression GEQ Expression  */
#line 203 "./compiler.y"
                                { printf("GEQ\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;}
#line 1739 "./build/y.tab.c"
    break;

  case 75: /* Expression: Expression EQL Expression  */
#line 204 "./compiler.y"
                                { printf("EQL\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;/* 處理取餘運算 */ }
#line 1745 "./build/y.tab.c"
    break;

  case 76: /* Expression: Expression NEQ Expression  */
#line 205 "./compiler.y"
                                { printf("NEQ\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;/* 處理取餘運算 */ }
#line 1751 "./build/y.tab.c"
    break;

  case 77: /* Expression: Expression LAN Expression  */
#line 206 "./compiler.y"
                                { printf("LAN\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;/* 處理取餘運算 */ }
#line 1757 "./build/y.tab.c"
    break;

  case 78: /* Expression: Expression LOR Expression  */
#line 207 "./compiler.y"
                                { printf("LOR\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;}
#line 1763 "./build/y.tab.c"
    break;

  case 79: /* Expression: Expression BAN Expression  */
#line 208 "./compiler.y"
                                { printf("BAN\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;/* and & */}
#line 1769 "./build/y.tab.c"
    break;

  case 80: /* Expression: BNT Expression  */
#line 209 "./compiler.y"
                                  { printf("BNT\n"); /*$$ = $<object_val>2; $$.type = 8; not ~ */}
#line 1775 "./build/y.tab.c"
    break;

  case 81: /* Expression: Expression BOR Expression  */
#line 210 "./compiler.y"
                                { printf("BOR\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;}
#line 1781 "./build/y.tab.c"
    break;

  case 82: /* Expression: Expression BXO Expression  */
#line 211 "./compiler.y"
                                { printf("BXO\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;}
#line 1787 "./build/y.tab.c"
    break;

  case 83: /* Expression: Expression SHR Expression  */
#line 212 "./compiler.y"
                                { printf("SHR\n"); (yyval.object_val) = (yyvsp[-1].object_val); (yyval.object_val).type = 8;}
#line 1793 "./build/y.tab.c"
    break;

  case 84: /* Expression: NOT Expression  */
#line 213 "./compiler.y"
                                  { printf("NOT\n"); (yyval.object_val) = (yyvsp[0].object_val); (yyval.object_val).type = 8;/* 處理取餘運算 */ }
#line 1799 "./build/y.tab.c"
    break;

  case 85: /* Expression: INT_LIT  */
#line 214 "./compiler.y"
               {printf("INT_LIT %d\n",(yyvsp[0].i_var)); (yyval.object_val) = (yyvsp[0].object_val); (yyval.object_val).type = 4;}
#line 1805 "./build/y.tab.c"
    break;

  case 86: /* Expression: STR_LIT  */
#line 215 "./compiler.y"
               { (yyval.object_val) = (yyvsp[0].object_val); (yyval.object_val).type = 9; printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var));}
#line 1811 "./build/y.tab.c"
    break;

  case 87: /* Expression: '(' Expression ')'  */
#line 216 "./compiler.y"
                          { (yyval.object_val) = (yyvsp[-1].object_val); }
#line 1817 "./build/y.tab.c"
    break;

  case 88: /* Expression: BOOL_LIT  */
#line 217 "./compiler.y"
                {printf("BOOL_LIT %s\n",((yyvsp[0].var_type) %2 == 1)?"TRUE":"FALSE"); (yyval.object_val) = (yyvsp[0].object_val); (yyval.object_val).type = 8;}
#line 1823 "./build/y.tab.c"
    break;

  case 89: /* Expression: '(' VARIABLE_T ')' Expression  */
#line 218 "./compiler.y"
                                                 { castTo((yyvsp[-2].var_type)); }
#line 1829 "./build/y.tab.c"
    break;

  case 90: /* Expression: FLOAT_LIT  */
#line 219 "./compiler.y"
                {printf("FLOAT_LIT %f\n",(yyvsp[0].f_var)); (yyval.object_val) = (yyvsp[0].object_val); (yyval.object_val).type = 6;}
#line 1835 "./build/y.tab.c"
    break;

  case 91: /* Expression: IDENT  */
#line 220 "./compiler.y"
            {  (yyval.object_val) = (yyvsp[0].object_val); (yyval.object_val).type = findObjectType((yyvsp[0].s_var));}
#line 1841 "./build/y.tab.c"
    break;

  case 92: /* $@13: %empty  */
#line 221 "./compiler.y"
                       { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1847 "./build/y.tab.c"
    break;

  case 93: /* Expression: IDENT '[' INT_LIT $@13 ']'  */
#line 221 "./compiler.y"
                                                         {(yyval.object_val) = (yyvsp[-4].object_val); (yyval.object_val).type = findObjectType((yyvsp[-4].s_var)); }
#line 1853 "./build/y.tab.c"
    break;

  case 95: /* Assign: ADD_ASSIGN Expression  */
#line 227 "./compiler.y"
                            { printf("ADD_ASSIGN\n"); }
#line 1859 "./build/y.tab.c"
    break;

  case 96: /* Assign: EQL_ASSIGN Expression  */
#line 228 "./compiler.y"
                            { printf("EQL_ASSIGN\n"); }
#line 1865 "./build/y.tab.c"
    break;

  case 97: /* Assign: SUB_ASSIGN Expression  */
#line 229 "./compiler.y"
                            { printf("SUB_ASSIGN\n"); }
#line 1871 "./build/y.tab.c"
    break;

  case 98: /* Assign: MUL_ASSIGN Expression  */
#line 230 "./compiler.y"
                            { printf("MUL_ASSIGN\n"); }
#line 1877 "./build/y.tab.c"
    break;

  case 99: /* Assign: REM_ASSIGN Expression  */
#line 231 "./compiler.y"
                            { printf("REM_ASSIGN\n"); }
#line 1883 "./build/y.tab.c"
    break;

  case 100: /* Assign: SHR_ASSIGN Expression  */
#line 232 "./compiler.y"
                            { printf("SHR_ASSIGN\n"); }
#line 1889 "./build/y.tab.c"
    break;

  case 101: /* Assign: SHL_ASSIGN Expression  */
#line 233 "./compiler.y"
                            { printf("SHL_ASSIGN\n"); }
#line 1895 "./build/y.tab.c"
    break;

  case 102: /* Assign: BAN_ASSIGN Expression  */
#line 234 "./compiler.y"
                            { printf("BAN_ASSIGN\n"); }
#line 1901 "./build/y.tab.c"
    break;

  case 103: /* Assign: BOR_ASSIGN Expression  */
#line 235 "./compiler.y"
                            { printf("BOR_ASSIGN\n"); }
#line 1907 "./build/y.tab.c"
    break;

  case 104: /* Assign: BXO_ASSIGN Expression  */
#line 236 "./compiler.y"
                            { printf("BXO_ASSIGN\n"); }
#line 1913 "./build/y.tab.c"
    break;

  case 105: /* Assign: INC_ASSIGN Expression  */
#line 237 "./compiler.y"
                            { printf("INC_ASSIGN\n"); }
#line 1919 "./build/y.tab.c"
    break;

  case 106: /* Assign: DEC_ASSIGN Expression  */
#line 238 "./compiler.y"
                            { printf("DEC_ASSIGN\n"); }
#line 1925 "./build/y.tab.c"
    break;

  case 107: /* Assign: DIV_ASSIGN Expression  */
#line 239 "./compiler.y"
                            { printf("DIV_ASSIGN\n"); }
#line 1931 "./build/y.tab.c"
    break;

  case 108: /* Assign2: EQL_ASSIGN Expression  */
#line 242 "./compiler.y"
                            { autoType = (yyvsp[0].s_var) ;}
#line 1937 "./build/y.tab.c"
    break;

  case 109: /* Assign2: EQL_ASSIGN IDENT '(' Func ')'  */
#line 243 "./compiler.y"
                                    {  findObjectType((yyvsp[-3].s_var));printf("call: check(IILjava/lang/String;B)B\n");}
#line 1943 "./build/y.tab.c"
    break;


#line 1947 "./build/y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 246 "./compiler.y"

/* C code section */

// IDENT '[' INT_LIT ']' Assign2 
