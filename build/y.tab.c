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
#line 2 "./compiler.y"

    #include "compiler_common.h"
    #include "compiler_util.h"
    #include "main.h"

    int yydebug = 1;
    int arrNum = 0;
    int autoType = 100;   // 為了對付auto型別，平時為100，用完回歸100
    int Label_num = 0;    // lablel數量



#line 84 "./build/y.tab.c"

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
  YYSYMBOL_CHAR_LIT = 51,                  /* CHAR_LIT  */
  YYSYMBOL_INT_LIT = 52,                   /* INT_LIT  */
  YYSYMBOL_FLOAT_LIT = 53,                 /* FLOAT_LIT  */
  YYSYMBOL_STR_LIT = 54,                   /* STR_LIT  */
  YYSYMBOL_IDENT = 55,                     /* IDENT  */
  YYSYMBOL_UMINUS = 56,                    /* UMINUS  */
  YYSYMBOL_THEN = 57,                      /* THEN  */
  YYSYMBOL_58_ = 58,                       /* ';'  */
  YYSYMBOL_59_ = 59,                       /* ','  */
  YYSYMBOL_60_ = 60,                       /* '['  */
  YYSYMBOL_61_ = 61,                       /* ']'  */
  YYSYMBOL_62_ = 62,                       /* '{'  */
  YYSYMBOL_63_ = 63,                       /* '}'  */
  YYSYMBOL_64_ = 64,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_Program = 66,                   /* Program  */
  YYSYMBOL_67_1 = 67,                      /* $@1  */
  YYSYMBOL_GlobalStmtList = 68,            /* GlobalStmtList  */
  YYSYMBOL_GlobalStmt = 69,                /* GlobalStmt  */
  YYSYMBOL_DefineVariableStmt = 70,        /* DefineVariableStmt  */
  YYSYMBOL_71_2 = 71,                      /* $@2  */
  YYSYMBOL_IDENTS = 72,                    /* IDENTS  */
  YYSYMBOL_73_3 = 73,                      /* $@3  */
  YYSYMBOL_FunctionDefStmt = 74,           /* FunctionDefStmt  */
  YYSYMBOL_75_4 = 75,                      /* $@4  */
  YYSYMBOL_76_5 = 76,                      /* $@5  */
  YYSYMBOL_77_6 = 77,                      /* $@6  */
  YYSYMBOL_FunctionParameterStmtListFirst = 78, /* FunctionParameterStmtListFirst  */
  YYSYMBOL_79_7 = 79,                      /* $@7  */
  YYSYMBOL_FunctionParameterStmtList = 80, /* FunctionParameterStmtList  */
  YYSYMBOL_FunctionParameterStmt = 81,     /* FunctionParameterStmt  */
  YYSYMBOL_StmtList = 82,                  /* StmtList  */
  YYSYMBOL_Stmt = 83,                      /* Stmt  */
  YYSYMBOL_IfStmt = 84,                    /* IfStmt  */
  YYSYMBOL_85_10 = 85,                     /* $@10  */
  YYSYMBOL_86_11 = 86,                     /* $@11  */
  YYSYMBOL_87_12 = 87,                     /* $@12  */
  YYSYMBOL_WhileStmt = 88,                 /* WhileStmt  */
  YYSYMBOL_89_13 = 89,                     /* $@13  */
  YYSYMBOL_90_14 = 90,                     /* $@14  */
  YYSYMBOL_ForStmt = 91,                   /* ForStmt  */
  YYSYMBOL_92_15 = 92,                     /* $@15  */
  YYSYMBOL_ForSecond = 93,                 /* ForSecond  */
  YYSYMBOL_ForThrid = 94,                  /* ForThrid  */
  YYSYMBOL_Func = 95,                      /* Func  */
  YYSYMBOL_Arr = 96,                       /* Arr  */
  YYSYMBOL_InArr = 97,                     /* InArr  */
  YYSYMBOL_98_16 = 98,                     /* $@16  */
  YYSYMBOL_CoutParmListStmt = 99,          /* CoutParmListStmt  */
  YYSYMBOL_100_17 = 100,                   /* $@17  */
  YYSYMBOL_101_18 = 101,                   /* $@18  */
  YYSYMBOL_Expression = 102,               /* Expression  */
  YYSYMBOL_103_19 = 103,                   /* $@19  */
  YYSYMBOL_Assign = 104,                   /* Assign  */
  YYSYMBOL_105_20 = 105,                   /* $@20  */
  YYSYMBOL_106_21 = 106,                   /* $@21  */
  YYSYMBOL_107_22 = 107,                   /* $@22  */
  YYSYMBOL_108_23 = 108,                   /* $@23  */
  YYSYMBOL_109_24 = 109,                   /* $@24  */
  YYSYMBOL_110_25 = 110,                   /* $@25  */
  YYSYMBOL_111_26 = 111,                   /* $@26  */
  YYSYMBOL_112_27 = 112,                   /* $@27  */
  YYSYMBOL_113_28 = 113,                   /* $@28  */
  YYSYMBOL_114_29 = 114,                   /* $@29  */
  YYSYMBOL_115_30 = 115,                   /* $@30  */
  YYSYMBOL_116_31 = 116,                   /* $@31  */
  YYSYMBOL_117_32 = 117,                   /* $@32  */
  YYSYMBOL_Assign2 = 118                   /* Assign2  */
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
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
      47,    48,     2,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    58,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    63,     2,     2,     2,     2,
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
      45,    46,    49,    50,    51,    52,    53,    54,    55,    56,
      57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    76,    76,    76,    77,    81,    82,    86,    87,    91,
      91,    93,    97,    98,    99,   100,   101,   101,   112,   112,
     112,   112,   116,   116,   119,   120,   121,   124,   125,   141,
     142,   145,   146,   147,   148,   149,   150,   151,   152,   160,
     160,   161,   161,   162,   162,   168,   168,   168,   173,   173,
     177,   179,   180,   184,   185,   191,   192,   198,   199,   200,
     204,   204,   205,   210,   210,   216,   216,   217,   221,   227,
     228,   229,   230,   231,   232,   233,   253,   254,   255,   256,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     282,   283,   289,   290,   291,   292,   292,   293,   298,   298,
     299,   299,   300,   300,   301,   301,   302,   302,   303,   303,
     304,   304,   305,   305,   306,   306,   307,   307,   308,   308,
     309,   309,   310,   310,   313,   314,   315
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
  "CONTINUE", "'('", "')'", "VARIABLE_T", "BOOL_LIT", "CHAR_LIT",
  "INT_LIT", "FLOAT_LIT", "STR_LIT", "IDENT", "UMINUS", "THEN", "';'",
  "','", "'['", "']'", "'{'", "'}'", "':'", "$accept", "Program", "$@1",
  "GlobalStmtList", "GlobalStmt", "DefineVariableStmt", "$@2", "IDENTS",
  "$@3", "FunctionDefStmt", "$@4", "$@5", "$@6",
  "FunctionParameterStmtListFirst", "$@7", "FunctionParameterStmtList",
  "FunctionParameterStmt", "StmtList", "Stmt", "IfStmt", "$@10", "$@11",
  "$@12", "WhileStmt", "$@13", "$@14", "ForStmt", "$@15", "ForSecond",
  "ForThrid", "Func", "Arr", "InArr", "$@16", "CoutParmListStmt", "$@17",
  "$@18", "Expression", "$@19", "Assign", "$@20", "$@21", "$@22", "$@23",
  "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32",
  "Assign2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-160)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    45,   457,  -160,   503,   503,   503,   488,    -6,  -160,
    -160,  -160,  -160,    -8,   124,  -160,  -160,  -160,   626,   117,
     117,   117,    10,   555,  -160,     6,    12,  -160,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,     9,   503,
    -160,    21,   -19,     4,  -160,   662,   662,   117,   662,   662,
     141,   141,   109,   109,   109,     3,     3,     3,     3,     3,
     705,   684,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,  -160,   117,  -160,   430,    18,
    -160,  -160,    16,    14,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,    26,    27,   -39,
     410,   662,  -160,    38,  -160,  -160,    36,    33,  -160,   503,
     -17,   662,    32,  -160,    35,    42,    27,    -5,   662,   503,
    -160,    38,  -160,    34,  -160,  -160,   503,   662,    44,  -160,
     293,  -160,   662,    55,   105,    75,  -160,  -160,   503,    69,
    -160,  -160,  -160,    56,  -160,  -160,  -160,    -1,   503,    88,
    -160,    83,  -160,    84,   346,  -160,  -160,  -160,    71,   503,
    -160,  -160,   577,  -160,   384,    74,   503,  -160,  -160,   662,
     503,    89,    76,     6,   -14,   626,   293,   604,   662,    77,
      96,   293,    85,   503,    91,  -160,   148,  -160,   293,   503,
     205,   368,    95,  -160,    86,   222,   394,  -160,   441,  -160,
     293,  -160,  -160,   111,   276,  -160,  -160
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,    97,     1,    97,    97,    97,    97,     0,    91,
      88,    93,    89,    94,    97,     6,     7,     8,     0,    83,
      74,    87,     0,     0,    18,     0,     0,     5,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    98,   102,   104,   122,   106,
     112,   114,   116,   108,   110,   118,   120,   100,     0,    97,
      90,     0,    13,     0,    95,    68,    86,    82,    84,    85,
      69,    70,    71,    72,    73,    75,    76,    77,    78,    79,
      80,    81,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    11,    92,    22,    97,     0,
      15,    10,     0,     0,    99,   103,   105,   123,   107,   113,
     115,   117,   109,   111,   119,   121,   101,     0,    26,    94,
      97,   124,    16,    12,    96,    19,     0,    23,    25,    97,
       0,    58,     0,    14,     0,    28,     0,     0,    56,    97,
     126,     0,    20,     0,    24,   125,    97,    57,    17,    62,
      97,    27,    55,     0,    67,     0,    48,    45,    97,     0,
       9,    31,    32,    97,    30,    60,    65,     0,    97,    35,
      37,     0,    36,     0,     0,    38,    21,    29,     0,    97,
      63,    33,     0,    41,    97,     0,    97,    34,    61,    66,
      97,    39,     0,     0,     0,     0,    97,     0,    64,     0,
       0,    97,    50,    97,     0,    51,    97,    46,    97,    97,
      97,     0,     0,    49,     0,    97,     0,    42,    97,    54,
      97,    40,    44,     0,    97,    53,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,  -160,   139,     8,  -160,   -33,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,    30,  -148,  -159,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,   -56,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,    -4,  -160,   -32,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    14,    15,   162,    25,    63,   132,    17,
      61,   134,   150,   117,   118,   127,   128,   163,   164,   169,
     199,   192,   200,   172,   173,   214,   170,   171,   194,   185,
     137,   130,   148,   178,   167,   190,   179,    18,   103,    58,
      82,    94,    83,    84,    86,    90,    91,    87,    88,    89,
      92,    93,    85,   100
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    20,    21,    23,   177,   133,   180,    28,   129,    29,
      16,    30,    31,    -4,    32,    33,    34,    35,    36,    37,
      98,    26,    16,   149,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    99,   139,   145,   203,     3,   140,   177,   206,    24,
     204,   177,    26,   210,   146,    96,   177,   181,    59,   154,
     215,    62,   101,   102,    64,   177,     4,    95,    97,     5,
     122,   123,   224,     6,   125,   124,   126,    98,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   135,   136,   141,   121,   151,   155,   142,   156,   157,
     158,   159,   143,     7,   153,   160,     9,   165,    10,    11,
      12,    13,   166,    28,   161,    29,   131,    30,    31,   176,
      32,    28,   168,    29,    -3,   138,    31,   175,    32,   183,
     184,   186,   188,   -43,     4,   147,   196,     5,   201,   208,
     209,     6,   152,   219,   102,    28,   212,    29,   220,    30,
      31,   154,    32,    27,   174,    35,    36,    37,     4,   225,
     202,     5,   223,   205,   182,     6,   144,     0,     0,     0,
       0,     7,     0,     8,     9,   189,    10,    11,    12,    13,
     195,     0,   197,     0,     0,     0,   198,     0,   155,     0,
     156,   157,   158,   159,     0,     7,     0,   160,     9,   211,
      10,    11,    12,    13,     0,   216,   161,     0,   154,     0,
       0,   213,     0,     0,   195,     4,     0,     0,     5,     0,
       0,     0,     6,     0,     0,   154,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     5,     0,     0,     0,     6,
       0,     0,     0,     0,     0,   155,     0,   156,   157,   158,
     159,     0,     7,     0,   160,     9,     0,    10,    11,    12,
      13,     0,   155,   161,   156,   157,   158,   159,   217,     7,
       0,   160,     9,     0,    10,    11,    12,    13,     0,   154,
     161,     0,     0,     0,     0,   221,     4,     0,     0,     5,
       0,     0,     0,     6,     0,     0,   154,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     0,   155,     0,   156,   157,
     158,   159,     0,     7,     0,   160,     9,     0,    10,    11,
      12,    13,     0,   155,   161,   156,   157,   158,   159,   226,
       7,     0,   160,     9,     0,    10,    11,    12,    13,     0,
      28,   161,    29,     0,    30,    31,     0,    32,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,    42,
      43,    44,    28,     0,    29,     0,    30,    31,     0,    32,
      33,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,    42,    43,    44,     4,     0,     0,     5,    28,     0,
      29,     6,    30,    31,   187,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,     0,    41,    42,    43,    44,
       4,     0,     0,     5,     0,     0,   218,     6,     0,     0,
       0,     7,     0,   193,     9,     0,    10,    11,    12,    13,
       4,     0,   -52,     5,     0,     0,     0,     6,   -52,     0,
       0,     4,   222,     0,     5,     0,     0,     7,     6,     0,
       9,     0,    10,    11,    12,    13,     0,     4,     0,   -59,
       5,     0,     0,   -59,     6,     0,     0,     7,     0,     0,
       9,     0,    10,    11,    12,   119,     0,     0,     7,   -52,
     193,     9,   120,    10,    11,    12,    13,     0,     4,     0,
       0,     5,     0,     0,     7,     6,     8,     9,     0,    10,
      11,    12,    13,     4,     0,     0,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,    22,     9,     0,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     9,     0,    10,    11,    12,    13,    28,
       0,    29,     0,    30,    31,     0,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,     0,    41,    42,    43,
      44,    28,     0,    29,     0,    30,    31,     0,    32,    33,
      34,    35,    36,    37,     0,    38,    39,    40,     0,    41,
      42,    43,    44,    60,     0,     0,     0,     0,    28,     0,
      29,     0,    30,    31,     0,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,   191,    41,    42,    43,    44,
      28,     0,    29,     0,    30,    31,     0,    32,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,    42,
      43,    44,   207,    45,    46,    47,    48,    49,    50,    51,
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
       4,     5,     6,     7,   163,   123,     7,     4,    47,     6,
       2,     8,     9,     0,    11,    12,    13,    14,    15,    16,
      39,    60,    14,   141,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    60,    59,    48,    58,     0,    63,   206,   196,    55,
      64,   210,    60,   201,    59,    59,   215,    58,    48,     3,
     208,    55,    58,    59,    52,   224,    10,    58,    47,    13,
      52,    55,   220,    17,    48,    61,    49,    39,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    55,    59,    61,    98,    61,    40,    62,    42,    43,
      44,    45,    60,    47,    60,    49,    50,    52,    52,    53,
      54,    55,     7,     4,    58,     6,   120,     8,     9,    63,
      11,     4,    47,     6,     0,   129,     9,    58,    11,    41,
      47,    47,    61,    44,    10,   139,    62,    13,    62,    62,
      44,    17,   146,    48,    59,     4,    55,     6,    62,     8,
       9,     3,    11,    14,   158,    14,    15,    16,    10,    48,
     193,    13,   218,   195,   168,    17,   136,    -1,    -1,    -1,
      -1,    47,    -1,    49,    50,   179,    52,    53,    54,    55,
     184,    -1,   186,    -1,    -1,    -1,   190,    -1,    40,    -1,
      42,    43,    44,    45,    -1,    47,    -1,    49,    50,   203,
      52,    53,    54,    55,    -1,   209,    58,    -1,     3,    -1,
      -1,    63,    -1,    -1,   218,    10,    -1,    -1,    13,    -1,
      -1,    -1,    17,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    -1,    47,    -1,    49,    50,    -1,    52,    53,    54,
      55,    -1,    40,    58,    42,    43,    44,    45,    63,    47,
      -1,    49,    50,    -1,    52,    53,    54,    55,    -1,     3,
      58,    -1,    -1,    -1,    -1,    63,    10,    -1,    -1,    13,
      -1,    -1,    -1,    17,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,
      44,    45,    -1,    47,    -1,    49,    50,    -1,    52,    53,
      54,    55,    -1,    40,    58,    42,    43,    44,    45,    63,
      47,    -1,    49,    50,    -1,    52,    53,    54,    55,    -1,
       4,    58,     6,    -1,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    -1,    22,    23,
      24,    25,     4,    -1,     6,    -1,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    -1,
      22,    23,    24,    25,    10,    -1,    -1,    13,     4,    -1,
       6,    17,     8,     9,    58,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    -1,    22,    23,    24,    25,
      10,    -1,    -1,    13,    -1,    -1,    58,    17,    -1,    -1,
      -1,    47,    -1,    49,    50,    -1,    52,    53,    54,    55,
      10,    -1,    58,    13,    -1,    -1,    -1,    17,    64,    -1,
      -1,    10,    58,    -1,    13,    -1,    -1,    47,    17,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    10,    -1,    59,
      13,    -1,    -1,    63,    17,    -1,    -1,    47,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    -1,    47,    48,
      49,    50,    62,    52,    53,    54,    55,    -1,    10,    -1,
      -1,    13,    -1,    -1,    47,    17,    49,    50,    -1,    52,
      53,    54,    55,    10,    -1,    -1,    13,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    -1,    52,    53,    54,    55,     4,
      -1,     6,    -1,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,     4,    -1,     6,    -1,     8,     9,    -1,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    -1,    22,
      23,    24,    25,    48,    -1,    -1,    -1,    -1,     4,    -1,
       6,    -1,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    48,    22,    23,    24,    25,
       4,    -1,     6,    -1,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    -1,    22,    23,
      24,    25,    48,    27,    28,    29,    30,    31,    32,    33,
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
       0,    66,    67,     0,    10,    13,    17,    47,    49,    50,
      52,    53,    54,    55,    68,    69,    70,    74,   102,   102,
     102,   102,    49,   102,    55,    71,    60,    69,     4,     6,
       8,     9,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    22,    23,    24,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   104,    48,
      48,    75,    55,    72,    52,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   105,   107,   108,   117,   109,   112,   113,   114,
     110,   111,   115,   116,   106,    58,   102,    47,    39,    60,
     118,    58,    59,   103,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,    78,    79,    55,
      62,   102,    52,    55,    61,    48,    49,    80,    81,    47,
      96,   102,    73,   118,    76,    55,    59,    95,   102,    59,
      63,    61,    62,    60,    81,    48,    59,   102,    97,   118,
      77,    61,   102,    60,     3,    40,    42,    43,    44,    45,
      49,    58,    70,    82,    83,    52,     7,    99,    47,    84,
      91,    92,    88,    89,   102,    58,    63,    83,    98,   101,
       7,    58,   102,    41,    47,    94,    47,    58,    61,   102,
     100,    48,    86,    49,    93,   102,    62,   102,   102,    85,
      87,    62,    72,    58,    64,   104,    82,    48,    62,    44,
      82,   102,    55,    63,    90,    82,   102,    63,    58,    48,
      62,    63,    58,    93,    82,    48,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    67,    66,    66,    68,    68,    69,    69,    71,
      70,    70,    72,    72,    72,    72,    73,    72,    75,    76,
      77,    74,    79,    78,    80,    80,    80,    81,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    85,
      84,    86,    84,    87,    84,    89,    90,    88,    92,    91,
      93,    93,    93,    94,    94,    95,    95,    96,    96,    96,
      98,    97,    97,   100,    99,   101,    99,    99,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   102,   102,   105,   104,
     106,   104,   107,   104,   108,   104,   109,   104,   110,   104,
     111,   104,   112,   104,   113,   104,   114,   104,   115,   104,
     116,   104,   117,   104,   118,   118,   118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     1,     1,     1,     0,
       4,     3,     3,     1,     4,     2,     0,     6,     0,     0,
       0,    11,     0,     2,     3,     1,     0,     4,     2,     2,
       1,     1,     1,     3,     3,     2,     2,     2,     2,     0,
       7,     0,     6,     0,     7,     0,     0,     8,     0,     5,
       2,     2,     0,     7,     5,     3,     1,     3,     1,     0,
       0,     5,     1,     0,     4,     0,     3,     0,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     2,     1,     1,
       3,     1,     4,     1,     1,     0,     5,     0,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     2,     5,     4
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
#line 76 "./compiler.y"
      { pushScope(); }
#line 1454 "./build/y.tab.c"
    break;

  case 3: /* Program: $@1 GlobalStmtList  */
#line 76 "./compiler.y"
                                      { dumpScope(); }
#line 1460 "./build/y.tab.c"
    break;

  case 5: /* GlobalStmtList: GlobalStmtList GlobalStmt  */
#line 81 "./compiler.y"
                                {}
#line 1466 "./build/y.tab.c"
    break;

  case 6: /* GlobalStmtList: GlobalStmt  */
#line 82 "./compiler.y"
                 {}
#line 1472 "./build/y.tab.c"
    break;

  case 7: /* GlobalStmt: DefineVariableStmt  */
#line 86 "./compiler.y"
                         {}
#line 1478 "./build/y.tab.c"
    break;

  case 8: /* GlobalStmt: FunctionDefStmt  */
#line 87 "./compiler.y"
                      {}
#line 1484 "./build/y.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 91 "./compiler.y"
                 { autoType = (yyvsp[0].var_type);}
#line 1490 "./build/y.tab.c"
    break;

  case 10: /* DefineVariableStmt: VARIABLE_T $@2 IDENTS ';'  */
#line 91 "./compiler.y"
                                                       { changePSD((yyvsp[-3].var_type)); autoType = 100; }
#line 1496 "./build/y.tab.c"
    break;

  case 11: /* DefineVariableStmt: Expression Assign ';'  */
#line 93 "./compiler.y"
                            {y_store((yyvsp[-2].obj_val).name);}
#line 1502 "./build/y.tab.c"
    break;

  case 12: /* IDENTS: IDENTS ',' IDENT  */
#line 97 "./compiler.y"
                       { pushSymbleData(autoType , (yyvsp[0].s_var),false); }
#line 1508 "./build/y.tab.c"
    break;

  case 13: /* IDENTS: IDENT  */
#line 98 "./compiler.y"
            {  pushSymbleData(autoType, (yyvsp[0].s_var),false); }
#line 1514 "./build/y.tab.c"
    break;

  case 14: /* IDENTS: IDENTS ',' IDENT Assign2  */
#line 99 "./compiler.y"
                               { pushSymbleData(autoType, (yyvsp[-1].s_var),1); }
#line 1520 "./build/y.tab.c"
    break;

  case 15: /* IDENTS: IDENT Assign2  */
#line 100 "./compiler.y"
                     { pushSymbleData(autoType, (yyvsp[-1].s_var),1);  }
#line 1526 "./build/y.tab.c"
    break;

  case 16: /* $@3: %empty  */
#line 101 "./compiler.y"
                        { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1532 "./build/y.tab.c"
    break;

  case 17: /* IDENTS: IDENT '[' INT_LIT $@3 ']' InArr  */
#line 101 "./compiler.y"
                                                                  { printf("create array: %d\n",arrNum); arrNum = 0; pushSymbleData(autoType, (yyvsp[-5].s_var),1); }
#line 1538 "./build/y.tab.c"
    break;

  case 18: /* $@4: %empty  */
#line 112 "./compiler.y"
                       { createFunction((yyvsp[-1].var_type), (yyvsp[0].s_var)); }
#line 1544 "./build/y.tab.c"
    break;

  case 19: /* $@5: %empty  */
#line 112 "./compiler.y"
                                                                                                            { record_JNI((yyvsp[-4].s_var));}
#line 1550 "./build/y.tab.c"
    break;

  case 20: /* $@6: %empty  */
#line 112 "./compiler.y"
                                                                                                                                          {resetPushsym();}
#line 1556 "./build/y.tab.c"
    break;

  case 21: /* FunctionDefStmt: VARIABLE_T IDENT $@4 '(' FunctionParameterStmtListFirst ')' $@5 '{' $@6 StmtList '}'  */
#line 112 "./compiler.y"
                                                                                                                                                                         { dumpScope(); }
#line 1562 "./build/y.tab.c"
    break;

  case 22: /* $@7: %empty  */
#line 116 "./compiler.y"
      { pushFun();}
#line 1568 "./build/y.tab.c"
    break;

  case 24: /* FunctionParameterStmtList: FunctionParameterStmtList ',' FunctionParameterStmt  */
#line 119 "./compiler.y"
                                                          {  }
#line 1574 "./build/y.tab.c"
    break;

  case 25: /* FunctionParameterStmtList: FunctionParameterStmt  */
#line 120 "./compiler.y"
                            {   }
#line 1580 "./build/y.tab.c"
    break;

  case 27: /* FunctionParameterStmt: VARIABLE_T IDENT '[' ']'  */
#line 124 "./compiler.y"
                              { pushFunParm((yyvsp[-3].var_type), (yyvsp[-2].s_var), VAR_FLAG_DEFAULT); }
#line 1586 "./build/y.tab.c"
    break;

  case 28: /* FunctionParameterStmt: VARIABLE_T IDENT  */
#line 125 "./compiler.y"
                       { pushFunParm((yyvsp[-1].var_type), (yyvsp[0].s_var), VAR_FLAG_DEFAULT);}
#line 1592 "./build/y.tab.c"
    break;

  case 29: /* StmtList: StmtList Stmt  */
#line 141 "./compiler.y"
                      {}
#line 1598 "./build/y.tab.c"
    break;

  case 30: /* StmtList: Stmt  */
#line 142 "./compiler.y"
            {}
#line 1604 "./build/y.tab.c"
    break;

  case 33: /* Stmt: COUT CoutParmListStmt ';'  */
#line 147 "./compiler.y"
                                 {stdoutPrint(); resetPushsym();}
#line 1610 "./build/y.tab.c"
    break;

  case 34: /* Stmt: RETURN Expression ';'  */
#line 148 "./compiler.y"
                            { printf("RETURN\n"); }
#line 1616 "./build/y.tab.c"
    break;

  case 38: /* Stmt: BREAK ';'  */
#line 152 "./compiler.y"
                {printf("BREAK\n");}
#line 1622 "./build/y.tab.c"
    break;

  case 39: /* $@10: %empty  */
#line 160 "./compiler.y"
                        {printf("IF\n"); pushFun(); }
#line 1628 "./build/y.tab.c"
    break;

  case 40: /* IfStmt: '(' Expression ')' $@10 '{' StmtList '}'  */
#line 160 "./compiler.y"
                                                                        { dumpScope(); }
#line 1634 "./build/y.tab.c"
    break;

  case 41: /* $@11: %empty  */
#line 161 "./compiler.y"
                  { printf("ELSE\n"); pushFun(); }
#line 1640 "./build/y.tab.c"
    break;

  case 42: /* IfStmt: IfStmt ELSE $@11 '{' StmtList '}'  */
#line 161 "./compiler.y"
                                                                     { dumpScope(); }
#line 1646 "./build/y.tab.c"
    break;

  case 43: /* $@12: %empty  */
#line 162 "./compiler.y"
                        {printf("IF\n"); }
#line 1652 "./build/y.tab.c"
    break;

  case 44: /* IfStmt: '(' Expression ')' $@12 RETURN Expression ';'  */
#line 162 "./compiler.y"
                                                                  { printf("RETURN\n"); }
#line 1658 "./build/y.tab.c"
    break;

  case 45: /* $@13: %empty  */
#line 168 "./compiler.y"
      {printf("WHILE\n"); }
#line 1664 "./build/y.tab.c"
    break;

  case 46: /* $@14: %empty  */
#line 168 "./compiler.y"
                                               {pushFun(); }
#line 1670 "./build/y.tab.c"
    break;

  case 47: /* WhileStmt: $@13 '(' Expression ')' $@14 '{' StmtList '}'  */
#line 168 "./compiler.y"
                                                                               { dumpScope(); }
#line 1676 "./build/y.tab.c"
    break;

  case 48: /* $@15: %empty  */
#line 173 "./compiler.y"
      {printf("FOR\n"); pushFun(); }
#line 1682 "./build/y.tab.c"
    break;

  case 49: /* ForStmt: $@15 ForThrid '{' StmtList '}'  */
#line 173 "./compiler.y"
                                                                 { dumpScope(); }
#line 1688 "./build/y.tab.c"
    break;

  case 57: /* Arr: Arr ',' Expression  */
#line 198 "./compiler.y"
                          {arrNum++;}
#line 1694 "./build/y.tab.c"
    break;

  case 58: /* Arr: Expression  */
#line 199 "./compiler.y"
                      {arrNum++;}
#line 1700 "./build/y.tab.c"
    break;

  case 60: /* $@16: %empty  */
#line 204 "./compiler.y"
                       { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1706 "./build/y.tab.c"
    break;

  case 63: /* $@17: %empty  */
#line 210 "./compiler.y"
                            {codeRaw("getstatic java/lang/System/out Ljava/io/PrintStream;"); setLoad(1); }
#line 1712 "./build/y.tab.c"
    break;

  case 64: /* CoutParmListStmt: CoutParmListStmt SHL $@17 Expression  */
#line 210 "./compiler.y"
                                                                                                                       {
        setLoad(0);
        if(strcmp((yyvsp[0].obj_val).name,"endl")){
            invokevirtual((yyvsp[0].obj_val).type);
        }
        pushFunInParm(&(yyvsp[0].obj_val)); }
#line 1723 "./build/y.tab.c"
    break;

  case 65: /* $@18: %empty  */
#line 216 "./compiler.y"
          {codeRaw("getstatic java/lang/System/out Ljava/io/PrintStream;"); setLoad(1);}
#line 1729 "./build/y.tab.c"
    break;

  case 66: /* CoutParmListStmt: SHL $@18 Expression  */
#line 216 "./compiler.y"
                                                                                                    { invokevirtual((yyvsp[0].obj_val).type);setLoad(0);}
#line 1735 "./build/y.tab.c"
    break;

  case 68: /* Expression: Expression ENDL Expression  */
#line 221 "./compiler.y"
                                 {
        printf("IDENT (name=endl, address=-1)\n");
        (yyval.obj_val) = (yyvsp[-1].obj_val); 
        (yyval.obj_val).type = 9;
        (yyval.obj_val).name = "endl";
        codeRaw("invokevirtual java/io/PrintStream/println()V");}
#line 1746 "./build/y.tab.c"
    break;

  case 69: /* Expression: Expression ADD Expression  */
#line 227 "./compiler.y"
                                { printf("ADD\n"); code("%sadd",getIdentTypeString((yyvsp[-2].obj_val).type)); /* 處理加法運算 */ }
#line 1752 "./build/y.tab.c"
    break;

  case 70: /* Expression: Expression SUB Expression  */
#line 228 "./compiler.y"
                                { printf("SUB\n"); code("%ssub",getIdentTypeString((yyvsp[-2].obj_val).type)); /* 處理減法運算 */ }
#line 1758 "./build/y.tab.c"
    break;

  case 71: /* Expression: Expression MUL Expression  */
#line 229 "./compiler.y"
                                { printf("MUL\n"); code("%smul",getIdentTypeString((yyvsp[-2].obj_val).type)); /* 處理乘法運算 */ }
#line 1764 "./build/y.tab.c"
    break;

  case 72: /* Expression: Expression DIV Expression  */
#line 230 "./compiler.y"
                                { printf("DIV\n"); code("%sdiv",getIdentTypeString((yyvsp[-2].obj_val).type)); /* 處理除法運算 */ }
#line 1770 "./build/y.tab.c"
    break;

  case 73: /* Expression: Expression REM Expression  */
#line 231 "./compiler.y"
                                { printf("REM\n"); codeRaw("irem"); /* 處理取餘運算 */ }
#line 1776 "./build/y.tab.c"
    break;

  case 74: /* Expression: SUB Expression  */
#line 232 "./compiler.y"
                                  { printf("NEG\n"); code("%sneg",getIdentTypeString((yyvsp[0].obj_val).type));  }
#line 1782 "./build/y.tab.c"
    break;

  case 75: /* Expression: Expression GTR Expression  */
#line 233 "./compiler.y"
                                { printf("GTR\n"); /*大於*/
        (yyval.obj_val) = (yyvsp[-1].obj_val); 
        (yyval.obj_val).type = 8; 
        if((yyvsp[-2].obj_val).type == 4){  // int
            code("if_icmpgt greaterThanLabel%d",Label_num);  //如果大於就跳
            codeRaw("iconst_0");
            code("goto endLabel%d",Label_num);
            code("greaterThanLabel%d:",Label_num);           //大於的話做這邊
            codeRaw("iconst_1");
            code("endLabel%d:",Label_num++);  
        }else if((yyvsp[-2].obj_val).type == 6){  // float
            codeRaw("fcmpg");
            code("ifgt greaterThanLabel%d",Label_num);  //如果大於就跳
            codeRaw("iconst_0");
            code("goto endLabel%d",Label_num);
            code("greaterThanLabel%d:",Label_num);           //大於的話做這邊
            codeRaw("iconst_1");
            code("endLabel%d:",Label_num++);  
        }
         }
#line 1807 "./build/y.tab.c"
    break;

  case 76: /* Expression: Expression LES Expression  */
#line 253 "./compiler.y"
                                { printf("LES\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; /* 小於 */ }
#line 1813 "./build/y.tab.c"
    break;

  case 77: /* Expression: Expression GEQ Expression  */
#line 254 "./compiler.y"
                                { printf("GEQ\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;}
#line 1819 "./build/y.tab.c"
    break;

  case 78: /* Expression: Expression EQL Expression  */
#line 255 "./compiler.y"
                                { printf("EQL\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;/* 處理等於運算 */ }
#line 1825 "./build/y.tab.c"
    break;

  case 79: /* Expression: Expression NEQ Expression  */
#line 256 "./compiler.y"
                                { /* 處理運算 */
        printf("NEQ\n"); 
        (yyval.obj_val) = (yyvsp[-1].obj_val); 
        (yyval.obj_val).type = 8;
        code("if_icmpne notEqualToLabel%d",Label_num);
        codeRaw("iconst_0");
        code("goto endLabel%d",Label_num);
        code("notEqualToLabel%d:",Label_num);
        codeRaw("iconst_1");      
        code("endLabel%d:",Label_num++); }
#line 1840 "./build/y.tab.c"
    break;

  case 80: /* Expression: Expression LAN Expression  */
#line 266 "./compiler.y"
                                { printf("LAN\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; code("%sand",getIdentTypeString((yyvsp[0].obj_val).type));/* 處理&&運算 */ }
#line 1846 "./build/y.tab.c"
    break;

  case 81: /* Expression: Expression LOR Expression  */
#line 267 "./compiler.y"
                                { printf("LOR\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; code("%sor",getIdentTypeString((yyvsp[0].obj_val).type)); }
#line 1852 "./build/y.tab.c"
    break;

  case 82: /* Expression: Expression BAN Expression  */
#line 268 "./compiler.y"
                                { printf("BAN\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; code("%sand",getIdentTypeString((yyvsp[0].obj_val).type));/* and & */}
#line 1858 "./build/y.tab.c"
    break;

  case 83: /* Expression: BNT Expression  */
#line 269 "./compiler.y"
                                  { printf("BNT\n");codeRaw("iconst_m1");code("%sxor",getIdentTypeString((yyvsp[0].obj_val).type)); /*$$ = $<obj_val>2; $$.type = 8; not ~ */}
#line 1864 "./build/y.tab.c"
    break;

  case 84: /* Expression: Expression BOR Expression  */
#line 270 "./compiler.y"
                                { printf("BOR\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; code("%sor",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 1870 "./build/y.tab.c"
    break;

  case 85: /* Expression: Expression BXO Expression  */
#line 271 "./compiler.y"
                                { printf("BXO\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;}
#line 1876 "./build/y.tab.c"
    break;

  case 86: /* Expression: Expression SHR Expression  */
#line 272 "./compiler.y"
                                { printf("SHR\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;code("%sshr",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 1882 "./build/y.tab.c"
    break;

  case 87: /* Expression: NOT Expression  */
#line 273 "./compiler.y"
                                  { printf("NOT\n"); (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = 8; codeRaw("iconst_1"); codeRaw("ixor");/* 處理NOT運算，iconst_1 做xor */ }
#line 1888 "./build/y.tab.c"
    break;

  case 88: /* Expression: INT_LIT  */
#line 274 "./compiler.y"
               {printf("INT_LIT %d\n",(yyvsp[0].i_var)); code("ldc %d",(yyvsp[0].i_var)); (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = 4;}
#line 1894 "./build/y.tab.c"
    break;

  case 89: /* Expression: STR_LIT  */
#line 275 "./compiler.y"
               { 
        (yyval.obj_val) = (yyvsp[0].obj_val); 
        (yyval.obj_val).type = 9; 
        (yyval.obj_val).name = (yyvsp[0].s_var);
        printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var)); 
        code("ldc \"%s\"",(yyvsp[0].s_var));
        }
#line 1906 "./build/y.tab.c"
    break;

  case 90: /* Expression: '(' Expression ')'  */
#line 282 "./compiler.y"
                          { (yyval.obj_val) = (yyvsp[-1].obj_val);}
#line 1912 "./build/y.tab.c"
    break;

  case 91: /* Expression: BOOL_LIT  */
#line 283 "./compiler.y"
                {  // 處理true false
        printf("BOOL_LIT %s\n",((yyvsp[0].b_var) %2 == 1)?"TRUE":"FALSE"); 
        (yyval.obj_val) = (yyvsp[0].obj_val); 
        (yyval.obj_val).type = 8;
        ((yyvsp[0].b_var) %2 == 1)?codeRaw("iconst_1"):codeRaw("iconst_0");
        }
#line 1923 "./build/y.tab.c"
    break;

  case 92: /* Expression: '(' VARIABLE_T ')' Expression  */
#line 289 "./compiler.y"
                                                 { castTo((yyvsp[-2].var_type)); }
#line 1929 "./build/y.tab.c"
    break;

  case 93: /* Expression: FLOAT_LIT  */
#line 290 "./compiler.y"
                {printf("FLOAT_LIT %f\n",(yyvsp[0].f_var)); code("ldc %f",(yyvsp[0].f_var)); (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = 6;}
#line 1935 "./build/y.tab.c"
    break;

  case 94: /* Expression: IDENT  */
#line 291 "./compiler.y"
            {  (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = findObjectType((yyvsp[0].s_var));(yyval.obj_val).name = (yyvsp[0].s_var);}
#line 1941 "./build/y.tab.c"
    break;

  case 95: /* $@19: %empty  */
#line 292 "./compiler.y"
                       { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1947 "./build/y.tab.c"
    break;

  case 96: /* Expression: IDENT '[' INT_LIT $@19 ']'  */
#line 292 "./compiler.y"
                                                         {(yyval.obj_val) = (yyvsp[-4].obj_val); (yyval.obj_val).type = findObjectType((yyvsp[-4].s_var));(yyval.obj_val).name = (yyvsp[-4].s_var); }
#line 1953 "./build/y.tab.c"
    break;

  case 98: /* $@20: %empty  */
#line 298 "./compiler.y"
                 {setLoad(1);}
#line 1959 "./build/y.tab.c"
    break;

  case 99: /* Assign: ADD_ASSIGN $@20 Expression  */
#line 298 "./compiler.y"
                                          { printf("ADD_ASSIGN\n"); code("%sadd",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 1965 "./build/y.tab.c"
    break;

  case 100: /* $@21: %empty  */
#line 299 "./compiler.y"
                 {setLoad(1);}
#line 1971 "./build/y.tab.c"
    break;

  case 101: /* Assign: EQL_ASSIGN $@21 Expression  */
#line 299 "./compiler.y"
                                          { printf("EQL_ASSIGN\n"); }
#line 1977 "./build/y.tab.c"
    break;

  case 102: /* $@22: %empty  */
#line 300 "./compiler.y"
                 {setLoad(1);}
#line 1983 "./build/y.tab.c"
    break;

  case 103: /* Assign: SUB_ASSIGN $@22 Expression  */
#line 300 "./compiler.y"
                                          { printf("SUB_ASSIGN\n"); code("%ssub",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 1989 "./build/y.tab.c"
    break;

  case 104: /* $@23: %empty  */
#line 301 "./compiler.y"
                 {setLoad(1);}
#line 1995 "./build/y.tab.c"
    break;

  case 105: /* Assign: MUL_ASSIGN $@23 Expression  */
#line 301 "./compiler.y"
                                          { printf("MUL_ASSIGN\n"); code("%smul",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2001 "./build/y.tab.c"
    break;

  case 106: /* $@24: %empty  */
#line 302 "./compiler.y"
                 {setLoad(1);}
#line 2007 "./build/y.tab.c"
    break;

  case 107: /* Assign: REM_ASSIGN $@24 Expression  */
#line 302 "./compiler.y"
                                          { printf("REM_ASSIGN\n"); code("%srem",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2013 "./build/y.tab.c"
    break;

  case 108: /* $@25: %empty  */
#line 303 "./compiler.y"
                 {setLoad(1);}
#line 2019 "./build/y.tab.c"
    break;

  case 109: /* Assign: SHR_ASSIGN $@25 Expression  */
#line 303 "./compiler.y"
                                          { printf("SHR_ASSIGN\n"); code("%sadd",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2025 "./build/y.tab.c"
    break;

  case 110: /* $@26: %empty  */
#line 304 "./compiler.y"
                 {setLoad(1);}
#line 2031 "./build/y.tab.c"
    break;

  case 111: /* Assign: SHL_ASSIGN $@26 Expression  */
#line 304 "./compiler.y"
                                          { printf("SHL_ASSIGN\n"); code("%sadd",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2037 "./build/y.tab.c"
    break;

  case 112: /* $@27: %empty  */
#line 305 "./compiler.y"
                 {setLoad(1);}
#line 2043 "./build/y.tab.c"
    break;

  case 113: /* Assign: BAN_ASSIGN $@27 Expression  */
#line 305 "./compiler.y"
                                          { printf("BAN_ASSIGN\n"); code("%sand",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2049 "./build/y.tab.c"
    break;

  case 114: /* $@28: %empty  */
#line 306 "./compiler.y"
                 {setLoad(1);}
#line 2055 "./build/y.tab.c"
    break;

  case 115: /* Assign: BOR_ASSIGN $@28 Expression  */
#line 306 "./compiler.y"
                                          { printf("BOR_ASSIGN\n"); code("%sor",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2061 "./build/y.tab.c"
    break;

  case 116: /* $@29: %empty  */
#line 307 "./compiler.y"
                 {setLoad(1);}
#line 2067 "./build/y.tab.c"
    break;

  case 117: /* Assign: BXO_ASSIGN $@29 Expression  */
#line 307 "./compiler.y"
                                          { printf("BXO_ASSIGN\n"); code("%sadd",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2073 "./build/y.tab.c"
    break;

  case 118: /* $@30: %empty  */
#line 308 "./compiler.y"
                 {setLoad(1);}
#line 2079 "./build/y.tab.c"
    break;

  case 119: /* Assign: INC_ASSIGN $@30 Expression  */
#line 308 "./compiler.y"
                                          { printf("INC_ASSIGN\n"); code("%sadd",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2085 "./build/y.tab.c"
    break;

  case 120: /* $@31: %empty  */
#line 309 "./compiler.y"
                 {setLoad(1);}
#line 2091 "./build/y.tab.c"
    break;

  case 121: /* Assign: DEC_ASSIGN $@31 Expression  */
#line 309 "./compiler.y"
                                          { printf("DEC_ASSIGN\n"); code("%sadd",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2097 "./build/y.tab.c"
    break;

  case 122: /* $@32: %empty  */
#line 310 "./compiler.y"
                 {setLoad(1);}
#line 2103 "./build/y.tab.c"
    break;

  case 123: /* Assign: DIV_ASSIGN $@32 Expression  */
#line 310 "./compiler.y"
                                          { printf("DIV_ASSIGN\n"); code("%sdiv",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 2109 "./build/y.tab.c"
    break;

  case 124: /* Assign2: EQL_ASSIGN Expression  */
#line 313 "./compiler.y"
                            { autoType = (yyvsp[0].i_var) ;}
#line 2115 "./build/y.tab.c"
    break;

  case 125: /* Assign2: EQL_ASSIGN IDENT '(' Func ')'  */
#line 314 "./compiler.y"
                                    {  findObjectType((yyvsp[-3].s_var));printf("call: check(IILjava/lang/String;B)B\n");}
#line 2121 "./build/y.tab.c"
    break;


#line 2125 "./build/y.tab.c"

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

#line 317 "./compiler.y"

/* C code section */
