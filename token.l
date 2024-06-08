%{
#include <stdio.h>
%}
%%
if     { printf("Token: IF\n"); }
else   { printf("Token: ELSE\n"); }
while  { printf("Token: WHILE\n"); }


[a-zA-Z_][a-zA-Z0-9_]*      { printf("Token: IDENTIFIER - %s\n", yytext); }
[0-9]+                      { printf("Token: INTEGER - %s\n", yytext); }
[+-/*]                      { printf("Token: OPERATOR - %s\n", yytext); }
[=<>]=?                     { printf("Token: COMPARISON OPERATOR - %s\n", yytext); }
[ \t\n] ;                   /* Skip whitespace characters */
.                           { printf("Unknown Token: %s\n", yytext); }
%%
int main() {
 printf("Enter a simple program:\n");
 yylex();
 return 0;
}
int yywrap() {
 return 1;
} 