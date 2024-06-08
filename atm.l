%{
#include <stdio.h>
%}

%%
"1234567890123456""0101"   { printf("Card authorized: Allowed\n"); return 1; }
"9876543210123456""1010"   { printf("Card authorized: Allowed\n"); return 1; }
"1111222233334444""1100"   { printf("Card authorized: Allowed\n"); return 1; }
"4444333322221111""0011"   { printf("Card authorized: Allowed\n"); return 1; }
"5555666677778888""0110"   { printf("Card authorized: Allowed\n"); return 1; }
.                           { printf("Card authorization: Denied\n"); return 0; }
%%

int yywrap() {
    return 1; // Indicate end of input
}

int main(void) {
    yylex();
    return 0;
}