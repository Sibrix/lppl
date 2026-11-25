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
#line 4 "src/asin.y"

#include "header.h"
#include "asin.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libtds.h"

#line 80 "asin.c"

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

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PARA_ = 3,                      /* PARA_  */
  YYSYMBOL_PARC_ = 4,                      /* PARC_  */
  YYSYMBOL_MAS_ = 5,                       /* MAS_  */
  YYSYMBOL_MENOS_ = 6,                     /* MENOS_  */
  YYSYMBOL_POR_ = 7,                       /* POR_  */
  YYSYMBOL_DIV_ = 8,                       /* DIV_  */
  YYSYMBOL_TRUE_ = 9,                      /* TRUE_  */
  YYSYMBOL_FALSE_ = 10,                    /* FALSE_  */
  YYSYMBOL_BOOL_ = 11,                     /* BOOL_  */
  YYSYMBOL_IF_ = 12,                       /* IF_  */
  YYSYMBOL_ELSE_ = 13,                     /* ELSE_  */
  YYSYMBOL_FOR_ = 14,                      /* FOR_  */
  YYSYMBOL_SWITCH_ = 15,                   /* SWITCH_  */
  YYSYMBOL_LESS_ = 16,                     /* LESS_  */
  YYSYMBOL_EQUAL_ = 17,                    /* EQUAL_  */
  YYSYMBOL_GREATER_ = 18,                  /* GREATER_  */
  YYSYMBOL_READ_ = 19,                     /* READ_  */
  YYSYMBOL_PRINT_ = 20,                    /* PRINT_  */
  YYSYMBOL_RETURN_ = 21,                   /* RETURN_  */
  YYSYMBOL_INT_ = 22,                      /* INT_  */
  YYSYMBOL_AND_ = 23,                      /* AND_  */
  YYSYMBOL_OR_ = 24,                       /* OR_  */
  YYSYMBOL_EQ_ = 25,                       /* EQ_  */
  YYSYMBOL_NEQ_ = 26,                      /* NEQ_  */
  YYSYMBOL_LESSEQTH_ = 27,                 /* LESSEQTH_  */
  YYSYMBOL_LESSTH_ = 28,                   /* LESSTH_  */
  YYSYMBOL_GREATERTH_ = 29,                /* GREATERTH_  */
  YYSYMBOL_GREATEREQTH_ = 30,              /* GREATEREQTH_  */
  YYSYMBOL_LLAVEA_ = 31,                   /* LLAVEA_  */
  YYSYMBOL_LLAVEC_ = 32,                   /* LLAVEC_  */
  YYSYMBOL_EXCL_ = 33,                     /* EXCL_  */
  YYSYMBOL_IGUAL_ = 34,                    /* IGUAL_  */
  YYSYMBOL_COMA_ = 35,                     /* COMA_  */
  YYSYMBOL_PUNTOYCOMA_ = 36,               /* PUNTOYCOMA_  */
  YYSYMBOL_CORCHA_ = 37,                   /* CORCHA_  */
  YYSYMBOL_CORCHC_ = 38,                   /* CORCHC_  */
  YYSYMBOL_CTE_ = 39,                      /* CTE_  */
  YYSYMBOL_ID_ = 40,                       /* ID_  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_programa = 42,                  /* programa  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_listDecla = 44,                 /* listDecla  */
  YYSYMBOL_decla = 45,                     /* decla  */
  YYSYMBOL_declaVar = 46,                  /* declaVar  */
  YYSYMBOL_constante = 47,                 /* constante  */
  YYSYMBOL_tipoSimp = 48,                  /* tipoSimp  */
  YYSYMBOL_declaFunc = 49,                 /* declaFunc  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_51_3 = 51,                      /* @3  */
  YYSYMBOL_paramForm = 52,                 /* paramForm  */
  YYSYMBOL_listParamForm = 53,             /* listParamForm  */
  YYSYMBOL_bloque = 54,                    /* bloque  */
  YYSYMBOL_declaVarLocal = 55,             /* declaVarLocal  */
  YYSYMBOL_listInst = 56,                  /* listInst  */
  YYSYMBOL_inst = 57,                      /* inst  */
  YYSYMBOL_instSwitch = 58,                /* instSwitch  */
  YYSYMBOL_Less = 59,                      /* Less  */
  YYSYMBOL_Equal = 60,                     /* Equal  */
  YYSYMBOL_Greater = 61,                   /* Greater  */
  YYSYMBOL_instExpre = 62,                 /* instExpre  */
  YYSYMBOL_instEntSal = 63,                /* instEntSal  */
  YYSYMBOL_instSelec = 64,                 /* instSelec  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_instIter = 66,                  /* instIter  */
  YYSYMBOL_67_5 = 67,                      /* $@5  */
  YYSYMBOL_expreOP = 68,                   /* expreOP  */
  YYSYMBOL_expre = 69,                     /* expre  */
  YYSYMBOL_expreLogic = 70,                /* expreLogic  */
  YYSYMBOL_expreIgual = 71,                /* expreIgual  */
  YYSYMBOL_expreRel = 72,                  /* expreRel  */
  YYSYMBOL_expreAd = 73,                   /* expreAd  */
  YYSYMBOL_expreMul = 74,                  /* expreMul  */
  YYSYMBOL_expreUna = 75,                  /* expreUna  */
  YYSYMBOL_expreSufi = 76,                 /* expreSufi  */
  YYSYMBOL_paramAct = 77,                  /* paramAct  */
  YYSYMBOL_listParamAct = 78,              /* listParamAct  */
  YYSYMBOL_opLogic = 79,                   /* opLogic  */
  YYSYMBOL_opIgual = 80,                   /* opIgual  */
  YYSYMBOL_opRel = 81,                     /* opRel  */
  YYSYMBOL_opAd = 82,                      /* opAd  */
  YYSYMBOL_opMul = 83,                     /* opMul  */
  YYSYMBOL_opUna = 84                      /* opUna  */
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
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    38,    38,    38,    52,    54,    58,    60,    64,    70,
      78,    93,    95,    97,   101,   103,   108,   114,   107,   135,
     136,   140,   146,   154,   160,   161,   164,   165,   168,   169,
     170,   171,   172,   173,   176,   188,   190,   192,   194,   195,
     198,   208,   216,   215,   224,   223,   232,   233,   237,   239,
     256,   276,   278,   290,   292,   304,   306,   318,   320,   332,
     334,   346,   348,   367,   369,   371,   384,   400,   418,   419,
     423,   425,   429,   430,   433,   434,   437,   438,   439,   440,
     443,   444,   447,   448,   451,   452,   453
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
  "\"end of file\"", "error", "\"invalid token\"", "PARA_", "PARC_",
  "MAS_", "MENOS_", "POR_", "DIV_", "TRUE_", "FALSE_", "BOOL_", "IF_",
  "ELSE_", "FOR_", "SWITCH_", "LESS_", "EQUAL_", "GREATER_", "READ_",
  "PRINT_", "RETURN_", "INT_", "AND_", "OR_", "EQ_", "NEQ_", "LESSEQTH_",
  "LESSTH_", "GREATERTH_", "GREATEREQTH_", "LLAVEA_", "LLAVEC_", "EXCL_",
  "IGUAL_", "COMA_", "PUNTOYCOMA_", "CORCHA_", "CORCHC_", "CTE_", "ID_",
  "$accept", "programa", "$@1", "listDecla", "decla", "declaVar",
  "constante", "tipoSimp", "declaFunc", "$@2", "@3", "paramForm",
  "listParamForm", "bloque", "declaVarLocal", "listInst", "inst",
  "instSwitch", "Less", "Equal", "Greater", "instExpre", "instEntSal",
  "instSelec", "$@4", "instIter", "$@5", "expreOP", "expre", "expreLogic",
  "expreIgual", "expreRel", "expreAd", "expreMul", "expreUna", "expreSufi",
  "paramAct", "listParamAct", "opLogic", "opIgual", "opRel", "opAd",
  "opMul", "opUna", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -83,     7,    -5,   -83,   -83,   -83,    -5,   -83,   -83,   -27,
     -83,   -83,    -8,    -6,   -83,   -23,    24,   -83,   -83,   -83,
       9,    29,    -5,   -83,    33,    31,    70,   -83,   -83,    40,
     -83,    -5,    47,   -83,   -83,   -83,    -5,   -83,    42,    37,
      -8,    15,   -83,   -83,    77,    80,    44,    82,    83,    15,
     -83,   -83,   -83,    -2,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,    52,    36,    -3,   -18,    56,    57,   -83,   -83,   106,
      89,    15,    15,    59,    54,    15,    61,    86,    15,    15,
      15,   -83,   -83,   -83,   106,   -83,   -83,   106,   -83,   -83,
     -83,   -83,   106,   -83,   -83,   106,   -83,   -83,   106,    -1,
     -83,   -83,    99,    68,   -83,    91,   104,   109,    78,   -83,
      79,   116,   -83,   -83,    93,    -3,   -18,    56,    57,   -83,
      15,   -83,    15,   118,   112,    98,   100,   -83,    15,   -83,
     101,   102,   118,   105,   -83,   118,   124,   -83,   -83,   -83,
      15,   -83,   130,    15,   -83,   118,   115,   -83,   118,   140,
     -83,   -83,   -83,   -83,   118,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    15,    14,     3,     4,     6,     0,
       7,     5,    16,     0,     8,     0,     0,    12,    13,    11,
       0,     0,    19,     9,     0,     0,     0,    20,    10,    21,
      17,     0,     0,    22,    24,    18,    26,    25,     0,     0,
       0,     0,    84,    85,     0,     0,     0,     0,     0,     0,
      26,    86,    39,    65,    63,    27,    33,    29,    30,    31,
      32,     0,    48,    51,    53,    55,    57,    59,    61,     0,
       0,     0,    46,     0,     0,     0,     0,     0,    68,     0,
       0,    38,    72,    73,     0,    74,    75,     0,    78,    76,
      77,    79,     0,    80,    81,     0,    82,    83,     0,    65,
      62,    64,     0,     0,    47,     0,     0,     0,     0,    28,
      70,     0,    69,    49,     0,    52,    54,    56,    58,    60,
       0,    42,     0,     0,     0,     0,     0,    23,     0,    67,
      66,     0,     0,     0,    35,     0,     0,    40,    41,    71,
       0,    66,     0,    46,    36,     0,     0,    50,     0,     0,
      37,    34,    43,    44,     0,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   -83,   142,   114,   139,   -17,   -83,   -83,
     -83,   -83,   122,   -83,   -83,   110,   -82,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,    12,   -41,   -83,
      72,    74,    67,    69,   -54,   -83,   -83,    34,   -83,   -83,
     -83,   -83,   -83,   -83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     6,     7,     8,    54,     9,    10,    16,
      32,    26,    27,    35,    36,    39,    55,    56,   124,   136,
     146,    57,    58,    59,   132,    60,   154,   103,    61,    62,
      63,    64,    65,    66,    67,    68,   111,   112,    84,    87,
      92,    95,    98,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      70,    78,    78,    17,    18,    25,     4,     3,    76,    88,
      89,    90,    91,    12,    25,   100,    21,     5,    41,    38,
      42,    43,    85,    86,    17,    18,    13,    22,    14,    15,
     102,   104,    79,    19,   107,    80,   120,   110,   113,   114,
      41,   134,    42,    43,   119,    23,    17,    18,    51,    44,
     142,    45,    46,   144,    19,    53,    47,    48,    49,    82,
      83,    93,    94,   150,    96,    97,   152,    24,    50,    28,
      51,    29,   155,    52,    30,    31,    19,    53,    34,   131,
      71,   133,    40,    72,    73,    74,    75,   110,    81,    41,
     105,    42,    43,   101,   106,    17,    18,   108,    44,   147,
      45,    46,   104,   121,   122,    47,    48,   123,   125,    41,
     127,    42,    43,   126,   128,    17,    18,    50,   109,    51,
     129,    41,    52,    42,    43,    19,    53,    17,    18,   135,
      44,   130,    45,    46,   137,   140,   138,    47,    48,    51,
     141,   143,   145,   148,   153,    19,    99,   151,    11,    50,
      37,    51,    20,    33,    52,   149,   115,    19,    53,   117,
      77,   116,   139,     0,   118
};

static const yytype_int16 yycheck[] =
{
      41,     3,     3,     9,    10,    22,    11,     0,    49,    27,
      28,    29,    30,    40,    31,    69,    39,    22,     3,    36,
       5,     6,    25,    26,     9,    10,    34,     3,    36,    37,
      71,    72,    34,    39,    75,    37,    37,    78,    79,    80,
       3,   123,     5,     6,    98,    36,     9,    10,    33,    12,
     132,    14,    15,   135,    39,    40,    19,    20,    21,    23,
      24,     5,     6,   145,     7,     8,   148,    38,    31,    36,
      33,    40,   154,    36,     4,    35,    39,    40,    31,   120,
       3,   122,    40,     3,    40,     3,     3,   128,    36,     3,
      31,     5,     6,     4,    40,     9,    10,    36,    12,   140,
      14,    15,   143,     4,    36,    19,    20,    16,     4,     3,
      32,     5,     6,     4,    35,     9,    10,    31,    32,    33,
       4,     3,    36,     5,     6,    39,    40,     9,    10,    17,
      12,    38,    14,    15,    36,    34,    36,    19,    20,    33,
      38,    36,    18,    13,     4,    39,    40,    32,     6,    31,
      36,    33,    13,    31,    36,   143,    84,    39,    40,    92,
      50,    87,   128,    -1,    95
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    43,     0,    11,    22,    44,    45,    46,    48,
      49,    45,    40,    34,    36,    37,    50,     9,    10,    39,
      47,    39,     3,    36,    38,    48,    52,    53,    36,    40,
       4,    35,    51,    53,    31,    54,    55,    46,    48,    56,
      40,     3,     5,     6,    12,    14,    15,    19,    20,    21,
      31,    33,    36,    40,    47,    57,    58,    62,    63,    64,
      66,    69,    70,    71,    72,    73,    74,    75,    76,    84,
      69,     3,     3,    40,     3,     3,    69,    56,     3,    34,
      37,    36,    23,    24,    79,    25,    26,    80,    27,    28,
      29,    30,    81,     5,     6,    82,     7,     8,    83,    40,
      75,     4,    69,    68,    69,    31,    40,    69,    36,    32,
      69,    77,    78,    69,    69,    71,    72,    73,    74,    75,
      37,     4,    36,    16,    59,     4,     4,    32,    35,     4,
      38,    69,    65,    69,    57,    17,    60,    36,    36,    78,
      34,    38,    57,    36,    57,    18,    61,    69,    13,    68,
      57,    32,    57,     4,    67,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    43,    42,    44,    44,    45,    45,    46,    46,
      46,    47,    47,    47,    48,    48,    50,    51,    49,    52,
      52,    53,    53,    54,    55,    55,    56,    56,    57,    57,
      57,    57,    57,    57,    58,    59,    60,    61,    62,    62,
      63,    63,    65,    64,    67,    66,    68,    68,    69,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    81,    81,
      82,    82,    83,    83,    84,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     5,
       6,     1,     1,     1,     1,     1,     0,     0,     8,     0,
       1,     2,     4,     7,     0,     2,     0,     2,     3,     1,
       1,     1,     1,     1,     7,     2,     2,     2,     2,     1,
       5,     5,     0,     8,     0,    10,     0,     1,     1,     3,
       6,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     2,     1,     3,     1,     4,     4,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 38 "src/asin.y"
                    {
                        niv = 0;
                        dvar = 0;
                        cargaContexto(niv);
                    }
#line 1266 "asin.c"
    break;

  case 3: /* programa: $@1 listDecla  */
#line 44 "src/asin.y"
                    {
                        if ((yyvsp[0].entero) == 0)
                            yyerror("El programa no tiene funcion main");
                        else if ((yyvsp[0].entero) > 1)
                            yyerror("El programa tiene mas de una funcion main");
                    }
#line 1277 "asin.c"
    break;

  case 4: /* listDecla: decla  */
#line 53 "src/asin.y"
                    { (yyval.entero) = (yyvsp[0].entero);}
#line 1283 "asin.c"
    break;

  case 5: /* listDecla: listDecla decla  */
#line 55 "src/asin.y"
                    { (yyval.entero) = (yyvsp[-1].entero) + (yyvsp[0].entero);}
#line 1289 "asin.c"
    break;

  case 6: /* decla: declaVar  */
#line 59 "src/asin.y"
                    { (yyval.entero) = 0; }
#line 1295 "asin.c"
    break;

  case 7: /* decla: declaFunc  */
#line 61 "src/asin.y"
                    { (yyval.entero) = (yyvsp[0].entero); }
#line 1301 "asin.c"
    break;

  case 8: /* declaVar: tipoSimp ID_ PUNTOYCOMA_  */
#line 65 "src/asin.y"
                    {
                        if (!insTdS((yyvsp[-1].cadena), VARIABLE, (yyvsp[-2].entero), niv, dvar, -1))
                            yyerror("Variable ya declarada");
                        else dvar += TALLA_TIPO_SIMPLE;
                    }
#line 1311 "asin.c"
    break;

  case 9: /* declaVar: tipoSimp ID_ IGUAL_ constante PUNTOYCOMA_  */
#line 71 "src/asin.y"
                    {
                        if ((yyvsp[-4].entero) != (yyvsp[-1].entero))
                            yyerror("Error de tipos en la inicializacion de la variable");
                        if (!insTdS((yyvsp[-3].cadena), VARIABLE, (yyvsp[-4].entero), niv, dvar, -1))
                            yyerror("Variable ya declarada");
                        else dvar += TALLA_TIPO_SIMPLE;
                    }
#line 1323 "asin.c"
    break;

  case 10: /* declaVar: tipoSimp ID_ CORCHA_ CTE_ CORCHC_ PUNTOYCOMA_  */
#line 79 "src/asin.y"
                    {
                        int talla = (yyvsp[-2].entero);
                        if (talla <= 0) {
                            yyerror("Talla de array no valida");
                            talla = 1;
                        }
                        int refe = insTdA((yyvsp[-5].entero), talla);
                        if (!insTdS((yyvsp[-4].cadena), VARIABLE, T_ARRAY, niv, dvar, refe))
                            yyerror("Variable ya declarada");
                        else dvar += talla * TALLA_TIPO_SIMPLE;
                    }
#line 1339 "asin.c"
    break;

  case 11: /* constante: CTE_  */
#line 94 "src/asin.y"
                    { (yyval.entero) = T_ENTERO; }
#line 1345 "asin.c"
    break;

  case 12: /* constante: TRUE_  */
#line 96 "src/asin.y"
                    { (yyval.entero) = T_LOGICO; }
#line 1351 "asin.c"
    break;

  case 13: /* constante: FALSE_  */
#line 98 "src/asin.y"
                    { (yyval.entero) = T_LOGICO; }
#line 1357 "asin.c"
    break;

  case 14: /* tipoSimp: INT_  */
#line 102 "src/asin.y"
                    { (yyval.entero) = T_ENTERO; }
#line 1363 "asin.c"
    break;

  case 15: /* tipoSimp: BOOL_  */
#line 104 "src/asin.y"
                    { (yyval.entero) = T_LOGICO; }
#line 1369 "asin.c"
    break;

  case 16: /* $@2: %empty  */
#line 108 "src/asin.y"
                    {
                        niv = 1;
                        cargaContexto(niv);
                        dvar = 0;
                    }
#line 1379 "asin.c"
    break;

  case 17: /* @3: %empty  */
#line 114 "src/asin.y"
                    {
                        (yyval.entero) = insTdS((yyvsp[-4].cadena), FUNCION, (yyvsp[-5].entero), 0, -1, (yyvsp[-1].lista).ref);
                        if (!(yyval.entero))
                            yyerror("Funcion ya declarada");
                    }
#line 1389 "asin.c"
    break;

  case 18: /* declaFunc: tipoSimp ID_ $@2 PARA_ paramForm PARC_ @3 bloque  */
#line 120 "src/asin.y"
                    {
                        if (!(yyvsp[-1].entero))
                            yyerror("Error en la declaracion de la funcion");
                        else if ((yyvsp[0].entero) != T_ERROR && (yyvsp[0].entero) != (yyvsp[-7].entero))
                            yyerror("Error de tipos en el return");
                        if (verTdS) mostrarTdS();
                        descargaContexto(niv);
                        niv = 0;
                        dvar = 0;
                        (yyval.entero) = (strcmp((yyvsp[-6].cadena), "main") == 0);
                    }
#line 1405 "asin.c"
    break;

  case 19: /* paramForm: %empty  */
#line 135 "src/asin.y"
                    { (yyval.lista).ref = insTdD(-1, T_VACIO); (yyval.lista).talla = 0;}
#line 1411 "asin.c"
    break;

  case 20: /* paramForm: listParamForm  */
#line 137 "src/asin.y"
                    {(yyval.lista) = (yyvsp[0].lista);}
#line 1417 "asin.c"
    break;

  case 21: /* listParamForm: tipoSimp ID_  */
#line 141 "src/asin.y"
                    {
                        (yyval.lista).ref = insTdD(-1, (yyvsp[-1].entero));
                        (yyval.lista).talla = TALLA_TIPO_SIMPLE;
                        if (!insTdS((yyvsp[0].cadena), PARAMETRO, (yyvsp[-1].entero), niv, -(TALLA_SEGENLACES + (yyval.lista).talla), -1)) { yyerror("Identificador de parametro repetido."); }
                    }
#line 1427 "asin.c"
    break;

  case 22: /* listParamForm: tipoSimp ID_ COMA_ listParamForm  */
#line 147 "src/asin.y"
                    {
                        (yyval.lista).ref   = insTdD((yyvsp[0].lista).ref, (yyvsp[-3].entero));
                        (yyval.lista).talla = (yyvsp[0].lista).talla + TALLA_TIPO_SIMPLE;
                        if (!insTdS((yyvsp[-2].cadena), PARAMETRO, (yyvsp[-3].entero), niv, -(TALLA_SEGENLACES + (yyval.lista).talla), -1))
                            yyerror("Identificador de parametro repetido");
                    }
#line 1438 "asin.c"
    break;

  case 23: /* bloque: LLAVEA_ declaVarLocal listInst RETURN_ expre PUNTOYCOMA_ LLAVEC_  */
#line 155 "src/asin.y"
                    {
                        (yyval.entero) = (yyvsp[-2].entero);
                    }
#line 1446 "asin.c"
    break;

  case 34: /* instSwitch: SWITCH_ ID_ LLAVEA_ Less Equal Greater LLAVEC_  */
#line 177 "src/asin.y"
                    {
                        SIMB sim = obtTdS((yyvsp[-5].cadena));
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (ES_FUNCION(sim))
                            yyerror("El indentificador del switch no puede ser una funcion");
                        else if (sim.t != T_ENTERO)
                            yyerror("la expresion del switch tiene que ser un entero");
                    }
#line 1460 "asin.c"
    break;

  case 40: /* instEntSal: READ_ PARA_ ID_ PARC_ PUNTOYCOMA_  */
#line 199 "src/asin.y"
                    {
                     SIMB sim = obtTdS((yyvsp[-2].cadena));
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (ES_FUNCION(sim))
                            yyerror("El argumento de read no puede ser una funcion");
                        else if (sim.t != T_ENTERO)
                            yyerror("El argumento de read debe ser de tipo entero");   
                    }
#line 1474 "asin.c"
    break;

  case 41: /* instEntSal: PRINT_ PARA_ expre PARC_ PUNTOYCOMA_  */
#line 209 "src/asin.y"
                    {
                        if ((yyvsp[-2].entero) != T_ERROR && (yyvsp[-2].entero) != T_ENTERO)
                            yyerror("La expresion de print debe de ser de tipo entero");
                    }
#line 1483 "asin.c"
    break;

  case 42: /* $@4: %empty  */
#line 216 "src/asin.y"
                    {
                        if ((yyvsp[-1].entero) != T_ERROR && (yyvsp[-1].entero) != T_LOGICO)
                            yyerror("La condicion del if debe de ser de tipo logico");
                    }
#line 1492 "asin.c"
    break;

  case 44: /* $@5: %empty  */
#line 224 "src/asin.y"
                    {
                        if ((yyvsp[-3].entero) != T_ERROR && (yyvsp[-3].entero) != T_LOGICO)
                            yyerror("La condicion del for debe ser de tipo logico");
                    }
#line 1501 "asin.c"
    break;

  case 46: /* expreOP: %empty  */
#line 232 "src/asin.y"
                    {(yyval.entero) = T_VACIO;}
#line 1507 "asin.c"
    break;

  case 47: /* expreOP: expre  */
#line 234 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero);}
#line 1513 "asin.c"
    break;

  case 48: /* expre: expreLogic  */
#line 238 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero);}
#line 1519 "asin.c"
    break;

  case 49: /* expre: ID_ IGUAL_ expre  */
#line 240 "src/asin.y"
                    {
                        SIMB sim = obtTdS((yyvsp[-2].cadena));
                        (yyval.entero) = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (ES_FUNCION(sim))
                            yyerror("No se puede asignar a una funcion");
                        else if (sim.t == T_ARRAY)
                            yyerror("Asignacion incompatible a un array");
                        else if ((yyvsp[0].entero) != T_ERROR) {
                            if (sim.t != (yyvsp[0].entero))
                                yyerror("Error de tipos en la instruccion de asignacion");
                            else
                                (yyval.entero) = sim.t;
                        }
                    }
#line 1540 "asin.c"
    break;

  case 50: /* expre: ID_ CORCHA_ expre CORCHC_ IGUAL_ expre  */
#line 257 "src/asin.y"
                    {
                        SIMB sim = obtTdS((yyvsp[-5].cadena));
                        (yyval.entero) = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (sim.t != T_ARRAY)
                            yyerror("La variable no es de tipo array");
                        else {
                            DIM dim = obtTdA(sim.ref);
                            if ((yyvsp[-3].entero) != T_ERROR && (yyvsp[-3].entero) != T_ENTERO)
                                yyerror("El indice del array debe ser de tipo entero");
                            if ((yyvsp[0].entero) != T_ERROR && dim.telem != (yyvsp[0].entero))
                                yyerror("Error de tipos en la asignacion al array");
                            if ((yyvsp[-3].entero) == T_ENTERO && dim.telem == (yyvsp[0].entero))
                                (yyval.entero) = dim.telem;
                        }
                    }
#line 1562 "asin.c"
    break;

  case 51: /* expreLogic: expreIgual  */
#line 277 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero);}
#line 1568 "asin.c"
    break;

  case 52: /* expreLogic: expreLogic opLogic expreIgual  */
#line 279 "src/asin.y"
                    {
                        (yyval.entero) = T_ERROR;
                        if ((yyvsp[-2].entero) != T_ERROR && (yyvsp[0].entero) != T_ERROR){
                            if ((yyvsp[-2].entero) != T_LOGICO || (yyvsp[0].entero) != T_LOGICO)
                                yyerror("Error de tipos en la expresion logica");
                            else 
                                (yyval.entero) = T_LOGICO;
                        }
                    }
#line 1582 "asin.c"
    break;

  case 53: /* expreIgual: expreRel  */
#line 291 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero);}
#line 1588 "asin.c"
    break;

  case 54: /* expreIgual: expreIgual opIgual expreRel  */
#line 293 "src/asin.y"
                    {
                        (yyval.entero) = T_ERROR;
                        if ((yyvsp[-2].entero) != T_ERROR && (yyvsp[0].entero) != T_ERROR){
                            if ((yyvsp[-2].entero) != (yyvsp[0].entero))
                                yyerror("Error de tipos en la expresion de igualdad");
                            else 
                                (yyval.entero) = T_LOGICO;
                        }
                    }
#line 1602 "asin.c"
    break;

  case 55: /* expreRel: expreAd  */
#line 305 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero);}
#line 1608 "asin.c"
    break;

  case 56: /* expreRel: expreRel opRel expreAd  */
#line 307 "src/asin.y"
                    {
                        (yyval.entero) = T_ERROR;
                        if ((yyvsp[-2].entero) != T_ERROR && (yyvsp[0].entero) != T_ERROR){
                            if ((yyvsp[-2].entero) != T_ENTERO || (yyvsp[0].entero) != T_ENTERO)
                                yyerror("Error de tipos en la expresion relacional");
                            else
                                (yyval.entero) = T_LOGICO;
                        }
                    }
#line 1622 "asin.c"
    break;

  case 57: /* expreAd: expreMul  */
#line 319 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero);}
#line 1628 "asin.c"
    break;

  case 58: /* expreAd: expreAd opAd expreMul  */
#line 321 "src/asin.y"
                    {
                        (yyval.entero) = T_ERROR;
                        if ((yyvsp[-2].entero) != T_ERROR && (yyvsp[0].entero) != T_ERROR) {
                            if ((yyvsp[-2].entero) != T_ENTERO || (yyvsp[0].entero) != T_ENTERO)
                                yyerror("Error de tipos en la expresion aditiva");
                            else
                                (yyval.entero) = T_ENTERO;
                        }
                    }
#line 1642 "asin.c"
    break;

  case 59: /* expreMul: expreUna  */
#line 333 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero);}
#line 1648 "asin.c"
    break;

  case 60: /* expreMul: expreMul opMul expreUna  */
#line 335 "src/asin.y"
                    {
                        (yyval.entero) = T_ERROR;
                        if ((yyvsp[-2].entero) != T_ERROR && (yyvsp[0].entero) != T_ERROR) {
                            if ((yyvsp[-2].entero) != T_ENTERO || (yyvsp[0].entero) != T_ENTERO)
                                yyerror("Error de tipos en la expresion multiplicativa");
                            else
                                (yyval.entero) = T_ENTERO;
                        }
                    }
#line 1662 "asin.c"
    break;

  case 61: /* expreUna: expreSufi  */
#line 347 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero); }
#line 1668 "asin.c"
    break;

  case 62: /* expreUna: opUna expreUna  */
#line 349 "src/asin.y"
                    {
                        (yyval.entero) = T_ERROR;
                        if ((yyvsp[0].entero) != T_ERROR) {
                            if ((yyvsp[-1].entero) == EXCL_) {
                                if ((yyvsp[0].entero) != T_LOGICO)
                                    yyerror("Error de tipos en la negacion logica");
                                else
                                    (yyval.entero) = T_LOGICO;
                            } else {
                                if ((yyvsp[0].entero) != T_ENTERO)
                                    yyerror("Error de tipos en el operador unario aritmetico");
                                else
                                    (yyval.entero) = T_ENTERO;
                            }
                        }
                    }
#line 1689 "asin.c"
    break;

  case 63: /* expreSufi: constante  */
#line 368 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero);}
#line 1695 "asin.c"
    break;

  case 64: /* expreSufi: PARA_ expre PARC_  */
#line 370 "src/asin.y"
                    {(yyval.entero) = (yyvsp[-1].entero);}
#line 1701 "asin.c"
    break;

  case 65: /* expreSufi: ID_  */
#line 372 "src/asin.y"
                    {
                        SIMB sim = obtTdS((yyvsp[0].cadena));
                        (yyval.entero) = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (ES_FUNCION(sim))
                            yyerror("Uso incorrecto de identificador de funcion");
                        else if (sim.t == T_ARRAY)
                            yyerror("El identificador de array requiere indice");
                        else
                            (yyval.entero) = sim.t;
                    }
#line 1718 "asin.c"
    break;

  case 66: /* expreSufi: ID_ CORCHA_ expre CORCHC_  */
#line 385 "src/asin.y"
                    {
                        SIMB sim = obtTdS((yyvsp[-3].cadena));
                        (yyval.entero) = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (sim.t != T_ARRAY)
                            yyerror("La variable no es de tipo array");
                        else {
                            DIM dim = obtTdA(sim.ref);
                            if ((yyvsp[-1].entero) != T_ERROR && (yyvsp[-1].entero) != T_ENTERO)
                                yyerror("El indice del array debe ser de tipo entero");
                            else if ((yyvsp[-1].entero) == T_ENTERO)
                                (yyval.entero) = dim.telem;
                        }
                    }
#line 1738 "asin.c"
    break;

  case 67: /* expreSufi: ID_ PARA_ paramAct PARC_  */
#line 401 "src/asin.y"
                    {
                        SIMB sim = obtTdS((yyvsp[-3].cadena));
                        (yyval.entero) = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Funcion no declarada");
                        else if (!ES_FUNCION(sim))
                            yyerror("El identificador no es una funcion");
                        else if ((yyvsp[-1].entero) >= 0) {
                            if (!cmpDom(sim.ref, (yyvsp[-1].entero)))
                                yyerror("Error en los parametros de la llamada a la funcion");
                            else
                                (yyval.entero) = sim.t;
                        }
                    }
#line 1757 "asin.c"
    break;

  case 68: /* paramAct: %empty  */
#line 418 "src/asin.y"
                    { (yyval.entero) = insTdD(-1 , T_VACIO);}
#line 1763 "asin.c"
    break;

  case 69: /* paramAct: listParamAct  */
#line 420 "src/asin.y"
                    {(yyval.entero) = (yyvsp[0].entero); }
#line 1769 "asin.c"
    break;

  case 70: /* listParamAct: expre  */
#line 424 "src/asin.y"
                    { (yyval.entero) = ((yyvsp[0].entero) == T_ERROR) ? -1 : insTdD(-1, (yyvsp[0].entero)); }
#line 1775 "asin.c"
    break;

  case 71: /* listParamAct: expre COMA_ listParamAct  */
#line 426 "src/asin.y"
                    { (yyval.entero) = ((yyvsp[-2].entero) == T_ERROR || (yyvsp[0].entero) < 0) ? -1 : insTdD((yyvsp[0].entero), (yyvsp[-2].entero));}
#line 1781 "asin.c"
    break;

  case 84: /* opUna: MAS_  */
#line 451 "src/asin.y"
                       { (yyval.entero) = MAS_;}
#line 1787 "asin.c"
    break;

  case 85: /* opUna: MENOS_  */
#line 452 "src/asin.y"
                         { (yyval.entero) = MENOS_;}
#line 1793 "asin.c"
    break;

  case 86: /* opUna: EXCL_  */
#line 453 "src/asin.y"
                        { (yyval.entero) = EXCL_;}
#line 1799 "asin.c"
    break;


#line 1803 "asin.c"

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

#line 455 "src/asin.y"

