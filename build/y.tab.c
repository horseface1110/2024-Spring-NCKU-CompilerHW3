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
  YYSYMBOL_Assign2 = 105                   /* Assign2  */
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
#define YYLAST   732

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

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
     282,   283,   289,   290,   291,   292,   292,   293,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   313,   314,   315
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
  "$@18", "Expression", "$@19", "Assign", "Assign2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,    60,   489,  -140,   507,   507,   507,   498,   -37,  -140,
    -140,  -140,  -140,     1,    78,  -140,  -140,  -140,   630,     3,
       3,     3,    16,   559,  -140,    10,    15,  -140,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,    17,   507,
    -140,    27,    20,   -43,  -140,   666,   666,     3,   666,   666,
      93,    93,    62,    62,    62,   250,   250,   250,   250,   250,
     709,   688,   666,   666,   666,   666,   666,   666,   666,   666,
     666,   666,   666,   666,   666,  -140,     3,  -140,   434,    25,
    -140,  -140,    24,    22,    36,    37,   -41,   420,   666,  -140,
      46,  -140,  -140,    32,    30,  -140,   507,   -46,   666,    29,
    -140,    31,    38,    37,   -38,   666,   507,  -140,    46,  -140,
      35,  -140,  -140,   507,   666,    40,  -140,   311,  -140,   666,
      53,    85,    63,  -140,  -140,   507,    56,  -140,  -140,  -140,
     103,  -140,  -140,  -140,    -2,   507,    70,  -140,    68,  -140,
      71,   321,  -140,  -140,  -140,    58,   507,  -140,  -140,   581,
    -140,   407,    55,   507,  -140,  -140,   666,   507,    77,    61,
      10,    18,   630,   311,   608,   666,    64,    80,   311,    75,
     507,    81,  -140,   162,  -140,   311,   507,   186,   369,    87,
    -140,    76,   240,   391,  -140,   480,  -140,   311,  -140,  -140,
      89,   257,  -140,  -140
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
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,     0,    97,
      90,     0,    13,     0,    95,    68,    86,    82,    84,    85,
      69,    70,    71,    72,    73,    75,    76,    77,    78,    79,
      80,    81,    98,   100,   101,   110,   102,   105,   106,   107,
     103,   104,   108,   109,    99,    11,    92,    22,    97,     0,
      15,    10,     0,     0,     0,    26,    94,    97,   111,    16,
      12,    96,    19,     0,    23,    25,    97,     0,    58,     0,
      14,     0,    28,     0,     0,    56,    97,   113,     0,    20,
       0,    24,   112,    97,    57,    17,    62,    97,    27,    55,
       0,    67,     0,    48,    45,    97,     0,     9,    31,    32,
      97,    30,    60,    65,     0,    97,    35,    37,     0,    36,
       0,     0,    38,    21,    29,     0,    97,    63,    33,     0,
      41,    97,     0,    97,    34,    61,    66,    97,    39,     0,
       0,     0,     0,    97,     0,    64,     0,     0,    97,    50,
      97,     0,    51,    97,    46,    97,    97,    97,     0,     0,
      49,     0,    97,     0,    42,    97,    54,    97,    40,    44,
       0,    97,    53,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,   125,     6,  -140,   -40,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,    19,  -126,  -139,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,   -61,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,    -4,  -140,   -33,
    -106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    14,    15,   149,    25,    63,   119,    17,
      61,   121,   137,   104,   105,   114,   115,   150,   151,   156,
     186,   179,   187,   159,   160,   201,   157,   158,   181,   172,
     124,   117,   135,   165,   154,   177,   166,    18,   103,    58,
     100
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    20,    21,    23,   120,   167,   116,    28,    16,    29,
     132,   164,    31,   126,    32,   101,   102,   127,    24,    26,
      16,   133,   136,    -4,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,   164,    96,   168,   193,   164,    98,
       3,    26,   197,   164,    59,    62,    28,    64,    29,   202,
      30,    31,   164,    32,    97,    95,   190,   109,    -3,   110,
      99,   211,   191,   111,   112,    98,   113,   122,     4,   123,
     128,     5,   153,   129,   108,     6,   138,    28,   130,    29,
     140,    30,    31,   118,    32,   152,   141,    35,    36,    37,
     155,   170,   125,     4,   162,   171,     5,   183,   173,   175,
       6,   -43,   134,   188,   196,     7,   195,     8,     9,   139,
      10,    11,    12,    13,   102,   206,   199,   212,   207,    27,
     189,   161,   131,   142,   210,   143,   144,   145,   146,   192,
       7,   169,   147,     9,     0,    10,    11,    12,    13,     0,
       0,   148,   176,     0,     0,   141,   163,   182,     0,   184,
       0,     0,     4,   185,     0,     5,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,   198,     0,     0,   141,
       0,     0,   203,     0,     0,     0,     4,     0,     0,     5,
       0,   182,   142,     6,   143,   144,   145,   146,     0,     7,
       0,   147,     9,     0,    10,    11,    12,    13,     0,     0,
     148,     0,     0,     0,     0,   200,   142,     0,   143,   144,
     145,   146,     0,     7,     0,   147,     9,     0,    10,    11,
      12,    13,     0,   141,   148,     0,     0,     0,     0,   204,
       4,     0,     0,     5,    28,     0,    29,     6,    30,    31,
     141,    32,    33,    34,    35,    36,    37,     4,     0,     0,
       5,     0,     0,     0,     6,     0,     0,     0,     0,     0,
     142,     0,   143,   144,   145,   146,     0,     7,     0,   147,
       9,     0,    10,    11,    12,    13,     0,   142,   148,   143,
     144,   145,   146,   208,     7,     0,   147,     9,     0,    10,
      11,    12,    13,     0,   141,   148,     0,     0,     0,     0,
     213,     4,     0,     0,     5,    28,     0,    29,     6,    30,
      31,     0,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,    42,    43,    44,     0,     0,     0,
       0,   142,     0,   143,   144,   145,   146,     0,     7,     0,
     147,     9,     0,    10,    11,    12,    13,     0,     0,   148,
       0,     0,     0,    28,     0,    29,     0,    30,    31,   174,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,    41,    42,    43,    44,    28,     0,    29,     0,    30,
      31,     0,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,    42,    43,    44,     4,     0,     0,
       5,     0,     0,     0,     6,     0,     0,   205,     0,     0,
       4,     0,     0,     5,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     5,     0,   209,
       0,     6,     0,     0,     7,     0,   180,     9,     0,    10,
      11,    12,    13,     0,     0,   -52,     0,     7,     0,     0,
       9,   -52,    10,    11,    12,    13,     0,     0,     0,   -59,
       0,     7,     0,   -59,     9,     0,    10,    11,    12,   106,
       4,     0,     0,     5,     0,     0,   107,     6,     0,     4,
       0,     0,     5,     0,     0,     0,     6,     0,     4,     0,
       0,     5,     0,     0,     0,     6,     0,     4,     0,     0,
       5,     0,     0,     0,     6,     0,     0,     7,   -52,   180,
       9,     0,    10,    11,    12,    13,     7,     0,     8,     9,
       0,    10,    11,    12,    13,     7,     0,    22,     9,     0,
      10,    11,    12,    13,     7,     0,     0,     9,     0,    10,
      11,    12,    13,    28,     0,    29,     0,    30,    31,     0,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,    41,    42,    43,    44,    28,     0,    29,     0,    30,
      31,     0,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,     0,    41,    42,    43,    44,    60,     0,     0,
       0,     0,    28,     0,    29,     0,    30,    31,     0,    32,
      33,    34,    35,    36,    37,     0,    38,    39,    40,   178,
      41,    42,    43,    44,    28,     0,    29,     0,    30,    31,
       0,    32,    33,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,    42,    43,    44,   194,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      28,     0,    29,     0,    30,    31,     0,    32,    33,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,    42,
      43,    44,    28,     0,    29,     0,    30,    31,     0,    32,
      33,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,    42,    43,    28,     0,    29,     0,    30,    31,     0,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
       0,    41,    42
};

static const yytype_int16 yycheck[] =
{
       4,     5,     6,     7,   110,     7,    47,     4,     2,     6,
      48,   150,     9,    59,    11,    58,    59,    63,    55,    60,
      14,    59,   128,     0,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   193,    59,    58,   183,   197,    39,
       0,    60,   188,   202,    48,    55,     4,    52,     6,   195,
       8,     9,   211,    11,    47,    58,    58,    52,     0,    55,
      60,   207,    64,    61,    48,    39,    49,    55,    10,    59,
      61,    13,     7,    62,    98,    17,    61,     4,    60,     6,
      60,     8,     9,   107,    11,    52,     3,    14,    15,    16,
      47,    41,   116,    10,    58,    47,    13,    62,    47,    61,
      17,    44,   126,    62,    44,    47,    62,    49,    50,   133,
      52,    53,    54,    55,    59,    48,    55,    48,    62,    14,
     180,   145,   123,    40,   205,    42,    43,    44,    45,   182,
      47,   155,    49,    50,    -1,    52,    53,    54,    55,    -1,
      -1,    58,   166,    -1,    -1,     3,    63,   171,    -1,   173,
      -1,    -1,    10,   177,    -1,    13,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,     3,
      -1,    -1,   196,    -1,    -1,    -1,    10,    -1,    -1,    13,
      -1,   205,    40,    17,    42,    43,    44,    45,    -1,    47,
      -1,    49,    50,    -1,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    40,    -1,    42,    43,
      44,    45,    -1,    47,    -1,    49,    50,    -1,    52,    53,
      54,    55,    -1,     3,    58,    -1,    -1,    -1,    -1,    63,
      10,    -1,    -1,    13,     4,    -1,     6,    17,     8,     9,
       3,    11,    12,    13,    14,    15,    16,    10,    -1,    -1,
      13,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    -1,    47,    -1,    49,
      50,    -1,    52,    53,    54,    55,    -1,    40,    58,    42,
      43,    44,    45,    63,    47,    -1,    49,    50,    -1,    52,
      53,    54,    55,    -1,     3,    58,    -1,    -1,    -1,    -1,
      63,    10,    -1,    -1,    13,     4,    -1,     6,    17,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    -1,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    45,    -1,    47,    -1,
      49,    50,    -1,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,     4,    -1,     6,    -1,     8,     9,    58,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      -1,    22,    23,    24,    25,     4,    -1,     6,    -1,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    -1,    22,    23,    24,    25,    10,    -1,    -1,
      13,    -1,    -1,    -1,    17,    -1,    -1,    58,    -1,    -1,
      10,    -1,    -1,    13,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    13,    -1,    58,
      -1,    17,    -1,    -1,    47,    -1,    49,    50,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    47,    -1,    -1,
      50,    64,    52,    53,    54,    55,    -1,    -1,    -1,    59,
      -1,    47,    -1,    63,    50,    -1,    52,    53,    54,    55,
      10,    -1,    -1,    13,    -1,    -1,    62,    17,    -1,    10,
      -1,    -1,    13,    -1,    -1,    -1,    17,    -1,    10,    -1,
      -1,    13,    -1,    -1,    -1,    17,    -1,    10,    -1,    -1,
      13,    -1,    -1,    -1,    17,    -1,    -1,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    47,    -1,    49,    50,
      -1,    52,    53,    54,    55,    47,    -1,    49,    50,    -1,
      52,    53,    54,    55,    47,    -1,    -1,    50,    -1,    52,
      53,    54,    55,     4,    -1,     6,    -1,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      -1,    22,    23,    24,    25,     4,    -1,     6,    -1,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    -1,    22,    23,    24,    25,    48,    -1,    -1,
      -1,    -1,     4,    -1,     6,    -1,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    48,
      22,    23,    24,    25,     4,    -1,     6,    -1,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    48,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       4,    -1,     6,    -1,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    -1,    22,    23,
      24,    25,     4,    -1,     6,    -1,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    -1,
      22,    23,    24,     4,    -1,     6,    -1,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      -1,    22,    23
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
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,    58,   102,    47,    39,    60,
     105,    58,    59,   103,    78,    79,    55,    62,   102,    52,
      55,    61,    48,    49,    80,    81,    47,    96,   102,    73,
     105,    76,    55,    59,    95,   102,    59,    63,    61,    62,
      60,    81,    48,    59,   102,    97,   105,    77,    61,   102,
      60,     3,    40,    42,    43,    44,    45,    49,    58,    70,
      82,    83,    52,     7,    99,    47,    84,    91,    92,    88,
      89,   102,    58,    63,    83,    98,   101,     7,    58,   102,
      41,    47,    94,    47,    58,    61,   102,   100,    48,    86,
      49,    93,   102,    62,   102,   102,    85,    87,    62,    72,
      58,    64,   104,    82,    48,    62,    44,    82,   102,    55,
      63,    90,    82,   102,    63,    58,    48,    62,    63,    58,
      93,    82,    48,    63
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
     102,   102,   102,   102,   102,   103,   102,   102,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   105,   105,   105
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
       3,     1,     4,     1,     1,     0,     5,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     5,     4
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
#line 1433 "./build/y.tab.c"
    break;

  case 3: /* Program: $@1 GlobalStmtList  */
#line 76 "./compiler.y"
                                      { dumpScope(); }
#line 1439 "./build/y.tab.c"
    break;

  case 5: /* GlobalStmtList: GlobalStmtList GlobalStmt  */
#line 81 "./compiler.y"
                                {}
#line 1445 "./build/y.tab.c"
    break;

  case 6: /* GlobalStmtList: GlobalStmt  */
#line 82 "./compiler.y"
                 {}
#line 1451 "./build/y.tab.c"
    break;

  case 7: /* GlobalStmt: DefineVariableStmt  */
#line 86 "./compiler.y"
                         {}
#line 1457 "./build/y.tab.c"
    break;

  case 8: /* GlobalStmt: FunctionDefStmt  */
#line 87 "./compiler.y"
                      {}
#line 1463 "./build/y.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 91 "./compiler.y"
                 { autoType = (yyvsp[0].var_type);}
#line 1469 "./build/y.tab.c"
    break;

  case 10: /* DefineVariableStmt: VARIABLE_T $@2 IDENTS ';'  */
#line 91 "./compiler.y"
                                                       { changePSD((yyvsp[-3].var_type)); autoType = 100; }
#line 1475 "./build/y.tab.c"
    break;

  case 12: /* IDENTS: IDENTS ',' IDENT  */
#line 97 "./compiler.y"
                       { pushSymbleData(autoType , (yyvsp[0].s_var)); }
#line 1481 "./build/y.tab.c"
    break;

  case 13: /* IDENTS: IDENT  */
#line 98 "./compiler.y"
            {  pushSymbleData(autoType, (yyvsp[0].s_var)); }
#line 1487 "./build/y.tab.c"
    break;

  case 14: /* IDENTS: IDENTS ',' IDENT Assign2  */
#line 99 "./compiler.y"
                               { pushSymbleData(autoType, (yyvsp[-1].s_var)); }
#line 1493 "./build/y.tab.c"
    break;

  case 15: /* IDENTS: IDENT Assign2  */
#line 100 "./compiler.y"
                     { pushSymbleData(autoType, (yyvsp[-1].s_var));  }
#line 1499 "./build/y.tab.c"
    break;

  case 16: /* $@3: %empty  */
#line 101 "./compiler.y"
                        { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1505 "./build/y.tab.c"
    break;

  case 17: /* IDENTS: IDENT '[' INT_LIT $@3 ']' InArr  */
#line 101 "./compiler.y"
                                                                  { printf("create array: %d\n",arrNum); arrNum = 0; pushSymbleData(autoType, (yyvsp[-5].s_var)); }
#line 1511 "./build/y.tab.c"
    break;

  case 18: /* $@4: %empty  */
#line 112 "./compiler.y"
                       { createFunction((yyvsp[-1].var_type), (yyvsp[0].s_var)); }
#line 1517 "./build/y.tab.c"
    break;

  case 19: /* $@5: %empty  */
#line 112 "./compiler.y"
                                                                                                            { record_JNI((yyvsp[-4].s_var));}
#line 1523 "./build/y.tab.c"
    break;

  case 20: /* $@6: %empty  */
#line 112 "./compiler.y"
                                                                                                                                          {resetPushsym();}
#line 1529 "./build/y.tab.c"
    break;

  case 21: /* FunctionDefStmt: VARIABLE_T IDENT $@4 '(' FunctionParameterStmtListFirst ')' $@5 '{' $@6 StmtList '}'  */
#line 112 "./compiler.y"
                                                                                                                                                                         { dumpScope(); }
#line 1535 "./build/y.tab.c"
    break;

  case 22: /* $@7: %empty  */
#line 116 "./compiler.y"
      { pushFun();}
#line 1541 "./build/y.tab.c"
    break;

  case 24: /* FunctionParameterStmtList: FunctionParameterStmtList ',' FunctionParameterStmt  */
#line 119 "./compiler.y"
                                                          {  }
#line 1547 "./build/y.tab.c"
    break;

  case 25: /* FunctionParameterStmtList: FunctionParameterStmt  */
#line 120 "./compiler.y"
                            {   }
#line 1553 "./build/y.tab.c"
    break;

  case 27: /* FunctionParameterStmt: VARIABLE_T IDENT '[' ']'  */
#line 124 "./compiler.y"
                              { pushFunParm((yyvsp[-3].var_type), (yyvsp[-2].s_var), VAR_FLAG_DEFAULT); }
#line 1559 "./build/y.tab.c"
    break;

  case 28: /* FunctionParameterStmt: VARIABLE_T IDENT  */
#line 125 "./compiler.y"
                       { pushFunParm((yyvsp[-1].var_type), (yyvsp[0].s_var), VAR_FLAG_DEFAULT);}
#line 1565 "./build/y.tab.c"
    break;

  case 29: /* StmtList: StmtList Stmt  */
#line 141 "./compiler.y"
                      {}
#line 1571 "./build/y.tab.c"
    break;

  case 30: /* StmtList: Stmt  */
#line 142 "./compiler.y"
            {}
#line 1577 "./build/y.tab.c"
    break;

  case 33: /* Stmt: COUT CoutParmListStmt ';'  */
#line 147 "./compiler.y"
                                 {stdoutPrint(); resetPushsym();}
#line 1583 "./build/y.tab.c"
    break;

  case 34: /* Stmt: RETURN Expression ';'  */
#line 148 "./compiler.y"
                            { printf("RETURN\n"); }
#line 1589 "./build/y.tab.c"
    break;

  case 38: /* Stmt: BREAK ';'  */
#line 152 "./compiler.y"
                {printf("BREAK\n");}
#line 1595 "./build/y.tab.c"
    break;

  case 39: /* $@10: %empty  */
#line 160 "./compiler.y"
                        {printf("IF\n"); pushFun(); }
#line 1601 "./build/y.tab.c"
    break;

  case 40: /* IfStmt: '(' Expression ')' $@10 '{' StmtList '}'  */
#line 160 "./compiler.y"
                                                                        { dumpScope(); }
#line 1607 "./build/y.tab.c"
    break;

  case 41: /* $@11: %empty  */
#line 161 "./compiler.y"
                  { printf("ELSE\n"); pushFun(); }
#line 1613 "./build/y.tab.c"
    break;

  case 42: /* IfStmt: IfStmt ELSE $@11 '{' StmtList '}'  */
#line 161 "./compiler.y"
                                                                     { dumpScope(); }
#line 1619 "./build/y.tab.c"
    break;

  case 43: /* $@12: %empty  */
#line 162 "./compiler.y"
                        {printf("IF\n"); }
#line 1625 "./build/y.tab.c"
    break;

  case 44: /* IfStmt: '(' Expression ')' $@12 RETURN Expression ';'  */
#line 162 "./compiler.y"
                                                                  { printf("RETURN\n"); }
#line 1631 "./build/y.tab.c"
    break;

  case 45: /* $@13: %empty  */
#line 168 "./compiler.y"
      {printf("WHILE\n"); }
#line 1637 "./build/y.tab.c"
    break;

  case 46: /* $@14: %empty  */
#line 168 "./compiler.y"
                                               {pushFun(); }
#line 1643 "./build/y.tab.c"
    break;

  case 47: /* WhileStmt: $@13 '(' Expression ')' $@14 '{' StmtList '}'  */
#line 168 "./compiler.y"
                                                                               { dumpScope(); }
#line 1649 "./build/y.tab.c"
    break;

  case 48: /* $@15: %empty  */
#line 173 "./compiler.y"
      {printf("FOR\n"); pushFun(); }
#line 1655 "./build/y.tab.c"
    break;

  case 49: /* ForStmt: $@15 ForThrid '{' StmtList '}'  */
#line 173 "./compiler.y"
                                                                 { dumpScope(); }
#line 1661 "./build/y.tab.c"
    break;

  case 57: /* Arr: Arr ',' Expression  */
#line 198 "./compiler.y"
                          {arrNum++;}
#line 1667 "./build/y.tab.c"
    break;

  case 58: /* Arr: Expression  */
#line 199 "./compiler.y"
                      {arrNum++;}
#line 1673 "./build/y.tab.c"
    break;

  case 60: /* $@16: %empty  */
#line 204 "./compiler.y"
                       { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1679 "./build/y.tab.c"
    break;

  case 63: /* $@17: %empty  */
#line 210 "./compiler.y"
                            {codeRaw("getstatic java/lang/System/out Ljava/io/PrintStream;"); }
#line 1685 "./build/y.tab.c"
    break;

  case 64: /* CoutParmListStmt: CoutParmListStmt SHL $@17 Expression  */
#line 210 "./compiler.y"
                                                                                                           {
        printf("adsadsfd %d \n",(yyvsp[0].obj_val).type);
        if(strcmp((yyvsp[0].obj_val).name,"endl")){
            invokevirtual((yyvsp[0].obj_val).type);
        }
        pushFunInParm(&(yyvsp[0].obj_val)); }
#line 1696 "./build/y.tab.c"
    break;

  case 65: /* $@18: %empty  */
#line 216 "./compiler.y"
          {codeRaw("getstatic java/lang/System/out Ljava/io/PrintStream;"); }
#line 1702 "./build/y.tab.c"
    break;

  case 66: /* CoutParmListStmt: SHL $@18 Expression  */
#line 216 "./compiler.y"
                                                                                         { invokevirtual((yyvsp[0].obj_val).type);}
#line 1708 "./build/y.tab.c"
    break;

  case 68: /* Expression: Expression ENDL Expression  */
#line 221 "./compiler.y"
                                 {
        printf("IDENT (name=endl, address=-1)\n");
        (yyval.obj_val) = (yyvsp[-1].obj_val); 
        (yyval.obj_val).type = 9;
        (yyval.obj_val).name = "endl";
        codeRaw("invokevirtual java/io/PrintStream/println()V");}
#line 1719 "./build/y.tab.c"
    break;

  case 69: /* Expression: Expression ADD Expression  */
#line 227 "./compiler.y"
                                { printf("ADD\n"); code("%sadd",((yyvsp[-2].obj_val).type == 4)?"i":"f"); /* 處理加法運算 */ }
#line 1725 "./build/y.tab.c"
    break;

  case 70: /* Expression: Expression SUB Expression  */
#line 228 "./compiler.y"
                                { printf("SUB\n"); code("%ssub",((yyvsp[-2].obj_val).type == 4)?"i":"f"); /* 處理減法運算 */ }
#line 1731 "./build/y.tab.c"
    break;

  case 71: /* Expression: Expression MUL Expression  */
#line 229 "./compiler.y"
                                { printf("MUL\n"); code("%smul",((yyvsp[-2].obj_val).type == 4)?"i":"f"); /* 處理乘法運算 */ }
#line 1737 "./build/y.tab.c"
    break;

  case 72: /* Expression: Expression DIV Expression  */
#line 230 "./compiler.y"
                                { printf("DIV\n"); code("%sdiv",((yyvsp[-2].obj_val).type == 4)?"i":"f"); /* 處理除法運算 */ }
#line 1743 "./build/y.tab.c"
    break;

  case 73: /* Expression: Expression REM Expression  */
#line 231 "./compiler.y"
                                { printf("REM\n"); codeRaw("irem"); /* 處理取餘運算 */ }
#line 1749 "./build/y.tab.c"
    break;

  case 74: /* Expression: SUB Expression  */
#line 232 "./compiler.y"
                                  { printf("NEG\n"); code("%sneg",((yyvsp[0].obj_val).type == 4)?"i":"f");  }
#line 1755 "./build/y.tab.c"
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
#line 1780 "./build/y.tab.c"
    break;

  case 76: /* Expression: Expression LES Expression  */
#line 253 "./compiler.y"
                                { printf("LES\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; /* 小於 */ }
#line 1786 "./build/y.tab.c"
    break;

  case 77: /* Expression: Expression GEQ Expression  */
#line 254 "./compiler.y"
                                { printf("GEQ\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;}
#line 1792 "./build/y.tab.c"
    break;

  case 78: /* Expression: Expression EQL Expression  */
#line 255 "./compiler.y"
                                { printf("EQL\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;/* 處理等於運算 */ }
#line 1798 "./build/y.tab.c"
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
#line 1813 "./build/y.tab.c"
    break;

  case 80: /* Expression: Expression LAN Expression  */
#line 266 "./compiler.y"
                                { printf("LAN\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; codeRaw("iand");/* 處理and運算 */ }
#line 1819 "./build/y.tab.c"
    break;

  case 81: /* Expression: Expression LOR Expression  */
#line 267 "./compiler.y"
                                { printf("LOR\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; codeRaw("ior"); }
#line 1825 "./build/y.tab.c"
    break;

  case 82: /* Expression: Expression BAN Expression  */
#line 268 "./compiler.y"
                                { printf("BAN\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;/* and & */}
#line 1831 "./build/y.tab.c"
    break;

  case 83: /* Expression: BNT Expression  */
#line 269 "./compiler.y"
                                  { printf("BNT\n"); /*$$ = $<obj_val>2; $$.type = 8; not ~ */}
#line 1837 "./build/y.tab.c"
    break;

  case 84: /* Expression: Expression BOR Expression  */
#line 270 "./compiler.y"
                                { printf("BOR\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;}
#line 1843 "./build/y.tab.c"
    break;

  case 85: /* Expression: Expression BXO Expression  */
#line 271 "./compiler.y"
                                { printf("BXO\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;}
#line 1849 "./build/y.tab.c"
    break;

  case 86: /* Expression: Expression SHR Expression  */
#line 272 "./compiler.y"
                                { printf("SHR\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;}
#line 1855 "./build/y.tab.c"
    break;

  case 87: /* Expression: NOT Expression  */
#line 273 "./compiler.y"
                                  { printf("NOT\n"); (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = 8; codeRaw("iconst_1"); codeRaw("ixor");/* 處理NOT運算，iconst_1 做xor */ }
#line 1861 "./build/y.tab.c"
    break;

  case 88: /* Expression: INT_LIT  */
#line 274 "./compiler.y"
               {printf("INT_LIT %d\n",(yyvsp[0].i_var)); code("ldc %d",(yyvsp[0].i_var)); (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = 4;}
#line 1867 "./build/y.tab.c"
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
#line 1879 "./build/y.tab.c"
    break;

  case 90: /* Expression: '(' Expression ')'  */
#line 282 "./compiler.y"
                          { (yyval.obj_val) = (yyvsp[-1].obj_val);}
#line 1885 "./build/y.tab.c"
    break;

  case 91: /* Expression: BOOL_LIT  */
#line 283 "./compiler.y"
                {  // 處理true false
        printf("BOOL_LIT %s\n",((yyvsp[0].b_var) %2 == 1)?"TRUE":"FALSE"); 
        (yyval.obj_val) = (yyvsp[0].obj_val); 
        (yyval.obj_val).type = 8;
        ((yyvsp[0].b_var) %2 == 1)?codeRaw("iconst_1"):codeRaw("iconst_0");
        }
#line 1896 "./build/y.tab.c"
    break;

  case 92: /* Expression: '(' VARIABLE_T ')' Expression  */
#line 289 "./compiler.y"
                                                 { castTo((yyvsp[-2].var_type)); }
#line 1902 "./build/y.tab.c"
    break;

  case 93: /* Expression: FLOAT_LIT  */
#line 290 "./compiler.y"
                {printf("FLOAT_LIT %f\n",(yyvsp[0].f_var)); code("ldc %f",(yyvsp[0].f_var)); (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = 6;}
#line 1908 "./build/y.tab.c"
    break;

  case 94: /* Expression: IDENT  */
#line 291 "./compiler.y"
            {  (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = findObjectType((yyvsp[0].s_var));}
#line 1914 "./build/y.tab.c"
    break;

  case 95: /* $@19: %empty  */
#line 292 "./compiler.y"
                       { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1920 "./build/y.tab.c"
    break;

  case 96: /* Expression: IDENT '[' INT_LIT $@19 ']'  */
#line 292 "./compiler.y"
                                                         {(yyval.obj_val) = (yyvsp[-4].obj_val); (yyval.obj_val).type = findObjectType((yyvsp[-4].s_var)); }
#line 1926 "./build/y.tab.c"
    break;

  case 98: /* Assign: ADD_ASSIGN Expression  */
#line 298 "./compiler.y"
                            { printf("ADD_ASSIGN\n"); }
#line 1932 "./build/y.tab.c"
    break;

  case 99: /* Assign: EQL_ASSIGN Expression  */
#line 299 "./compiler.y"
                            { printf("EQL_ASSIGN\n"); }
#line 1938 "./build/y.tab.c"
    break;

  case 100: /* Assign: SUB_ASSIGN Expression  */
#line 300 "./compiler.y"
                            { printf("SUB_ASSIGN\n"); }
#line 1944 "./build/y.tab.c"
    break;

  case 101: /* Assign: MUL_ASSIGN Expression  */
#line 301 "./compiler.y"
                            { printf("MUL_ASSIGN\n"); }
#line 1950 "./build/y.tab.c"
    break;

  case 102: /* Assign: REM_ASSIGN Expression  */
#line 302 "./compiler.y"
                            { printf("REM_ASSIGN\n"); }
#line 1956 "./build/y.tab.c"
    break;

  case 103: /* Assign: SHR_ASSIGN Expression  */
#line 303 "./compiler.y"
                            { printf("SHR_ASSIGN\n"); }
#line 1962 "./build/y.tab.c"
    break;

  case 104: /* Assign: SHL_ASSIGN Expression  */
#line 304 "./compiler.y"
                            { printf("SHL_ASSIGN\n"); }
#line 1968 "./build/y.tab.c"
    break;

  case 105: /* Assign: BAN_ASSIGN Expression  */
#line 305 "./compiler.y"
                            { printf("BAN_ASSIGN\n"); }
#line 1974 "./build/y.tab.c"
    break;

  case 106: /* Assign: BOR_ASSIGN Expression  */
#line 306 "./compiler.y"
                            { printf("BOR_ASSIGN\n"); }
#line 1980 "./build/y.tab.c"
    break;

  case 107: /* Assign: BXO_ASSIGN Expression  */
#line 307 "./compiler.y"
                            { printf("BXO_ASSIGN\n"); }
#line 1986 "./build/y.tab.c"
    break;

  case 108: /* Assign: INC_ASSIGN Expression  */
#line 308 "./compiler.y"
                            { printf("INC_ASSIGN\n"); }
#line 1992 "./build/y.tab.c"
    break;

  case 109: /* Assign: DEC_ASSIGN Expression  */
#line 309 "./compiler.y"
                            { printf("DEC_ASSIGN\n"); }
#line 1998 "./build/y.tab.c"
    break;

  case 110: /* Assign: DIV_ASSIGN Expression  */
#line 310 "./compiler.y"
                            { printf("DIV_ASSIGN\n"); }
#line 2004 "./build/y.tab.c"
    break;

  case 111: /* Assign2: EQL_ASSIGN Expression  */
#line 313 "./compiler.y"
                            { autoType = (yyvsp[0].i_var) ;}
#line 2010 "./build/y.tab.c"
    break;

  case 112: /* Assign2: EQL_ASSIGN IDENT '(' Func ')'  */
#line 314 "./compiler.y"
                                    {  findObjectType((yyvsp[-3].s_var));printf("call: check(IILjava/lang/String;B)B\n");}
#line 2016 "./build/y.tab.c"
    break;


#line 2020 "./build/y.tab.c"

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
