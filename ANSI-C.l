D                       [0-9]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+
FS                      (f|F|l|L)
IS                      (u|U|l|L)*

%{
#include <stdio.h>
#include "y.tab.h"


/* Ne gère pas les commentaires. A rajouter */
/* Supprimer les lignes dont vous n'avez pas besoin. */

%}

%%
"auto"                  { /* A completer */ }
"break"                 { /* A completer */ }
"case"                  { /* A completer */ }
"char"                  { /* A completer */ }
"const"                 { /* A completer */ }
"continue"              { /* A completer */ }
"default"               { /* A completer */ }
"do"                    { /* A completer */ }
"double"                { /* A completer */ }
"else"                  { /* A completer */ }
"enum"                  { /* A completer */ }
"extern"                { /* A completer */ }
"float"                 { /* A completer */ }
"for"                   { /* A completer */ }
"goto"                  { /* A completer */ }
"if"                    { /* A completer */ }
"int"                   { /* A completer */ }
"long"                  { /* A completer */ }
"register"              { /* A completer */ }
"return"                { /* A completer */ }
"short"                 { /* A completer */ }
"signed"                { /* A completer */ }
"sizeof"                { /* A completer */ }
"static"                { /* A completer */ }
"struct"                { /* A completer */ }
"switch"                { /* A completer */ }
"typedef"               { /* A completer */ }
"union"                 { /* A completer */ }
"unsigned"              { /* A completer */ }
"void"                  { /* A completer */ }
"volatile"              { /* A completer */ }
"while"                 { /* A completer */ }

{L}({L}|{D})*           { /* A completer */ }

0[xX]{H}+{IS}?          { /* A completer */ }
0{D}+{IS}?              { /* A completer */ }
{D}+{IS}?               { /* A completer */ }
L?'(\\.|[^\\'])+'       { /* A completer */ }

{D}+{E}{FS}?            { /* A completer */ }
{D}*"."{D}+({E})?{FS}?  { /* A completer */ }
{D}+"."{D}*({E})?{FS}?  { /* A completer */ }

L?\"(\\.|[^\\"])*\"     { /* A completer */ }

"..."                   { /* A completer */ }
">>="                   { /* A completer */ }
"<<="                   { /* A completer */ }
"+="                    { /* A completer */ }
"-="                    { /* A completer */ }
"*="                    { /* A completer */ }
"/="                    { /* A completer */ }
"%="                    { /* A completer */ }
"&="                    { /* A completer */ }
"^="                    { /* A completer */ }
"|="                    { /* A completer */ }
">>"                    { /* A completer */ }
"<<"                    { /* A completer */ }
"++"                    { /* A completer */ }
"--"                    { /* A completer */ }
"->"                    { /* A completer */ }
"&&"                    { /* A completer */ }
"||"                    { /* A completer */ }
"<="                    { /* A completer */ }
">="                    { /* A completer */ }
"=="                    { /* A completer */ }
"!="                    { /* A completer */ }

[ \t\v\n\f]             { /* A completer */ }
.                       { return yytext[0]; }
%%

