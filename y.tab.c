/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYPATCH 20210328

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "structfe.y"
        #include "table-symboles.h" 
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 5 "structfe.y"
typedef union YYSTYPE{
        struct _symbole_t* syms;
        struct  _node* nnode;
        struct _linked_list* ll;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 36 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define IDENTIFIER 257
#define CONSTANT 258
#define SIZEOF 259
#define PTR_OP 260
#define LE_OP 261
#define GE_OP 262
#define EQ_OP 263
#define NE_OP 264
#define AND_OP 265
#define OR_OP 266
#define EXTERN 267
#define INT 268
#define VOID 269
#define STRUCT 270
#define IF 271
#define ELSE 272
#define WHILE 273
#define FOR 274
#define RETURN 275
#define LOWER_THAN_ELSE 276
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    2,    2,    2,    4,    4,    4,    4,    4,    5,    5,
    6,    6,    6,    7,    7,    7,    8,    8,    8,    9,
    9,    9,   10,   10,   10,   10,   10,   11,   11,   11,
   12,   12,   13,   13,    3,    3,   14,   14,   15,   15,
    1,    1,    1,   17,   17,   17,   18,   18,   19,   16,
   16,   20,   20,   20,   20,   21,   21,   22,   23,   23,
   23,   23,   23,   24,   24,   24,   24,   30,   30,   29,
   29,   25,   25,   26,   26,   27,   27,   28,   28,    0,
    0,   31,   31,   32,
};
static const YYINT yylen[] = {                            2,
    1,    1,    3,    1,    3,    4,    3,    3,    1,    3,
    1,    2,    2,    1,    1,    1,    1,    3,    3,    1,
    3,    3,    1,    3,    3,    3,    3,    1,    3,    3,
    1,    3,    1,    3,    1,    3,    3,    2,    2,    1,
    1,    1,    1,    5,    4,    2,    1,    2,    3,    2,
    1,    1,    3,    4,    3,    1,    3,    2,    1,    1,
    1,    1,    1,    2,    3,    3,    4,    1,    2,    1,
    2,    1,    2,    5,    7,    5,    7,    2,    3,    1,
    2,    1,    1,    3,
};
static const YYINT yydefred[] = {                         0,
    0,   42,   41,    0,    0,   40,   83,    0,    0,   80,
   82,   39,   43,    0,    0,   81,   52,    0,    0,    0,
    0,   38,    0,    0,    0,   47,    0,    0,   37,    0,
   84,    0,    0,    0,   45,   48,   53,    1,    2,    0,
    0,    0,    0,    0,    0,   14,   15,   16,   72,   64,
    4,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   68,    0,   70,   59,   60,   61,   62,   63,    0,
    0,   55,    0,    0,   56,   44,   49,   13,    0,    0,
    0,   78,    0,    0,   73,    0,    0,    0,    0,   12,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   65,   71,   66,   69,    0,   58,   54,
    0,    0,    0,    0,   79,    3,    8,    5,    9,    0,
    7,   36,   18,   19,   17,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   67,   57,    0,    0,    0,
    6,    0,    0,   76,    0,   10,    0,    0,   75,   77,
};
static const YYINT yydgoto[] = {                          5,
    6,   51,   52,   53,  120,   54,   55,   56,   57,   58,
   59,   60,   61,    7,    8,   20,   13,   25,   26,   21,
   74,   75,   64,   65,   66,   67,   68,   69,   70,   71,
   10,   11,
};
static const YYINT yysindex[] = {                         7,
 -204,    0,    0, -109,    7,    0,    0,  -23,  -53,    0,
    0,    0,    0, -105, -204,    0,    0,  -23,  -39,  -54,
  -15,    0, -204,  -23,  -74,    0,   -3,  -15,    0,  -38,
    0,   27,  -44,   16,    0,    0,    0,    0,    0,  392,
   15,   44,   52,  290,  392,    0,    0,    0,    0,    0,
    0,   23,  -37,   33,  392,   -7,   -9,  107, -193, -157,
 -156,    0,  -23,    0,    0,    0,    0,    0,    0,  -12,
  -18,    0,  -23,   17,    0,    0,    0,    0,  392,  392,
  377,    0,   59,   88,    0, -127,  170, -119,  392,    0,
  392,  392,  392,  392,  392,  392,  392,  392,  392,  392,
  392,  392,   90,    0,    0,    0,    0,    8,    0,    0,
    7,  106,  117,  377,    0,    0,    0,    0,    0,   42,
    0,    0,    0,    0,    0,   -7,   -7,   -9,   -9,   -9,
   -9,  107,  107, -193, -157,    0,    0,   34,   34,  392,
    0,  392, -108,    0,  125,    0,   34,   34,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    3,    0,
    0,    0,    0,  -30,    0,    0,    0,    0,    0,    0,
  379,    0,    0,    0,    0,    0,    0,  380,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   55,   81,    0,   91,  118,   36,   68,  -28,
   19,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  101,  111,  124,  131,  138,
  144,   47,   60,  148,   -2,    0,    0,    0,    0,    0,
    0,    0,   14,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  425,    0,  367,    0,    0,  376,    0,   -4,  263,   21,
   73,   74,    0,  -22,  307,  181,   32,  158,  -10,  168,
    0,   98,  372,  182,  -70,    0,    0,    0,  130,    0,
  208,    0,
};
#define YYTABLESIZE 651
static const YYINT yytable[] = {                         46,
   18,   45,   87,   47,   29,   22,   48,   62,   88,   46,
  114,   46,   33,   15,   36,   33,   18,   23,   19,   46,
   49,   45,   36,   47,   32,   46,   48,   45,   46,   47,
   33,    9,   48,   94,   91,   93,    9,   37,   34,   92,
   49,   34,   43,  140,   43,   46,   49,   45,  107,   47,
   35,   74,   48,   74,   79,   74,   34,  110,   74,   35,
  111,    9,   35,    2,    3,    4,   49,   72,   30,   99,
  100,   46,   74,   45,   77,   47,   28,   35,   48,   28,
   76,   85,  141,   80,   30,  142,   50,   29,  126,  127,
   29,   81,   49,   89,   28,   11,   11,   11,   11,   11,
   30,   11,    9,   30,   30,   29,  106,  101,   31,  102,
   30,   31,  104,   11,   11,   11,   11,  115,   30,  132,
  133,   17,   17,   17,   17,   17,   31,   17,  116,  117,
   30,   20,  136,   20,   20,   20,   74,  121,   74,   17,
   17,   22,   17,   22,   22,   22,  138,   14,   29,   20,
   20,   21,   20,   21,   21,   21,   30,  139,   23,   22,
   22,   23,   22,  147,   26,  148,   97,   26,   98,   21,
   21,   27,   21,  134,   27,  135,   23,   23,   24,   23,
   33,   24,   26,   26,   25,   26,   28,   25,   32,   27,
   27,   32,   27,    2,    3,    4,   24,   24,   27,   24,
  108,   31,   25,   25,   34,   25,   32,   46,  137,   45,
  118,   47,   16,    0,   48,    0,    0,   17,   38,   39,
   40,    0,   86,    2,    3,    4,   46,    0,    1,    2,
    3,    4,   41,   17,   42,   43,   44,   33,   38,   39,
   40,    0,    0,  103,   38,   39,   40,    0,    1,    2,
    3,    4,   41,  109,   42,   43,   44,    0,   41,   43,
   42,   43,   44,   34,   38,   39,   40,    0,    0,    0,
   74,   74,   74,    1,    2,    3,    4,    0,   41,    0,
   42,   43,   44,    0,   74,    0,   74,   74,   74,    0,
   38,   39,   40,    1,    2,    3,    4,    0,   28,   28,
   28,   28,    0,    0,   41,    0,   42,   43,   44,   29,
   29,   29,   29,    0,    0,   11,   11,   11,   11,   11,
   11,    0,   30,   30,   30,   30,    0,   46,    0,   45,
    0,   47,   31,   31,   48,    0,   63,    0,   73,    0,
    0,   17,   17,   17,   17,   17,   17,    0,   82,    0,
    0,   20,   20,   20,   20,   20,   20,  128,  129,  130,
  131,   22,   22,   22,   22,   22,   22,   95,   96,    0,
    0,   21,   21,   21,   21,   21,   21,   63,   23,   23,
   23,   23,   23,   23,   26,   26,   26,   26,   26,   26,
    0,   27,   27,   27,   27,   27,   27,    0,   24,   24,
   24,   24,   24,   24,   25,   25,   25,   25,   25,   25,
   83,   84,   32,   32,   46,   78,   45,   73,   47,   51,
   50,   48,   51,   50,    0,   12,   38,   39,   40,   46,
   90,   45,    0,   47,    0,   49,   48,   51,   50,   24,
    0,  105,    0,    0,    0,  112,  113,   24,    0,   24,
    0,    0,    0,  119,    0,  122,    0,   24,    0,    0,
    0,    0,    0,    0,    0,    0,  123,  124,  125,  125,
  125,  125,  125,  125,  125,  125,  125,  125,    0,  105,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   51,   50,    0,    0,    0,  145,    0,  146,  143,
  144,    0,    0,    0,    0,    0,    0,    0,  149,  150,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   38,   39,   40,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   38,   39,   40,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   38,   39,
   40,
};
static const YYINT yycheck[] = {                         38,
   40,   40,   40,   42,   59,   59,   45,   30,   46,   40,
   81,   42,   41,  123,   25,   44,   40,  123,   42,   38,
   59,   40,   33,   42,   40,   38,   45,   40,   59,   42,
   59,    0,   45,   43,   42,   45,    5,   41,   41,   47,
   59,   44,   40,  114,   42,   38,   59,   40,   71,   42,
  125,   38,   45,   40,   40,   42,   59,   41,   45,   41,
   44,   30,   44,  268,  269,  270,   59,   41,  123,  263,
  264,   38,   59,   40,   59,   42,   41,   59,   45,   44,
  125,   59,   41,   40,  123,   44,  125,   41,   93,   94,
   44,   40,   59,   61,   59,   41,   42,   43,   44,   45,
   41,   47,   71,   44,  123,   59,  125,  265,   41,  266,
  123,   44,  125,   59,   60,   61,   62,   59,   59,   99,
  100,   41,   42,   43,   44,   45,   59,   47,   41,  257,
  123,   41,  125,   43,   44,   45,  123,  257,  125,   59,
   60,   41,   62,   43,   44,   45,   41,  257,   59,   59,
   60,   41,   62,   43,   44,   45,  123,   41,   41,   59,
   60,   44,   62,  272,   41,   41,   60,   44,   62,   59,
   60,   41,   62,  101,   44,  102,   59,   60,   41,   62,
   23,   44,   59,   60,   41,   62,   19,   44,   41,   59,
   60,   44,   62,  268,  269,  270,   59,   60,   18,   62,
   71,   20,   59,   60,   24,   62,   59,   38,  111,   40,
   41,   42,    5,   -1,   45,   -1,   -1,  257,  257,  258,
  259,   -1,  260,  268,  269,  270,  257,   -1,  267,  268,
  269,  270,  271,  257,  273,  274,  275,  266,  257,  258,
  259,   -1,   -1,   63,  257,  258,  259,   -1,  267,  268,
  269,  270,  271,   73,  273,  274,  275,   -1,  271,  257,
  273,  274,  275,  266,  257,  258,  259,   -1,   -1,   -1,
  257,  258,  259,  267,  268,  269,  270,   -1,  271,   -1,
  273,  274,  275,   -1,  271,   -1,  273,  274,  275,   -1,
  257,  258,  259,  267,  268,  269,  270,   -1,  263,  264,
  265,  266,   -1,   -1,  271,   -1,  273,  274,  275,  263,
  264,  265,  266,   -1,   -1,  261,  262,  263,  264,  265,
  266,   -1,  263,  264,  265,  266,   -1,   38,   -1,   40,
   -1,   42,  265,  266,   45,   -1,   30,   -1,   32,   -1,
   -1,  261,  262,  263,  264,  265,  266,   -1,   59,   -1,
   -1,  261,  262,  263,  264,  265,  266,   95,   96,   97,
   98,  261,  262,  263,  264,  265,  266,  261,  262,   -1,
   -1,  261,  262,  263,  264,  265,  266,   71,  261,  262,
  263,  264,  265,  266,  261,  262,  263,  264,  265,  266,
   -1,  261,  262,  263,  264,  265,  266,   -1,  261,  262,
  263,  264,  265,  266,  261,  262,  263,  264,  265,  266,
   44,   45,  265,  266,   38,   40,   40,  111,   42,   41,
   41,   45,   44,   44,   -1,    1,  257,  258,  259,   38,
   55,   40,   -1,   42,   -1,   59,   45,   59,   59,   15,
   -1,   70,   -1,   -1,   -1,   79,   80,   23,   -1,   25,
   -1,   -1,   -1,   87,   -1,   89,   -1,   33,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   91,   92,   93,   94,
   95,   96,   97,   98,   99,  100,  101,  102,   -1,  108,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  123,  123,   -1,   -1,   -1,  140,   -1,  142,  138,
  139,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  147,  148,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  257,  258,  259,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,
  259,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 276
#define YYUNDFTOKEN 311
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"'&'",0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,
0,0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IDENTIFIER","CONSTANT","SIZEOF","PTR_OP","LE_OP",
"GE_OP","EQ_OP","NE_OP","AND_OP","OR_OP","EXTERN","INT","VOID","STRUCT","IF",
"ELSE","WHILE","FOR","RETURN","LOWER_THAN_ELSE",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"primary_expression : IDENTIFIER",
"primary_expression : CONSTANT",
"primary_expression : '(' expression ')'",
"postfix_expression : primary_expression",
"postfix_expression : postfix_expression '(' ')'",
"postfix_expression : postfix_expression '(' argument_expression_list ')'",
"postfix_expression : postfix_expression '.' IDENTIFIER",
"postfix_expression : postfix_expression PTR_OP IDENTIFIER",
"argument_expression_list : expression",
"argument_expression_list : argument_expression_list ',' expression",
"unary_expression : postfix_expression",
"unary_expression : unary_operator unary_expression",
"unary_expression : SIZEOF unary_expression",
"unary_operator : '&'",
"unary_operator : '*'",
"unary_operator : '-'",
"multiplicative_expression : unary_expression",
"multiplicative_expression : multiplicative_expression '*' unary_expression",
"multiplicative_expression : multiplicative_expression '/' unary_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression '+' multiplicative_expression",
"additive_expression : additive_expression '-' multiplicative_expression",
"relational_expression : additive_expression",
"relational_expression : relational_expression '<' additive_expression",
"relational_expression : relational_expression '>' additive_expression",
"relational_expression : relational_expression LE_OP additive_expression",
"relational_expression : relational_expression GE_OP additive_expression",
"equality_expression : relational_expression",
"equality_expression : equality_expression EQ_OP relational_expression",
"equality_expression : equality_expression NE_OP relational_expression",
"logical_and_expression : equality_expression",
"logical_and_expression : logical_and_expression AND_OP equality_expression",
"logical_or_expression : logical_and_expression",
"logical_or_expression : logical_or_expression OR_OP logical_and_expression",
"expression : logical_or_expression",
"expression : unary_expression '=' expression",
"declaration : declaration_specifiers declarator ';'",
"declaration : struct_specifier ';'",
"declaration_specifiers : EXTERN type_specifier",
"declaration_specifiers : type_specifier",
"type_specifier : VOID",
"type_specifier : INT",
"type_specifier : struct_specifier",
"struct_specifier : STRUCT IDENTIFIER '{' struct_declaration_list '}'",
"struct_specifier : STRUCT '{' struct_declaration_list '}'",
"struct_specifier : STRUCT IDENTIFIER",
"struct_declaration_list : struct_declaration",
"struct_declaration_list : struct_declaration_list struct_declaration",
"struct_declaration : type_specifier declarator ';'",
"declarator : '*' direct_declarator",
"declarator : direct_declarator",
"direct_declarator : IDENTIFIER",
"direct_declarator : '(' declarator ')'",
"direct_declarator : direct_declarator '(' parameter_list ')'",
"direct_declarator : direct_declarator '(' ')'",
"parameter_list : parameter_declaration",
"parameter_list : parameter_list ',' parameter_declaration",
"parameter_declaration : declaration_specifiers declarator",
"statement : compound_statement",
"statement : expression_statement",
"statement : selection_statement",
"statement : iteration_statement",
"statement : jump_statement",
"compound_statement : '{' '}'",
"compound_statement : '{' statement_list '}'",
"compound_statement : '{' declaration_list '}'",
"compound_statement : '{' declaration_list statement_list '}'",
"declaration_list : declaration",
"declaration_list : declaration_list declaration",
"statement_list : statement",
"statement_list : statement_list statement",
"expression_statement : ';'",
"expression_statement : expression ';'",
"selection_statement : IF '(' expression ')' statement",
"selection_statement : IF '(' expression ')' statement ELSE statement",
"iteration_statement : WHILE '(' expression ')' statement",
"iteration_statement : FOR '(' expression_statement expression_statement expression ')' statement",
"jump_statement : RETURN ';'",
"jump_statement : RETURN expression ';'",
"program : external_declaration",
"program : program external_declaration",
"external_declaration : function_definition",
"external_declaration : declaration",
"function_definition : declaration_specifiers declarator compound_statement",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 212 "structfe.y"

// rajouter la redefinition de yyerror et int main
int main(){
        initialize();
        yyparse();
}
#line 471 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 1:
#line 29 "structfe.y"
	{ }
break;
case 2:
#line 30 "structfe.y"
	{ }
break;
case 21:
#line 67 "structfe.y"
	{}
break;
case 36:
#line 97 "structfe.y"
	{ }
break;
case 37:
#line 101 "structfe.y"
	{}
break;
case 40:
#line 107 "structfe.y"
	{}
break;
case 41:
#line 111 "structfe.y"
	{yyval.nnode = create_node("_VOID",_VOID);}
break;
case 42:
#line 112 "structfe.y"
	{yyval.nnode = create_node("_INT", _INT) ;}
break;
case 43:
#line 113 "structfe.y"
	{}
break;
case 84:
#line 208 "structfe.y"
	{ }
break;
#line 710 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
