%option noyywrap

D                       [0-9]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+

%{
#include <stdio.h>
//#include "y.tab.h"


/* Ne g�re pas les commentaires. A rajouter */
/* Supprimer les lignes dont vous n'avez pas besoin. */

%}

%%

"else"                  { printf("ELSE") ; }
"extern"                { printf("EXTERN"); }
"for"                   { printf("FOR"); }
"if"                    { printf("IF"); }
"int"                   { printf("INT"); }
"return"                { printf("RETURN"); }
"sizeof"                { printf("SIZEOF"); }
"struct"                { printf("STRUCT"); }
"typedef"               { printf("TYPEDEF"); }
"void"                  { printf("VOID"); }
"while"                 { printf("WHILE"); }

{L}({L}|{D})*           { printf("IDENTIFIER"); }


"+"                     { printf("+"); }
"-"                     { printf("-"); }
"*"                     { printf("*"); }
"/"                     { printf("/"); }
"->"                    { printf("->"); }
"&&"                    { printf("&&"); }
"||"                    { printf("||"); }
"<="                    { printf("<="); }
">="                    { printf(">="); }
"=="                    { printf("=="); }
"!="                    { printf("!="); }

[ \t\v\n\f\r]           { printf("%s", yytext); }
.                       {  }
%%

int main(){
    yylex();
    return 0;
}
