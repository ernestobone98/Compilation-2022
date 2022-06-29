%option noyywrap

D                       [0-9]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+

%{
#include <stdio.h>
#include "y.tab.h"
#include "table-symboles.h"

%}

%%

"else"                  { printf("ELSE"); return "ELSE"; }
"extern"                { printf("EXTERN"); return "EXTERN"; }
"for"                   { printf("FOR"); return "FOR"; }
"if"                    { printf("IF"); return "IF"; }
"int"                   { printf("INT"); return "INT"; }
"return"                { printf("RETURN"); return "RETURN"; }
"sizeof"                { printf("SIZEOF"); return "SIZEOF"; }
"struct"                { printf("STRUCT"); return "STRUCT"; }
"typedef"               { printf("TYPEDEF"); return "TYPEDEF"; }
"void"                  { printf("VOID"); return "VOID"; }
"while"                 { printf("WHILE"); return "WHILE"; }

{L}({L}|{D})*           { printf("IDENTIFIER"); return "IDENTIFIER"; }
{D}+                    { printf("CONSTANT"); return "CONSTANT"; }

"("                     { printf("("); return "("; }
")"                     { printf(")"); return ")"; }
"{"                     { printf("{"); return "{"; }
"}"                     { printf("}"); return "}"; }
"+"                     { printf("+"); return "+"; }
"-"                     { printf("-"); return "-"; }
"*"                     { printf("*"); return "*"; }
"/"                     { printf("/"); return "/"; }
"="                     { printf("="); return "="; }
"->"                    { printf("->"); return "->"; }
"&&"                    { printf("AND_OP"); return "AND_OP"; }
"||"                    { printf("OR_OP"); return "OR_OP"; }
"<="                    { printf("<="); return "<="; }
">="                    { printf(">="); return ">="; }
"=="                    { printf("=="); return "=="; }
"!="                    { printf("!="); return "!="; }

[ \t\v\n\f\r]           { printf(""); return "%s", yytext; }
.                       { }
%%

int main(){
    while(yyparse());
    return 0;
}
