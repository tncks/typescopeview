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
#line 7 "cminus.y"

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"


#define YYSTYPE TreeNode *
// static char * savedName; 
// static int savedLineNo;  
static TreeNode * savedTree; /* stores syntax tree for later return */
static int yylex(void); // added 11/2/11 to ensure no conflict with lex
int yyerror(const char * message);

#line 88 "cminus.tab.c"

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

#include "cminus.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_RETURN = 5,                     /* RETURN  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_NUM = 9,                        /* NUM  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_PLUS = 11,                      /* PLUS  */
  YYSYMBOL_MINUS = 12,                     /* MINUS  */
  YYSYMBOL_OVER = 13,                      /* OVER  */
  YYSYMBOL_TIMES = 14,                     /* TIMES  */
  YYSYMBOL_LT = 15,                        /* LT  */
  YYSYMBOL_LE = 16,                        /* LE  */
  YYSYMBOL_GT = 17,                        /* GT  */
  YYSYMBOL_GE = 18,                        /* GE  */
  YYSYMBOL_EQ = 19,                        /* EQ  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_ASSIGN = 21,                    /* ASSIGN  */
  YYSYMBOL_SEMI = 22,                      /* SEMI  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_LPAREN = 24,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 25,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 26,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 27,                    /* RBRACE  */
  YYSYMBOL_LCURLY = 28,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 29,                    /* RCURLY  */
  YYSYMBOL_ERROR = 30,                     /* ERROR  */
  YYSYMBOL_XIF = 31,                       /* XIF  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_declaration_list = 34,          /* declaration_list  */
  YYSYMBOL_declaration = 35,               /* declaration  */
  YYSYMBOL_var_declaration = 36,           /* var_declaration  */
  YYSYMBOL_type_specifier = 37,            /* type_specifier  */
  YYSYMBOL_fun_declaration = 38,           /* fun_declaration  */
  YYSYMBOL_params = 39,                    /* params  */
  YYSYMBOL_param_list = 40,                /* param_list  */
  YYSYMBOL_param = 41,                     /* param  */
  YYSYMBOL_compound_stmt = 42,             /* compound_stmt  */
  YYSYMBOL_local_declarations = 43,        /* local_declarations  */
  YYSYMBOL_statement_list = 44,            /* statement_list  */
  YYSYMBOL_statement = 45,                 /* statement  */
  YYSYMBOL_expression_stmt = 46,           /* expression_stmt  */
  YYSYMBOL_selection_stmt = 47,            /* selection_stmt  */
  YYSYMBOL_iteration_stmt = 48,            /* iteration_stmt  */
  YYSYMBOL_return_stmt = 49,               /* return_stmt  */
  YYSYMBOL_expression = 50,                /* expression  */
  YYSYMBOL_var = 51,                       /* var  */
  YYSYMBOL_simple_expression = 52,         /* simple_expression  */
  YYSYMBOL_relop = 53,                     /* relop  */
  YYSYMBOL_additive_expression = 54,       /* additive_expression  */
  YYSYMBOL_addop = 55,                     /* addop  */
  YYSYMBOL_term = 56,                      /* term  */
  YYSYMBOL_mulop = 57,                     /* mulop  */
  YYSYMBOL_factor = 58,                    /* factor  */
  YYSYMBOL_call = 59,                      /* call  */
  YYSYMBOL_arg_list = 60,                  /* arg_list  */
  YYSYMBOL_number = 61,                    /* number  */
  YYSYMBOL_identifier = 62                 /* identifier  */
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
typedef yytype_int8 yy_state_t;

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   138

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    42,    52,    57,    61,    67,    75,    91,
      92,    94,   105,   109,   117,   126,   136,   138,   145,   153,
     166,   180,   194,   204,   214,   219,   228,   230,   231,   232,
     233,   234,   236,   237,   239,   243,   249,   254,   255,   259,
     263,   265,   266,   270,   274,   276,   277,   278,   279,   280,
     281,   283,   287,   289,   291,   293,   297,   299,   300,   302,
     303,   304,   305,   308,   312,   319,   328,   330,   337
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "RETURN",
  "WHILE", "INT", "VOID", "NUM", "ID", "PLUS", "MINUS", "OVER", "TIMES",
  "LT", "LE", "GT", "GE", "EQ", "NE", "ASSIGN", "SEMI", "COMMA", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LCURLY", "RCURLY", "ERROR", "XIF",
  "$accept", "program", "declaration_list", "declaration",
  "var_declaration", "type_specifier", "fun_declaration", "params",
  "param_list", "param", "compound_stmt", "local_declarations",
  "statement_list", "statement", "expression_stmt", "selection_stmt",
  "iteration_stmt", "return_stmt", "expression", "var",
  "simple_expression", "relop", "additive_expression", "addop", "term",
  "mulop", "factor", "call", "arg_list", "number", "identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-42)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-14)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      47,   -42,   -42,    14,    47,   -42,   -42,     9,   -42,   -42,
     -42,   -42,     4,   -42,    84,    24,    13,     9,    36,    23,
     -42,   -42,    38,    44,    50,    47,    63,    62,    34,   -42,
     -42,   -42,   -42,    69,    77,    73,   -42,    -2,   -42,   -42,
       9,   -42,    66,    74,   -42,   -42,   -42,   -42,   -42,    78,
      99,   -42,    97,    68,   -42,   -42,   -42,    21,    -2,   -42,
      83,    -2,    96,    31,   -42,   -42,   101,   -42,   -42,   -42,
      -2,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,    -2,
      -2,   -42,   -42,    -2,    -4,    -2,   102,   -42,   103,   -42,
     -42,   -42,   -42,   107,    68,   -42,   -42,   -42,    41,    95,
       7,     7,    -2,   -42,   -42,   120,   -42,   -42,     7,   -42
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,    10,     0,     2,     4,     5,     0,     6,     1,
       3,    68,     0,     7,    14,     0,    10,     0,     0,    12,
      16,    67,     0,    17,     0,     0,     0,     0,     0,    11,
      15,     8,    18,     0,     0,     0,    33,     0,    22,    24,
       0,    28,     0,     0,    26,    27,    29,    30,    31,     0,
      60,    40,    44,    52,    56,    61,    62,    41,     0,    37,
       0,     0,     0,     0,    21,    23,     0,    20,    25,    32,
       0,    53,    54,    45,    46,    47,    48,    49,    50,     0,
       0,    58,    57,     0,     0,     0,     0,    38,     0,    59,
      19,    39,    60,    43,    51,    55,    63,    66,     0,     0,
       0,     0,     0,    64,    42,    34,    36,    65,     0,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -42,   -42,   -42,   122,   -19,   -10,   -42,   -42,   -42,   106,
     108,   -42,    91,   -41,   -42,   -42,   -42,   -42,   -34,   -31,
     -42,   -42,    55,   -42,    56,   -42,    52,   -42,   -42,   123,
      -6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,     8,    18,    19,    20,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    79,    52,    80,    53,    83,    54,    55,    98,    56,
      57
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      60,    12,    68,    62,    17,    21,    11,    21,    11,    39,
      33,    23,    34,    35,     9,    17,    21,    11,    40,    11,
      37,    96,    37,    65,    86,    68,    13,    88,    14,    36,
      15,    37,    40,    21,    63,    28,    91,    33,   -13,    34,
      35,     1,     2,    21,    11,    84,    25,    85,    92,    92,
      97,    99,    92,    13,     1,     2,    36,    15,    37,   105,
     106,    24,    28,    38,   102,    26,   103,   109,   107,    33,
      27,    34,    35,     1,     2,    21,    11,    33,    28,    34,
      35,    81,    82,    21,    11,    31,    21,    11,    36,    32,
      37,     1,    16,    58,    28,    64,    36,    61,    37,    59,
      69,    37,    28,    67,    33,    87,    34,    35,    71,    72,
      21,    11,    73,    74,    75,    76,    77,    78,    71,    72,
      70,    89,   104,    36,   108,    37,    10,   100,   101,    28,
      90,    30,    29,    66,    93,    95,    94,     0,    22
};

static const yytype_int8 yycheck[] =
{
      34,     7,    43,    37,    14,     9,    10,     9,    10,    28,
       3,    17,     5,     6,     0,    25,     9,    10,    28,    10,
      24,    25,    24,    42,    58,    66,    22,    61,    24,    22,
      26,    24,    42,     9,    40,    28,    70,     3,    25,     5,
       6,     7,     8,     9,    10,    24,    23,    26,    79,    80,
      84,    85,    83,    22,     7,     8,    22,    26,    24,   100,
     101,    25,    28,    29,    23,    27,    25,   108,   102,     3,
      26,     5,     6,     7,     8,     9,    10,     3,    28,     5,
       6,    13,    14,     9,    10,    22,     9,    10,    22,    27,
      24,     7,     8,    24,    28,    29,    22,    24,    24,    22,
      22,    24,    28,    29,     3,    22,     5,     6,    11,    12,
       9,    10,    15,    16,    17,    18,    19,    20,    11,    12,
      21,    25,    27,    22,     4,    24,     4,    25,    25,    28,
      29,    25,    24,    42,    79,    83,    80,    -1,    15
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     8,    33,    34,    35,    36,    37,    38,     0,
      35,    10,    62,    22,    24,    26,     8,    37,    39,    40,
      41,     9,    61,    62,    25,    23,    27,    26,    28,    42,
      41,    22,    27,     3,     5,     6,    22,    24,    29,    36,
      37,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    54,    56,    58,    59,    61,    62,    24,    22,
      50,    24,    50,    62,    29,    36,    44,    29,    45,    22,
      21,    11,    12,    15,    16,    17,    18,    19,    20,    53,
      55,    13,    14,    57,    24,    26,    50,    22,    50,    25,
      29,    50,    51,    54,    56,    58,    25,    50,    60,    50,
      25,    25,    23,    25,    27,    45,    45,    50,     4,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    36,    37,
      37,    38,    39,    39,    39,    40,    40,    41,    41,    42,
      42,    42,    42,    43,    43,    44,    44,    45,    45,    45,
      45,    45,    46,    46,    47,    47,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    58,
      58,    58,    58,    59,    59,    60,    60,    61,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     6,     1,     1,     0,     3,     1,     2,     4,     4,
       3,     3,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     5,     7,     5,     2,     3,     3,
       1,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     3,     4,     3,     1,     1,     1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declaration_list  */
#line 40 "cminus.y"
                 { savedTree = yyvsp[0];}
#line 1331 "cminus.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 43 "cminus.y"
                 { YYSTYPE t = yyvsp[-1];
                   printf("Parsed declaration list\n");
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = yyvsp[0];
                     yyval = yyvsp[-1]; }
                     else yyval = yyvsp[0];
                 }
#line 1345 "cminus.tab.c"
    break;

  case 4: /* declaration_list: declaration  */
#line 52 "cminus.y"
                           {
               yyval = yyvsp[0];
               printf("Parsed single declaration\n");
                }
#line 1354 "cminus.tab.c"
    break;

  case 5: /* declaration: var_declaration  */
#line 57 "cminus.y"
                                     { 
                      yyval = yyvsp[0];
                      printf("Parsed variable declaration\n");
                       }
#line 1363 "cminus.tab.c"
    break;

  case 6: /* declaration: fun_declaration  */
#line 61 "cminus.y"
                              { 
              yyval = yyvsp[0];
              printf("Parsed function declaration\n");
               }
#line 1372 "cminus.tab.c"
    break;

  case 7: /* var_declaration: type_specifier identifier SEMI  */
#line 68 "cminus.y"
                                      { yyval = newDeclNode(VarK);
                yyval->type = yyvsp[-2]->kind.type;
                yyval->attr.name = yyvsp[-1]->attr.name;
                yyval->lineno = yyvsp[-1]->lineno;
                yyval->isArray = 0;
                printf("Parsed var_declaration\n");
				      }
#line 1384 "cminus.tab.c"
    break;

  case 8: /* var_declaration: type_specifier identifier LBRACE number RBRACE SEMI  */
#line 76 "cminus.y"
                                      { yyval = newDeclNode(VarK);
                yyval->type = yyvsp[-5]->kind.type;
                yyval->attr.name = yyvsp[-4]->attr.name;
                yyval->attr.val = yyvsp[-2]->attr.val;
                yyval->lineno = yyvsp[-4]->lineno;
                yyval->isArray = 1;

                yyval->child[0]->attr.val = yyvsp[-2]->attr.val;
                yyval->child[0]->type = Integer;
                yyval->child[0]->isArray = 1;
                
                printf("Parsed array var_declaration\n");
				      }
#line 1402 "cminus.tab.c"
    break;

  case 9: /* type_specifier: INT  */
#line 91 "cminus.y"
                       { yyval = newTypeNode(Integer); }
#line 1408 "cminus.tab.c"
    break;

  case 10: /* type_specifier: VOID  */
#line 92 "cminus.y"
                   { yyval = newTypeNode(Void); }
#line 1414 "cminus.tab.c"
    break;

  case 11: /* fun_declaration: type_specifier identifier LPAREN params RPAREN compound_stmt  */
#line 95 "cminus.y"
            { yyval = newDeclNode(FunK); 
              yyval->type = yyvsp[-5]->kind.type; 
              yyval->attr.name = yyvsp[-4]->attr.name;
              yyval->child[0] = yyvsp[-2];
              yyval->child[1] = yyvsp[0];
              yyval->lineno = yyvsp[-4]->lineno;
              printf("Parsed function\n");
               }
#line 1427 "cminus.tab.c"
    break;

  case 12: /* params: param_list  */
#line 105 "cminus.y"
                         { 
                yyval = yyvsp[0];
                printf("Parsed params\n");
                 }
#line 1436 "cminus.tab.c"
    break;

  case 13: /* params: VOID  */
#line 109 "cminus.y"
                   { 
              //$$ = NULL;
                yyval = newDeclNode(ParamK);
				        //$$->type = $1->kind.type;
                //$$->attr.name = $2->attr.name;
                //$$->lineno = $2->lineno;
                yyval->isArray = -1;
               }
#line 1449 "cminus.tab.c"
    break;

  case 14: /* params: %empty  */
#line 117 "cminus.y"
              { 
              //$$ = NULL;
                yyval = newDeclNode(ParamK);
				        //$$->type = $1->kind.type;
                //$$->attr.name = $2->attr.name;
                //$$->lineno = $2->lineno;
                yyval->isArray = -1;
               }
#line 1462 "cminus.tab.c"
    break;

  case 15: /* param_list: param_list COMMA param  */
#line 127 "cminus.y"
                                      { YYSTYPE t = yyvsp[-2];
                if (t != NULL){
                  while (t->sibling != NULL)
                    t = t->sibling;
                  t->sibling = yyvsp[0];
                  yyval = yyvsp[-2];
                }
                else yyval = yyvsp[0];
				      }
#line 1476 "cminus.tab.c"
    break;

  case 16: /* param_list: param  */
#line 136 "cminus.y"
                            { yyval = yyvsp[0]; }
#line 1482 "cminus.tab.c"
    break;

  case 17: /* param: type_specifier identifier  */
#line 139 "cminus.y"
                                      { yyval = newDeclNode(ParamK);
				        yyval->type = yyvsp[-1]->kind.type;
                yyval->attr.name = yyvsp[0]->attr.name;
                yyval->lineno = yyvsp[0]->lineno;
                yyval->isArray = 0;
				      }
#line 1493 "cminus.tab.c"
    break;

  case 18: /* param: type_specifier identifier LBRACE RBRACE  */
#line 146 "cminus.y"
                                      { yyval = newDeclNode(ParamK);
				        yyval->type = yyvsp[-3]->kind.type;
                yyval->attr.name = yyvsp[-2]->attr.name;                
                yyval->lineno = yyvsp[-2]->lineno;
                yyval->isArray = 1;
				      }
#line 1504 "cminus.tab.c"
    break;

  case 19: /* compound_stmt: LCURLY local_declarations statement_list RCURLY  */
#line 154 "cminus.y"
              { yyval = newStmtNode(CompK);
                yyval->lineno = lineno;  
                printf("Parsed compound statement\n");
                if (yyvsp[-2] != NULL){
                  yyval->child[0] = yyvsp[-2];
                  yyval->child[1] = yyvsp[-1];
                }
                else {
                  yyval->child[0] = NULL;
                  yyval->child[1] = yyvsp[-1];
                  }
                }
#line 1521 "cminus.tab.c"
    break;

  case 20: /* compound_stmt: LCURLY statement_list RCURLY  */
#line 167 "cminus.y"
              {
                yyval = newStmtNode(CompK);
                yyval->lineno = lineno;  
                printf("Parsed compound statement with only statements\n");
                if (yyvsp[-1] != NULL){
                  yyval->child[0] = NULL;
                  yyval->child[1] = yyvsp[-1];
                } else {
                  yyval->child[0] = NULL;
                  yyval->child[1] = NULL;
                }
            
              }
#line 1539 "cminus.tab.c"
    break;

  case 21: /* compound_stmt: LCURLY local_declarations RCURLY  */
#line 181 "cminus.y"
              {

                yyval = newStmtNode(CompK);
                yyval->lineno = lineno;  
                printf("Parsed compound statement with local declarations\n");
                if (yyvsp[-1] != NULL) {
                  yyval->child[0] = yyvsp[-1];
                  yyval->child[1] = NULL;
                } else {
                  yyval->child[0] = NULL;
                  yyval->child[1] = NULL;
                }
              }
#line 1557 "cminus.tab.c"
    break;

  case 22: /* compound_stmt: LCURLY RCURLY  */
#line 195 "cminus.y"
              { 
                yyval = newStmtNode(CompK);
                yyval->lineno = lineno;  
                printf("Parsed empty compound statement\n");
                yyval->child[0] = NULL;
                yyval->child[1] = NULL;
              }
#line 1569 "cminus.tab.c"
    break;

  case 23: /* local_declarations: local_declarations var_declaration  */
#line 205 "cminus.y"
              { YYSTYPE t = yyvsp[-1];
              printf("Parsed local declarations\n");
                if(t != NULL) {
                  while(t->sibling != NULL)
                    t = t->sibling;
                  t->sibling = yyvsp[0];
                  yyval = yyvsp[-1];
                }
                else yyval = yyvsp[0]; }
#line 1583 "cminus.tab.c"
    break;

  case 24: /* local_declarations: var_declaration  */
#line 214 "cminus.y"
                              { 
              yyval = yyvsp[0];
              printf("Parsed single local declaration\n");
             }
#line 1592 "cminus.tab.c"
    break;

  case 25: /* statement_list: statement_list statement  */
#line 220 "cminus.y"
              { YYSTYPE t = yyvsp[-1];
                if(t != NULL){
                  while(t->sibling != NULL)
                    t = t->sibling;
                  t->sibling = yyvsp[0];
                  yyval = yyvsp[-1];
                }
                else yyval = yyvsp[0]; }
#line 1605 "cminus.tab.c"
    break;

  case 26: /* statement_list: statement  */
#line 228 "cminus.y"
                        { yyval = yyvsp[0]; }
#line 1611 "cminus.tab.c"
    break;

  case 27: /* statement: expression_stmt  */
#line 230 "cminus.y"
                              { yyval = yyvsp[0]; }
#line 1617 "cminus.tab.c"
    break;

  case 28: /* statement: compound_stmt  */
#line 231 "cminus.y"
                            { yyval = yyvsp[0]; }
#line 1623 "cminus.tab.c"
    break;

  case 29: /* statement: selection_stmt  */
#line 232 "cminus.y"
                             { yyval = yyvsp[0]; }
#line 1629 "cminus.tab.c"
    break;

  case 30: /* statement: iteration_stmt  */
#line 233 "cminus.y"
                             { yyval = yyvsp[0]; }
#line 1635 "cminus.tab.c"
    break;

  case 31: /* statement: return_stmt  */
#line 234 "cminus.y"
                          { yyval = yyvsp[0]; }
#line 1641 "cminus.tab.c"
    break;

  case 32: /* expression_stmt: expression SEMI  */
#line 236 "cminus.y"
                                    { yyval = yyvsp[-1]; }
#line 1647 "cminus.tab.c"
    break;

  case 33: /* expression_stmt: SEMI  */
#line 237 "cminus.y"
                   { yyval = NULL; }
#line 1653 "cminus.tab.c"
    break;

  case 34: /* selection_stmt: IF LPAREN expression RPAREN statement  */
#line 240 "cminus.y"
              { yyval = newStmtNode(IfK);
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0]; }
#line 1661 "cminus.tab.c"
    break;

  case 35: /* selection_stmt: IF LPAREN expression RPAREN statement ELSE statement  */
#line 244 "cminus.y"
              { yyval = newStmtNode(IfK);
                yyval->child[0] = yyvsp[-4];
                yyval->child[1] = yyvsp[-2];
                yyval->child[2] = yyvsp[0]; }
#line 1670 "cminus.tab.c"
    break;

  case 36: /* iteration_stmt: WHILE LPAREN expression RPAREN statement  */
#line 250 "cminus.y"
              { yyval = newStmtNode(WhileK);
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0]; }
#line 1678 "cminus.tab.c"
    break;

  case 37: /* return_stmt: RETURN SEMI  */
#line 254 "cminus.y"
                             { yyval = newStmtNode(ReturnK); }
#line 1684 "cminus.tab.c"
    break;

  case 38: /* return_stmt: RETURN expression SEMI  */
#line 256 "cminus.y"
              { yyval = newStmtNode(ReturnK); 
                yyval->child[0] = yyvsp[-1]; }
#line 1691 "cminus.tab.c"
    break;

  case 39: /* expression: var ASSIGN expression  */
#line 260 "cminus.y"
              { yyval = newStmtNode(AssignK);
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0]; }
#line 1699 "cminus.tab.c"
    break;

  case 40: /* expression: simple_expression  */
#line 263 "cminus.y"
                                { yyval = yyvsp[0]; }
#line 1705 "cminus.tab.c"
    break;

  case 41: /* var: identifier  */
#line 265 "cminus.y"
                         { yyval = yyvsp[0]; }
#line 1711 "cminus.tab.c"
    break;

  case 42: /* var: identifier LBRACE expression RBRACE  */
#line 267 "cminus.y"
              { yyval = yyvsp[-3];
                yyval->child[0] = yyvsp[-1]; }
#line 1718 "cminus.tab.c"
    break;

  case 43: /* simple_expression: additive_expression relop additive_expression  */
#line 271 "cminus.y"
              { yyval = yyvsp[-1];
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0]; }
#line 1726 "cminus.tab.c"
    break;

  case 44: /* simple_expression: additive_expression  */
#line 274 "cminus.y"
                                  { yyval = yyvsp[0]; }
#line 1732 "cminus.tab.c"
    break;

  case 45: /* relop: LT  */
#line 276 "cminus.y"
                 { yyval = newExpNode(OpK); yyval->attr.op = LT; }
#line 1738 "cminus.tab.c"
    break;

  case 46: /* relop: LE  */
#line 277 "cminus.y"
                 { yyval = newExpNode(OpK); yyval->attr.op = LE; }
#line 1744 "cminus.tab.c"
    break;

  case 47: /* relop: GT  */
#line 278 "cminus.y"
                 { yyval = newExpNode(OpK); yyval->attr.op = GT; }
#line 1750 "cminus.tab.c"
    break;

  case 48: /* relop: GE  */
#line 279 "cminus.y"
                 { yyval = newExpNode(OpK); yyval->attr.op = GE; }
#line 1756 "cminus.tab.c"
    break;

  case 49: /* relop: EQ  */
#line 280 "cminus.y"
                 { yyval = newExpNode(OpK); yyval->attr.op = EQ; }
#line 1762 "cminus.tab.c"
    break;

  case 50: /* relop: NE  */
#line 281 "cminus.y"
                 { yyval = newExpNode(OpK); yyval->attr.op = NE; }
#line 1768 "cminus.tab.c"
    break;

  case 51: /* additive_expression: additive_expression addop term  */
#line 284 "cminus.y"
              { yyval = yyvsp[-1];
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0]; }
#line 1776 "cminus.tab.c"
    break;

  case 52: /* additive_expression: term  */
#line 287 "cminus.y"
                   { yyval = yyvsp[0]; }
#line 1782 "cminus.tab.c"
    break;

  case 53: /* addop: PLUS  */
#line 289 "cminus.y"
                     { yyval = newExpNode(OpK); yyval->attr.op = PLUS; }
#line 1788 "cminus.tab.c"
    break;

  case 54: /* addop: MINUS  */
#line 291 "cminus.y"
                    { yyval = newExpNode(OpK); yyval->attr.op = MINUS; }
#line 1794 "cminus.tab.c"
    break;

  case 55: /* term: term mulop factor  */
#line 294 "cminus.y"
              { yyval = yyvsp[-1];
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0]; }
#line 1802 "cminus.tab.c"
    break;

  case 56: /* term: factor  */
#line 297 "cminus.y"
                     { yyval = yyvsp[0]; }
#line 1808 "cminus.tab.c"
    break;

  case 57: /* mulop: TIMES  */
#line 299 "cminus.y"
                     { yyval = newExpNode(OpK); yyval->attr.op = TIMES; }
#line 1814 "cminus.tab.c"
    break;

  case 58: /* mulop: OVER  */
#line 300 "cminus.y"
                   { yyval = newExpNode(OpK); yyval->attr.op = OVER; }
#line 1820 "cminus.tab.c"
    break;

  case 59: /* factor: LPAREN expression RPAREN  */
#line 302 "cminus.y"
                                       { yyval = yyvsp[-1]; }
#line 1826 "cminus.tab.c"
    break;

  case 60: /* factor: var  */
#line 303 "cminus.y"
                  { yyval = yyvsp[0]; }
#line 1832 "cminus.tab.c"
    break;

  case 61: /* factor: call  */
#line 304 "cminus.y"
                   { yyval = yyvsp[0]; }
#line 1838 "cminus.tab.c"
    break;

  case 62: /* factor: number  */
#line 305 "cminus.y"
                     { yyval = yyvsp[0]; }
#line 1844 "cminus.tab.c"
    break;

  case 63: /* call: identifier LPAREN RPAREN  */
#line 309 "cminus.y"
              { yyval = newStmtNode(CallK);
                yyval->attr.name = yyvsp[-2]->attr.name;
                yyval->lineno = yyvsp[-2]->lineno; }
#line 1852 "cminus.tab.c"
    break;

  case 64: /* call: identifier LPAREN arg_list RPAREN  */
#line 313 "cminus.y"
              { yyval = newStmtNode(CallK);
                yyval->attr.name = yyvsp[-3]->attr.name;
                yyval->lineno = yyvsp[-3]->lineno;
                yyval->child[0] = yyvsp[-1]; }
#line 1861 "cminus.tab.c"
    break;

  case 65: /* arg_list: arg_list COMMA expression  */
#line 320 "cminus.y"
              { YYSTYPE t = yyvsp[-2];
                if (t != NULL){
                  while (t->sibling != NULL)
                    t = t->sibling;
                  t->sibling = yyvsp[0];
                  yyval = yyvsp[-2];
                }
                else yyval = yyvsp[0]; }
#line 1874 "cminus.tab.c"
    break;

  case 66: /* arg_list: expression  */
#line 328 "cminus.y"
                         { yyval = yyvsp[0]; }
#line 1880 "cminus.tab.c"
    break;

  case 67: /* number: NUM  */
#line 331 "cminus.y"
              { yyval = newExpNode(ConstK);
                yyval->attr.val = atoi(tokenString);
                yyval->type = Integer;
                yyval->isArray = 0;
                 }
#line 1890 "cminus.tab.c"
    break;

  case 68: /* identifier: ID  */
#line 338 "cminus.y"
              { yyval = newExpNode(IdK);
                yyval->attr.name = copyString(tokenString); }
#line 1897 "cminus.tab.c"
    break;


#line 1901 "cminus.tab.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 341 "cminus.y"


int yyerror(const char * message){
  Error = TRUE;
  printf("Error: %s\n", message);
  printf("Error Location: [%d]\n", lineno);
  printf("Current token causing error: %d\n", yylex());
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ yyparse();
  return savedTree;
}

