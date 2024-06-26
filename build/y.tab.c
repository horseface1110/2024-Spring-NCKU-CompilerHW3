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
  YYSYMBOL_72_3 = 72,                      /* $@3  */
  YYSYMBOL_IDENTS = 73,                    /* IDENTS  */
  YYSYMBOL_74_4 = 74,                      /* $@4  */
  YYSYMBOL_FunctionDefStmt = 75,           /* FunctionDefStmt  */
  YYSYMBOL_76_5 = 76,                      /* $@5  */
  YYSYMBOL_77_6 = 77,                      /* $@6  */
  YYSYMBOL_78_7 = 78,                      /* $@7  */
  YYSYMBOL_FunctionParameterStmtListFirst = 79, /* FunctionParameterStmtListFirst  */
  YYSYMBOL_80_8 = 80,                      /* $@8  */
  YYSYMBOL_FunctionParameterStmtList = 81, /* FunctionParameterStmtList  */
  YYSYMBOL_FunctionParameterStmt = 82,     /* FunctionParameterStmt  */
  YYSYMBOL_StmtList = 83,                  /* StmtList  */
  YYSYMBOL_Stmt = 84,                      /* Stmt  */
  YYSYMBOL_IfStmt = 85,                    /* IfStmt  */
  YYSYMBOL_86_11 = 86,                     /* $@11  */
  YYSYMBOL_87_12 = 87,                     /* $@12  */
  YYSYMBOL_88_13 = 88,                     /* $@13  */
  YYSYMBOL_WhileStmt = 89,                 /* WhileStmt  */
  YYSYMBOL_90_14 = 90,                     /* $@14  */
  YYSYMBOL_91_15 = 91,                     /* $@15  */
  YYSYMBOL_ForStmt = 92,                   /* ForStmt  */
  YYSYMBOL_93_16 = 93,                     /* $@16  */
  YYSYMBOL_ForSecond = 94,                 /* ForSecond  */
  YYSYMBOL_95_17 = 95,                     /* $@17  */
  YYSYMBOL_ForThrid = 96,                  /* ForThrid  */
  YYSYMBOL_Func = 97,                      /* Func  */
  YYSYMBOL_Arr = 98,                       /* Arr  */
  YYSYMBOL_InArr = 99,                     /* InArr  */
  YYSYMBOL_100_18 = 100,                   /* $@18  */
  YYSYMBOL_CoutParmListStmt = 101,         /* CoutParmListStmt  */
  YYSYMBOL_102_19 = 102,                   /* $@19  */
  YYSYMBOL_103_20 = 103,                   /* $@20  */
  YYSYMBOL_Expression = 104,               /* Expression  */
  YYSYMBOL_105_21 = 105,                   /* $@21  */
  YYSYMBOL_106_22 = 106,                   /* $@22  */
  YYSYMBOL_107_23 = 107,                   /* $@23  */
  YYSYMBOL_108_24 = 108,                   /* $@24  */
  YYSYMBOL_109_25 = 109,                   /* $@25  */
  YYSYMBOL_110_26 = 110,                   /* $@26  */
  YYSYMBOL_111_27 = 111,                   /* $@27  */
  YYSYMBOL_Assign = 112,                   /* Assign  */
  YYSYMBOL_113_28 = 113,                   /* $@28  */
  YYSYMBOL_114_29 = 114,                   /* $@29  */
  YYSYMBOL_115_30 = 115,                   /* $@30  */
  YYSYMBOL_116_31 = 116,                   /* $@31  */
  YYSYMBOL_117_32 = 117,                   /* $@32  */
  YYSYMBOL_118_33 = 118,                   /* $@33  */
  YYSYMBOL_119_34 = 119,                   /* $@34  */
  YYSYMBOL_120_35 = 120,                   /* $@35  */
  YYSYMBOL_121_36 = 121,                   /* $@36  */
  YYSYMBOL_122_37 = 122,                   /* $@37  */
  YYSYMBOL_123_38 = 123,                   /* $@38  */
  YYSYMBOL_124_39 = 124,                   /* $@39  */
  YYSYMBOL_125_40 = 125,                   /* $@40  */
  YYSYMBOL_Assign2 = 126                   /* Assign2  */
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
#define YYLAST   641

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

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
      91,    93,    93,    94,    98,    99,   100,   101,   102,   102,
     113,   113,   113,   113,   117,   117,   120,   121,   122,   125,
     126,   142,   143,   146,   147,   148,   149,   150,   151,   152,
     153,   162,   162,   163,   163,   164,   164,   170,   170,   170,
     175,   175,   179,   181,   181,   182,   186,   187,   193,   194,
     200,   201,   202,   206,   206,   207,   212,   212,   218,   218,
     219,   223,   229,   229,   230,   230,   231,   231,   232,   232,
     233,   233,   234,   235,   255,   256,   257,   258,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   284,   285,
     291,   291,   292,   293,   294,   294,   295,   300,   300,   301,
     301,   307,   307,   308,   308,   309,   309,   310,   310,   311,
     311,   312,   312,   313,   313,   314,   314,   315,   315,   316,
     316,   317,   317,   318,   321,   322,   323
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
  "GlobalStmtList", "GlobalStmt", "DefineVariableStmt", "$@2", "$@3",
  "IDENTS", "$@4", "FunctionDefStmt", "$@5", "$@6", "$@7",
  "FunctionParameterStmtListFirst", "$@8", "FunctionParameterStmtList",
  "FunctionParameterStmt", "StmtList", "Stmt", "IfStmt", "$@11", "$@12",
  "$@13", "WhileStmt", "$@14", "$@15", "ForStmt", "$@16", "ForSecond",
  "$@17", "ForThrid", "Func", "Arr", "InArr", "$@18", "CoutParmListStmt",
  "$@19", "$@20", "Expression", "$@21", "$@22", "$@23", "$@24", "$@25",
  "$@26", "$@27", "Assign", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33",
  "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "Assign2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-196)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-134)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -196,     8,   -33,  -196,   -37,    11,  -196,  -196,  -196,  -196,
     -31,  -196,   354,    -1,   -29,   -10,   425,   425,   425,   364,
    -196,  -196,  -196,  -196,   -17,   527,   -28,  -196,   333,   -20,
    -196,  -196,     7,     3,   175,   175,   175,    17,   435,  -196,
      15,   425,   425,   425,   425,   425,  -196,  -196,  -196,  -196,
    -196,   425,   425,   425,   425,   425,   425,   425,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,    21,    28,   -40,   307,   562,  -196,    31,  -196,  -196,
     425,  -196,   562,   562,   175,   562,   562,   425,   425,   425,
     425,   425,   625,   625,   625,   625,   625,   605,   584,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,  -196,    23,    20,  -196,   425,   -44,   562,    19,  -196,
     425,   562,    35,   104,   104,   181,   181,   181,   562,   562,
     562,   562,   562,   562,   562,   562,   562,   562,   562,   562,
      43,    22,    28,   -15,   562,   425,  -196,    31,   175,  -196,
    -196,    36,  -196,  -196,   425,   562,    49,  -196,    10,  -196,
     562,    29,   107,    64,  -196,  -196,   425,    65,  -196,  -196,
      92,    58,  -196,  -196,  -196,    -2,   425,    81,  -196,    77,
    -196,    78,   223,  -196,  -196,  -196,    66,   425,  -196,  -196,
     478,  -196,   261,    68,   425,  -196,  -196,   562,   425,    82,
      69,   -31,   -41,   562,    10,   500,   562,    71,    95,    10,
      83,   425,    85,   287,   103,  -196,    10,   425,   114,   245,
      96,  -196,  -196,    87,   125,   271,  -196,   379,  -196,    10,
    -196,  -196,   105,   170,  -196,  -196
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,    13,     1,     0,    13,     6,     7,     8,    20,
       0,     5,   106,     0,    15,     0,   106,   106,   106,   106,
      99,    96,   102,    97,   103,     0,     0,    24,   106,     0,
      17,    10,     0,   103,    91,    82,    95,     0,     0,   109,
       0,   106,   106,   106,   106,   106,    72,    74,    76,    78,
      80,   106,   106,   106,   106,   106,   106,   106,   107,   111,
     113,   131,   115,   121,   123,   125,   117,   119,   127,   129,
      12,     0,    28,   103,   106,   134,    18,    14,   100,    98,
     106,   104,    71,    94,    90,    92,    93,   106,   106,   106,
     106,   106,    83,    84,    85,    86,    87,    88,    89,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,    21,     0,    25,    27,   106,     0,    61,     0,    16,
     106,   110,     0,    73,    75,    77,    79,    81,   108,   112,
     114,   132,   116,   122,   124,   126,   118,   120,   128,   130,
       0,    30,     0,     0,    59,   106,   136,     0,   101,   105,
      22,     0,    26,   135,   106,    60,    19,    65,    13,    29,
      58,     0,    70,     0,    50,    47,   106,     0,     9,    33,
      11,    13,    32,    63,    68,     0,   106,    37,    39,     0,
      38,     0,     0,    40,    23,    31,     0,   106,    66,    35,
       0,    43,   106,     0,   106,    36,    64,    69,   106,    41,
       0,     0,     0,    53,    13,     0,    67,     0,     0,    13,
      52,   106,     0,   106,    13,    48,    13,   106,    13,     0,
       0,    54,    51,     0,    13,     0,    44,   106,    57,    13,
      42,    46,     0,    13,    56,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,  -196,   146,    40,  -196,  -196,   -39,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,    33,  -195,  -167,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,   -63,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,   -16,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,   -22,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,   -71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     5,     6,   170,    10,    12,    15,   118,
       8,    13,   140,   158,    71,    72,   113,   114,   171,   172,
     177,   207,   200,   208,   180,   181,   223,   178,   179,   202,
     213,   193,   143,   116,   156,   186,   175,   198,   187,    25,
      87,    88,    89,    90,    91,   120,   122,    26,    99,    80,
     100,   101,   103,   107,   108,   104,   105,   106,   109,   110,
     102,    30
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    35,    36,    38,   185,   188,   119,   115,     3,   214,
      28,    -3,    75,   162,   218,   145,     4,   211,     9,   146,
      40,   224,    39,   212,    14,    82,    83,    84,    85,    86,
      70,    29,    76,   153,   233,    92,    93,    94,    95,    96,
      97,    98,     7,    40,   154,     7,    27,   185,    31,    32,
     163,   185,   164,   165,   166,   167,   189,   185,   117,   168,
       4,   162,    77,    40,   121,    78,   185,    81,   169,   111,
      28,   123,   124,   125,   126,   127,   157,   112,   141,   142,
     147,   173,   151,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   -34,   149,   159,   163,   144,
     164,   165,   166,   167,   148,   150,   162,   168,    41,   161,
      42,   176,    43,    44,   174,    45,   169,   162,    48,    49,
      50,   184,   191,   183,   192,   194,   -45,   196,   162,   155,
     204,   209,   -34,   216,   -34,   -34,   -34,   -34,   160,   217,
     220,   -34,    32,   163,   228,   164,   165,   166,   167,   229,
     182,    11,   168,   234,   163,   -34,   164,   165,   166,   167,
     190,   169,   210,   168,   232,   163,   222,   164,   165,   166,
     167,   197,   169,   162,   168,   152,   203,   226,   205,    41,
       0,    42,   206,   169,    44,    41,    45,    42,   230,    43,
      44,   221,    45,     0,     0,   219,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
     163,   203,   164,   165,   166,   167,     0,     0,     0,   168,
       0,     0,     0,     0,     0,     0,     0,    41,   169,    42,
       0,    43,    44,   235,    45,    46,    47,    48,    49,    50,
       0,    51,    52,    53,     0,    54,    55,    56,    57,    41,
       0,    42,     0,    43,    44,     0,    45,    46,    47,    48,
      49,    50,     0,    51,    52,    53,     0,    54,    55,    56,
      57,    16,     0,     0,    17,    41,     0,    42,    18,    43,
      44,   195,    45,    46,    47,    48,    49,    50,     0,    51,
      52,    53,     0,    54,    55,    56,    57,    16,     0,     0,
      17,     0,     0,   227,    18,     0,     0,     0,    19,     0,
     201,    20,     0,    21,    22,    23,    33,    16,     0,   -55,
      17,     0,     0,     0,    18,   -55,     0,     0,     0,   231,
       0,     0,     0,     0,    19,  -133,     0,    20,     0,    21,
      22,    23,    24,    16,     0,  -133,    17,     0,     0,     0,
      18,  -133,     0,     0,    19,     0,     0,    20,     0,    21,
      22,    23,    33,     0,    16,     0,   -62,    17,     0,     0,
     -62,    18,     0,     0,    16,     0,     0,    17,     0,     0,
      19,    18,     0,    20,     0,    21,    22,    23,    73,    16,
       0,     0,    17,     0,     0,    74,    18,     0,     0,     0,
       0,    19,     0,     0,    20,     0,    21,    22,    23,    24,
       0,    19,  -133,    37,    20,     0,    21,    22,    23,    33,
       0,     0,     0,     0,     0,     0,    19,   -55,   201,    20,
       0,    21,    22,    23,    33,    16,     0,     0,    17,    41,
       0,    42,    18,    43,    44,     0,    45,    46,    47,    48,
      49,    50,     0,    51,    52,    53,     0,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,    20,     0,    21,    22,    23,
      33,     0,    41,    79,    42,     0,    43,    44,     0,    45,
      46,    47,    48,    49,    50,     0,    51,    52,    53,     0,
      54,    55,    56,    57,    41,     0,    42,     0,    43,    44,
       0,    45,    46,    47,    48,    49,    50,     0,    51,    52,
      53,     0,    54,    55,    56,    57,   199,     0,     0,     0,
       0,    41,     0,    42,     0,    43,    44,     0,    45,    46,
      47,    48,    49,    50,     0,    51,    52,    53,   215,    54,
      55,    56,    57,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    41,     0,    42,     0,
      43,    44,     0,    45,    46,    47,    48,    49,    50,     0,
      51,    52,    53,     0,    54,    55,    56,    57,    41,     0,
      42,     0,    43,    44,     0,    45,    46,    47,    48,    49,
      50,     0,    51,    52,    53,     0,    54,    55,    56,    41,
       0,    42,     0,    43,    44,     0,    45,    46,    47,    48,
      49,    50,     0,    51,    52,    53,     0,    54,    55,    41,
       0,    42,     0,    43,    44,     0,    45,    46,    47,    48,
      49,    50
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,   171,     7,    77,    47,     0,   204,
      39,     0,    28,     3,   209,    59,    49,    58,    55,    63,
      60,   216,    39,    64,    55,    41,    42,    43,    44,    45,
      58,    60,    52,    48,   229,    51,    52,    53,    54,    55,
      56,    57,     2,    60,    59,     5,    47,   214,    58,    59,
      40,   218,    42,    43,    44,    45,    58,   224,    74,    49,
      49,     3,    55,    60,    80,    48,   233,    52,    58,    48,
      39,    87,    88,    89,    90,    91,   147,    49,    55,    59,
      61,    52,    60,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     3,    61,    61,    40,   115,
      42,    43,    44,    45,   120,    62,     3,    49,     4,    60,
       6,    47,     8,     9,     7,    11,    58,     3,    14,    15,
      16,    63,    41,    58,    47,    47,    44,    61,     3,   145,
      62,    62,    40,    62,    42,    43,    44,    45,   154,    44,
      55,    49,    59,    40,    48,    42,    43,    44,    45,    62,
     166,     5,    49,    48,    40,    63,    42,    43,    44,    45,
     176,    58,   201,    49,   227,    40,    63,    42,    43,    44,
      45,   187,    58,     3,    49,   142,   192,    63,   194,     4,
      -1,     6,   198,    58,     9,     4,    11,     6,    63,     8,
       9,   213,    11,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,   227,    42,    43,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    58,     6,
      -1,     8,     9,    63,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    -1,    22,    23,    24,    25,     4,
      -1,     6,    -1,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    10,    -1,    -1,    13,     4,    -1,     6,    17,     8,
       9,    58,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    -1,    22,    23,    24,    25,    10,    -1,    -1,
      13,    -1,    -1,    58,    17,    -1,    -1,    -1,    47,    -1,
      49,    50,    -1,    52,    53,    54,    55,    10,    -1,    58,
      13,    -1,    -1,    -1,    17,    64,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    47,    48,    -1,    50,    -1,    52,
      53,    54,    55,    10,    -1,    58,    13,    -1,    -1,    -1,
      17,    64,    -1,    -1,    47,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    10,    -1,    59,    13,    -1,    -1,
      63,    17,    -1,    -1,    10,    -1,    -1,    13,    -1,    -1,
      47,    17,    -1,    50,    -1,    52,    53,    54,    55,    10,
      -1,    -1,    13,    -1,    -1,    62,    17,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    47,    58,    49,    50,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      -1,    52,    53,    54,    55,    10,    -1,    -1,    13,     4,
      -1,     6,    17,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    -1,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,     4,    48,     6,    -1,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    -1,
      22,    23,    24,    25,     4,    -1,     6,    -1,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    -1,    22,    23,    24,    25,    48,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,     8,     9,    -1,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    48,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     4,    -1,     6,    -1,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    -1,    22,    23,    24,    25,     4,    -1,
       6,    -1,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    -1,    22,    23,    24,     4,
      -1,     6,    -1,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    -1,    22,    23,     4,
      -1,     6,    -1,     8,     9,    -1,    11,    12,    13,    14,
      15,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    66,    67,     0,    49,    68,    69,    70,    75,    55,
      71,    69,    72,    76,    55,    73,    10,    13,    17,    47,
      50,    52,    53,    54,    55,   104,   112,    47,    39,    60,
     126,    58,    59,    55,   104,   104,   104,    49,   104,    39,
      60,     4,     6,     8,     9,    11,    12,    13,    14,    15,
      16,    18,    19,    20,    22,    23,    24,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      58,    79,    80,    55,    62,   104,    52,    55,    48,    48,
     114,    52,   104,   104,   104,   104,   104,   105,   106,   107,
     108,   109,   104,   104,   104,   104,   104,   104,   104,   113,
     115,   116,   125,   117,   120,   121,   122,   118,   119,   123,
     124,    48,    49,    81,    82,    47,    98,   104,    74,   126,
     110,   104,   111,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
      77,    55,    59,    97,   104,    59,    63,    61,   104,    61,
      62,    60,    82,    48,    59,   104,    99,   126,    78,    61,
     104,    60,     3,    40,    42,    43,    44,    45,    49,    58,
      70,    83,    84,    52,     7,   101,    47,    85,    92,    93,
      89,    90,   104,    58,    63,    84,   100,   103,     7,    58,
     104,    41,    47,    96,    47,    58,    61,   104,   102,    48,
      87,    49,    94,   104,    62,   104,   104,    86,    88,    62,
      73,    58,    64,    95,    83,    48,    62,    44,    83,   104,
      55,   112,    63,    91,    83,   104,    63,    58,    48,    62,
      63,    58,    94,    83,    48,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    67,    66,    66,    68,    68,    69,    69,    71,
      70,    72,    70,    70,    73,    73,    73,    73,    74,    73,
      76,    77,    78,    75,    80,    79,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    86,    85,    87,    85,    88,    85,    90,    91,    89,
      93,    92,    94,    95,    94,    94,    96,    96,    97,    97,
      98,    98,    98,   100,    99,    99,   102,   101,   103,   101,
     101,   104,   105,   104,   106,   104,   107,   104,   108,   104,
     109,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     110,   104,   104,   104,   111,   104,   104,   113,   112,   114,
     112,   115,   112,   116,   112,   117,   112,   118,   112,   119,
     112,   120,   112,   121,   112,   122,   112,   123,   112,   124,
     112,   125,   112,   112,   126,   126,   126
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     1,     1,     1,     0,
       4,     0,     4,     0,     3,     1,     4,     2,     0,     6,
       0,     0,     0,    11,     0,     2,     3,     1,     0,     4,
       2,     2,     1,     1,     1,     3,     3,     2,     2,     2,
       2,     0,     7,     0,     6,     0,     7,     0,     0,     8,
       0,     5,     2,     0,     3,     0,     7,     5,     3,     1,
       3,     1,     0,     0,     5,     1,     0,     4,     0,     3,
       0,     3,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     2,     1,     1,     3,     1,
       0,     5,     1,     1,     0,     5,     0,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     2,     5,     4
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

  case 11: /* $@3: %empty  */
#line 93 "./compiler.y"
                         {setLoad(1);}
#line 1502 "./build/y.tab.c"
    break;

  case 14: /* IDENTS: IDENTS ',' IDENT  */
#line 98 "./compiler.y"
                       { pushSymbleData(autoType , (yyvsp[0].s_var),false); }
#line 1508 "./build/y.tab.c"
    break;

  case 15: /* IDENTS: IDENT  */
#line 99 "./compiler.y"
            {  pushSymbleData(autoType, (yyvsp[0].s_var),false); }
#line 1514 "./build/y.tab.c"
    break;

  case 16: /* IDENTS: IDENTS ',' IDENT Assign2  */
#line 100 "./compiler.y"
                               { pushSymbleData(autoType, (yyvsp[-1].s_var),1); }
#line 1520 "./build/y.tab.c"
    break;

  case 17: /* IDENTS: IDENT Assign2  */
#line 101 "./compiler.y"
                     { pushSymbleData(autoType, (yyvsp[-1].s_var),1);  }
#line 1526 "./build/y.tab.c"
    break;

  case 18: /* $@4: %empty  */
#line 102 "./compiler.y"
                        { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1532 "./build/y.tab.c"
    break;

  case 19: /* IDENTS: IDENT '[' INT_LIT $@4 ']' InArr  */
#line 102 "./compiler.y"
                                                                  { printf("create array: %d\n",arrNum); arrNum = 0; pushSymbleData(autoType, (yyvsp[-5].s_var),1); }
#line 1538 "./build/y.tab.c"
    break;

  case 20: /* $@5: %empty  */
#line 113 "./compiler.y"
                       { createFunction((yyvsp[-1].var_type), (yyvsp[0].s_var)); }
#line 1544 "./build/y.tab.c"
    break;

  case 21: /* $@6: %empty  */
#line 113 "./compiler.y"
                                                                                                            { record_JNI((yyvsp[-4].s_var));}
#line 1550 "./build/y.tab.c"
    break;

  case 22: /* $@7: %empty  */
#line 113 "./compiler.y"
                                                                                                                                          {resetPushsym();}
#line 1556 "./build/y.tab.c"
    break;

  case 23: /* FunctionDefStmt: VARIABLE_T IDENT $@5 '(' FunctionParameterStmtListFirst ')' $@6 '{' $@7 StmtList '}'  */
#line 113 "./compiler.y"
                                                                                                                                                                         { dumpScope(); }
#line 1562 "./build/y.tab.c"
    break;

  case 24: /* $@8: %empty  */
#line 117 "./compiler.y"
      { pushFun();}
#line 1568 "./build/y.tab.c"
    break;

  case 26: /* FunctionParameterStmtList: FunctionParameterStmtList ',' FunctionParameterStmt  */
#line 120 "./compiler.y"
                                                          {  }
#line 1574 "./build/y.tab.c"
    break;

  case 27: /* FunctionParameterStmtList: FunctionParameterStmt  */
#line 121 "./compiler.y"
                            {   }
#line 1580 "./build/y.tab.c"
    break;

  case 29: /* FunctionParameterStmt: VARIABLE_T IDENT '[' ']'  */
#line 125 "./compiler.y"
                              { pushFunParm((yyvsp[-3].var_type), (yyvsp[-2].s_var), VAR_FLAG_DEFAULT); }
#line 1586 "./build/y.tab.c"
    break;

  case 30: /* FunctionParameterStmt: VARIABLE_T IDENT  */
#line 126 "./compiler.y"
                       { pushFunParm((yyvsp[-1].var_type), (yyvsp[0].s_var), VAR_FLAG_DEFAULT);}
#line 1592 "./build/y.tab.c"
    break;

  case 31: /* StmtList: StmtList Stmt  */
#line 142 "./compiler.y"
                      {}
#line 1598 "./build/y.tab.c"
    break;

  case 32: /* StmtList: Stmt  */
#line 143 "./compiler.y"
            {}
#line 1604 "./build/y.tab.c"
    break;

  case 35: /* Stmt: COUT CoutParmListStmt ';'  */
#line 148 "./compiler.y"
                                 {stdoutPrint(); resetPushsym();}
#line 1610 "./build/y.tab.c"
    break;

  case 36: /* Stmt: RETURN Expression ';'  */
#line 149 "./compiler.y"
                            { printf("RETURN\n"); }
#line 1616 "./build/y.tab.c"
    break;

  case 40: /* Stmt: BREAK ';'  */
#line 153 "./compiler.y"
                {printf("BREAK\n");}
#line 1622 "./build/y.tab.c"
    break;

  case 41: /* $@11: %empty  */
#line 162 "./compiler.y"
                        {printf("IF\n"); pushFun(); }
#line 1628 "./build/y.tab.c"
    break;

  case 42: /* IfStmt: '(' Expression ')' $@11 '{' StmtList '}'  */
#line 162 "./compiler.y"
                                                                        { dumpScope(); }
#line 1634 "./build/y.tab.c"
    break;

  case 43: /* $@12: %empty  */
#line 163 "./compiler.y"
                  { printf("ELSE\n"); pushFun(); }
#line 1640 "./build/y.tab.c"
    break;

  case 44: /* IfStmt: IfStmt ELSE $@12 '{' StmtList '}'  */
#line 163 "./compiler.y"
                                                                     { dumpScope(); }
#line 1646 "./build/y.tab.c"
    break;

  case 45: /* $@13: %empty  */
#line 164 "./compiler.y"
                        {printf("IF\n"); }
#line 1652 "./build/y.tab.c"
    break;

  case 46: /* IfStmt: '(' Expression ')' $@13 RETURN Expression ';'  */
#line 164 "./compiler.y"
                                                                  { printf("RETURN\n"); }
#line 1658 "./build/y.tab.c"
    break;

  case 47: /* $@14: %empty  */
#line 170 "./compiler.y"
      {printf("WHILE\n"); }
#line 1664 "./build/y.tab.c"
    break;

  case 48: /* $@15: %empty  */
#line 170 "./compiler.y"
                                               {pushFun(); }
#line 1670 "./build/y.tab.c"
    break;

  case 49: /* WhileStmt: $@14 '(' Expression ')' $@15 '{' StmtList '}'  */
#line 170 "./compiler.y"
                                                                               { dumpScope(); }
#line 1676 "./build/y.tab.c"
    break;

  case 50: /* $@16: %empty  */
#line 175 "./compiler.y"
      {printf("FOR\n"); pushFun(); }
#line 1682 "./build/y.tab.c"
    break;

  case 51: /* ForStmt: $@16 ForThrid '{' StmtList '}'  */
#line 175 "./compiler.y"
                                                                 { dumpScope(); }
#line 1688 "./build/y.tab.c"
    break;

  case 53: /* $@17: %empty  */
#line 181 "./compiler.y"
                 {setLoad(1);}
#line 1694 "./build/y.tab.c"
    break;

  case 60: /* Arr: Arr ',' Expression  */
#line 200 "./compiler.y"
                          {arrNum++;}
#line 1700 "./build/y.tab.c"
    break;

  case 61: /* Arr: Expression  */
#line 201 "./compiler.y"
                      {arrNum++;}
#line 1706 "./build/y.tab.c"
    break;

  case 63: /* $@18: %empty  */
#line 206 "./compiler.y"
                       { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1712 "./build/y.tab.c"
    break;

  case 66: /* $@19: %empty  */
#line 212 "./compiler.y"
                            {codeRaw("getstatic java/lang/System/out Ljava/io/PrintStream;"); setLoad(1); }
#line 1718 "./build/y.tab.c"
    break;

  case 67: /* CoutParmListStmt: CoutParmListStmt SHL $@19 Expression  */
#line 212 "./compiler.y"
                                                                                                                       {
        setLoad(0);
        if(strcmp((yyvsp[0].obj_val).name,"endl")){
            invokevirtual((yyvsp[0].obj_val).type);
        }
        pushFunInParm(&(yyvsp[0].obj_val)); }
#line 1729 "./build/y.tab.c"
    break;

  case 68: /* $@20: %empty  */
#line 218 "./compiler.y"
          {codeRaw("getstatic java/lang/System/out Ljava/io/PrintStream;"); setLoad(1);}
#line 1735 "./build/y.tab.c"
    break;

  case 69: /* CoutParmListStmt: SHL $@20 Expression  */
#line 218 "./compiler.y"
                                                                                                    { invokevirtual((yyvsp[0].obj_val).type);setLoad(0);}
#line 1741 "./build/y.tab.c"
    break;

  case 71: /* Expression: Expression ENDL Expression  */
#line 223 "./compiler.y"
                                 {
        printf("IDENT (name=endl, address=-1)\n");
        (yyval.obj_val) = (yyvsp[-1].obj_val); 
        (yyval.obj_val).type = 9;
        (yyval.obj_val).name = "endl";
        codeRaw("invokevirtual java/io/PrintStream/println()V");}
#line 1752 "./build/y.tab.c"
    break;

  case 72: /* $@21: %empty  */
#line 229 "./compiler.y"
                     {setLoad(1);}
#line 1758 "./build/y.tab.c"
    break;

  case 73: /* Expression: Expression ADD $@21 Expression  */
#line 229 "./compiler.y"
                                              { printf("ADD\n");printf("type = %d\n",(yyvsp[-3].obj_val).type); code("%sadd",getIdentTypeString((yyvsp[-3].obj_val).type)); /* 處理加法運算 */ }
#line 1764 "./build/y.tab.c"
    break;

  case 74: /* $@22: %empty  */
#line 230 "./compiler.y"
                     {setLoad(1);}
#line 1770 "./build/y.tab.c"
    break;

  case 75: /* Expression: Expression SUB $@22 Expression  */
#line 230 "./compiler.y"
                                              { printf("SUB\n"); code("%ssub",getIdentTypeString((yyvsp[-3].obj_val).type)); /* 處理減法運算 */ }
#line 1776 "./build/y.tab.c"
    break;

  case 76: /* $@23: %empty  */
#line 231 "./compiler.y"
                     {setLoad(1);}
#line 1782 "./build/y.tab.c"
    break;

  case 77: /* Expression: Expression MUL $@23 Expression  */
#line 231 "./compiler.y"
                                              { printf("MUL\n"); code("%smul",getIdentTypeString((yyvsp[-3].obj_val).type)); /* 處理乘法運算 */ }
#line 1788 "./build/y.tab.c"
    break;

  case 78: /* $@24: %empty  */
#line 232 "./compiler.y"
                     {setLoad(1);}
#line 1794 "./build/y.tab.c"
    break;

  case 79: /* Expression: Expression DIV $@24 Expression  */
#line 232 "./compiler.y"
                                              { printf("DIV\n"); code("%sdiv",getIdentTypeString((yyvsp[-3].obj_val).type)); /* 處理除法運算 */ }
#line 1800 "./build/y.tab.c"
    break;

  case 80: /* $@25: %empty  */
#line 233 "./compiler.y"
                     {setLoad(1);}
#line 1806 "./build/y.tab.c"
    break;

  case 81: /* Expression: Expression REM $@25 Expression  */
#line 233 "./compiler.y"
                                              { printf("REM\n"); codeRaw("irem"); /* 處理取餘運算 */ }
#line 1812 "./build/y.tab.c"
    break;

  case 82: /* Expression: SUB Expression  */
#line 234 "./compiler.y"
                                  { printf("NEG\n"); code("%sneg",getIdentTypeString((yyvsp[0].obj_val).type));  }
#line 1818 "./build/y.tab.c"
    break;

  case 83: /* Expression: Expression GTR Expression  */
#line 235 "./compiler.y"
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
#line 1843 "./build/y.tab.c"
    break;

  case 84: /* Expression: Expression LES Expression  */
#line 255 "./compiler.y"
                                { printf("LES\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; /* 小於 */ }
#line 1849 "./build/y.tab.c"
    break;

  case 85: /* Expression: Expression GEQ Expression  */
#line 256 "./compiler.y"
                                { printf("GEQ\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;}
#line 1855 "./build/y.tab.c"
    break;

  case 86: /* Expression: Expression EQL Expression  */
#line 257 "./compiler.y"
                                { printf("EQL\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;/* 處理等於運算 */ }
#line 1861 "./build/y.tab.c"
    break;

  case 87: /* Expression: Expression NEQ Expression  */
#line 258 "./compiler.y"
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
#line 1876 "./build/y.tab.c"
    break;

  case 88: /* Expression: Expression LAN Expression  */
#line 268 "./compiler.y"
                                { printf("LAN\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; code("%sand",getIdentTypeString((yyvsp[0].obj_val).type));/* 處理&&運算 */ }
#line 1882 "./build/y.tab.c"
    break;

  case 89: /* Expression: Expression LOR Expression  */
#line 269 "./compiler.y"
                                { printf("LOR\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; code("%sor",getIdentTypeString((yyvsp[0].obj_val).type)); }
#line 1888 "./build/y.tab.c"
    break;

  case 90: /* Expression: Expression BAN Expression  */
#line 270 "./compiler.y"
                                { printf("BAN\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; code("%sand",getIdentTypeString((yyvsp[0].obj_val).type));/* and & */}
#line 1894 "./build/y.tab.c"
    break;

  case 91: /* Expression: BNT Expression  */
#line 271 "./compiler.y"
                                  { printf("BNT\n");codeRaw("iconst_m1");code("%sxor",getIdentTypeString((yyvsp[0].obj_val).type)); /*$$ = $<obj_val>2; $$.type = 8; not ~ */}
#line 1900 "./build/y.tab.c"
    break;

  case 92: /* Expression: Expression BOR Expression  */
#line 272 "./compiler.y"
                                { printf("BOR\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; code("%sor",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 1906 "./build/y.tab.c"
    break;

  case 93: /* Expression: Expression BXO Expression  */
#line 273 "./compiler.y"
                                { printf("BXO\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8; code("%sxor",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 1912 "./build/y.tab.c"
    break;

  case 94: /* Expression: Expression SHR Expression  */
#line 274 "./compiler.y"
                                { printf("SHR\n"); (yyval.obj_val) = (yyvsp[-1].obj_val); (yyval.obj_val).type = 8;code("%sshr",getIdentTypeString((yyvsp[0].obj_val).type));}
#line 1918 "./build/y.tab.c"
    break;

  case 95: /* Expression: NOT Expression  */
#line 275 "./compiler.y"
                                  { printf("NOT\n"); (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = 8; codeRaw("iconst_1"); codeRaw("ixor");/* 處理NOT運算，iconst_1 做xor */ }
#line 1924 "./build/y.tab.c"
    break;

  case 96: /* Expression: INT_LIT  */
#line 276 "./compiler.y"
               {printf("INT_LIT %d\n",(yyvsp[0].i_var)); code("ldc %d",(yyvsp[0].i_var)); (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = 4;}
#line 1930 "./build/y.tab.c"
    break;

  case 97: /* Expression: STR_LIT  */
#line 277 "./compiler.y"
               { 
        (yyval.obj_val) = (yyvsp[0].obj_val); 
        (yyval.obj_val).type = 9; 
        (yyval.obj_val).name = (yyvsp[0].s_var);
        printf("STR_LIT \"%s\"\n", (yyvsp[0].s_var)); 
        code("ldc \"%s\"",(yyvsp[0].s_var));
        }
#line 1942 "./build/y.tab.c"
    break;

  case 98: /* Expression: '(' Expression ')'  */
#line 284 "./compiler.y"
                          { (yyval.obj_val) = (yyvsp[-1].obj_val);}
#line 1948 "./build/y.tab.c"
    break;

  case 99: /* Expression: BOOL_LIT  */
#line 285 "./compiler.y"
                {  // 處理true false
        printf("BOOL_LIT %s\n",((yyvsp[0].b_var) %2 == 1)?"TRUE":"FALSE"); 
        (yyval.obj_val) = (yyvsp[0].obj_val); 
        (yyval.obj_val).type = 8;
        ((yyvsp[0].b_var) %2 == 1)?codeRaw("iconst_1"):codeRaw("iconst_0");
        }
#line 1959 "./build/y.tab.c"
    break;

  case 100: /* $@26: %empty  */
#line 291 "./compiler.y"
                         {setLoad(1);}
#line 1965 "./build/y.tab.c"
    break;

  case 101: /* Expression: '(' VARIABLE_T ')' $@26 Expression  */
#line 291 "./compiler.y"
                                                               { castTo((yyvsp[-3].var_type), (yyvsp[0].obj_val).type); (yyval.obj_val).type = (yyvsp[-3].var_type); }
#line 1971 "./build/y.tab.c"
    break;

  case 102: /* Expression: FLOAT_LIT  */
#line 292 "./compiler.y"
                {printf("FLOAT_LIT %f\n",(yyvsp[0].f_var)); code("ldc %f",(yyvsp[0].f_var)); (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = 6;}
#line 1977 "./build/y.tab.c"
    break;

  case 103: /* Expression: IDENT  */
#line 293 "./compiler.y"
            {  (yyval.obj_val) = (yyvsp[0].obj_val); (yyval.obj_val).type = findObjectType((yyvsp[0].s_var));(yyval.obj_val).name = (yyvsp[0].s_var);}
#line 1983 "./build/y.tab.c"
    break;

  case 104: /* $@27: %empty  */
#line 294 "./compiler.y"
                       { printf("INT_LIT %d\n",(yyvsp[0].i_var));}
#line 1989 "./build/y.tab.c"
    break;

  case 105: /* Expression: IDENT '[' INT_LIT $@27 ']'  */
#line 294 "./compiler.y"
                                                         {(yyval.obj_val) = (yyvsp[-4].obj_val); (yyval.obj_val).type = findObjectType((yyvsp[-4].s_var));(yyval.obj_val).name = (yyvsp[-4].s_var); }
#line 1995 "./build/y.tab.c"
    break;

  case 107: /* $@28: %empty  */
#line 300 "./compiler.y"
                            {setLoad(1);}
#line 2001 "./build/y.tab.c"
    break;

  case 108: /* Assign: Expression ADD_ASSIGN $@28 Expression  */
#line 300 "./compiler.y"
                                                     { printf("ADD_ASSIGN\n"); code("%sadd",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2007 "./build/y.tab.c"
    break;

  case 109: /* $@29: %empty  */
#line 301 "./compiler.y"
                       {setLoad(1);}
#line 2013 "./build/y.tab.c"
    break;

  case 110: /* Assign: IDENT EQL_ASSIGN $@29 Expression  */
#line 301 "./compiler.y"
                                                {
        printf("EQL_ASSIGN\n");
        if(findObjectTypeNoPrint((yyvsp[-3].s_var)) != (yyvsp[0].obj_val).type){
            castTo(findObjectTypeNoPrint((yyvsp[-3].s_var)), (yyvsp[0].obj_val).type);
        }
        y_store((yyvsp[-3].s_var)); }
#line 2024 "./build/y.tab.c"
    break;

  case 111: /* $@30: %empty  */
#line 307 "./compiler.y"
                            {setLoad(1);}
#line 2030 "./build/y.tab.c"
    break;

  case 112: /* Assign: Expression SUB_ASSIGN $@30 Expression  */
#line 307 "./compiler.y"
                                                     { printf("SUB_ASSIGN\n"); code("%ssub",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2036 "./build/y.tab.c"
    break;

  case 113: /* $@31: %empty  */
#line 308 "./compiler.y"
                            {setLoad(1);}
#line 2042 "./build/y.tab.c"
    break;

  case 114: /* Assign: Expression MUL_ASSIGN $@31 Expression  */
#line 308 "./compiler.y"
                                                     { printf("MUL_ASSIGN\n"); code("%smul",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2048 "./build/y.tab.c"
    break;

  case 115: /* $@32: %empty  */
#line 309 "./compiler.y"
                            {setLoad(1);}
#line 2054 "./build/y.tab.c"
    break;

  case 116: /* Assign: Expression REM_ASSIGN $@32 Expression  */
#line 309 "./compiler.y"
                                                     { printf("REM_ASSIGN\n"); code("%srem",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2060 "./build/y.tab.c"
    break;

  case 117: /* $@33: %empty  */
#line 310 "./compiler.y"
                            {setLoad(1);}
#line 2066 "./build/y.tab.c"
    break;

  case 118: /* Assign: Expression SHR_ASSIGN $@33 Expression  */
#line 310 "./compiler.y"
                                                     { printf("SHR_ASSIGN\n"); code("%sshr",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2072 "./build/y.tab.c"
    break;

  case 119: /* $@34: %empty  */
#line 311 "./compiler.y"
                            {setLoad(1);}
#line 2078 "./build/y.tab.c"
    break;

  case 120: /* Assign: Expression SHL_ASSIGN $@34 Expression  */
#line 311 "./compiler.y"
                                                     { printf("SHL_ASSIGN\n"); code("%sshl",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2084 "./build/y.tab.c"
    break;

  case 121: /* $@35: %empty  */
#line 312 "./compiler.y"
                            {setLoad(1);}
#line 2090 "./build/y.tab.c"
    break;

  case 122: /* Assign: Expression BAN_ASSIGN $@35 Expression  */
#line 312 "./compiler.y"
                                                     { printf("BAN_ASSIGN\n"); code("%sand",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2096 "./build/y.tab.c"
    break;

  case 123: /* $@36: %empty  */
#line 313 "./compiler.y"
                            {setLoad(1);}
#line 2102 "./build/y.tab.c"
    break;

  case 124: /* Assign: Expression BOR_ASSIGN $@36 Expression  */
#line 313 "./compiler.y"
                                                     { printf("BOR_ASSIGN\n"); code("%sor",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2108 "./build/y.tab.c"
    break;

  case 125: /* $@37: %empty  */
#line 314 "./compiler.y"
                            {setLoad(1);}
#line 2114 "./build/y.tab.c"
    break;

  case 126: /* Assign: Expression BXO_ASSIGN $@37 Expression  */
#line 314 "./compiler.y"
                                                     { printf("BXO_ASSIGN\n"); code("%sxor",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2120 "./build/y.tab.c"
    break;

  case 127: /* $@38: %empty  */
#line 315 "./compiler.y"
                            {setLoad(1);}
#line 2126 "./build/y.tab.c"
    break;

  case 128: /* Assign: Expression INC_ASSIGN $@38 Expression  */
#line 315 "./compiler.y"
                                                     { printf("INC_ASSIGN\n"); code("%sadd",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2132 "./build/y.tab.c"
    break;

  case 129: /* $@39: %empty  */
#line 316 "./compiler.y"
                            {setLoad(1);}
#line 2138 "./build/y.tab.c"
    break;

  case 130: /* Assign: Expression DEC_ASSIGN $@39 Expression  */
#line 316 "./compiler.y"
                                                     { printf("DEC_ASSIGN\n"); code("%sadd",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2144 "./build/y.tab.c"
    break;

  case 131: /* $@40: %empty  */
#line 317 "./compiler.y"
                            {setLoad(1);}
#line 2150 "./build/y.tab.c"
    break;

  case 132: /* Assign: Expression DIV_ASSIGN $@40 Expression  */
#line 317 "./compiler.y"
                                                     { printf("DIV_ASSIGN\n"); code("%sdiv",getIdentTypeString((yyvsp[0].obj_val).type)); y_store((yyvsp[-3].obj_val).name);}
#line 2156 "./build/y.tab.c"
    break;

  case 134: /* Assign2: EQL_ASSIGN Expression  */
#line 321 "./compiler.y"
                            { autoType = (yyvsp[0].i_var) ;}
#line 2162 "./build/y.tab.c"
    break;

  case 135: /* Assign2: EQL_ASSIGN IDENT '(' Func ')'  */
#line 322 "./compiler.y"
                                    {  findObjectType((yyvsp[-3].s_var));printf("call: check(IILjava/lang/String;B)B\n");}
#line 2168 "./build/y.tab.c"
    break;


#line 2172 "./build/y.tab.c"

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

#line 326 "./compiler.y"

/* C code section */
