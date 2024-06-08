%{
#include <stdio.h>
%}

%%
"1234567890123456""0101"   { printf("Card authorized: Allowed\n"); return 1; }
"9876543210123456""1010"   { printf("Card authorized: Allowed\n"); return 1; }
"1111222233334444""1100"   { printf("Card authorized: Allowed\n"); return 1; }
"4444333322221111""0011"   { printf("Card authorized: Allowed\n"); return 1; }
"5555666677778888""0110"   { printf("Card authorized: Allowed\n"); return 1; }
"1111222233334444""2222"   { printf("Card authorized: Allowed\n"); return 1; }
"5555666677778888""3333"   { printf("Card authorized: Allowed\n"); return 1; }
"1234567890123456""4444"   { printf("Card authorized: Allowed\n"); return 1; }
"9876543210123456""5555"   { printf("Card authorized: Allowed\n"); return 1; }
"4444333322221111""6666"   { printf("Card authorized: Allowed\n"); return 1; }
"5555666677778888""7777"   { printf("Card authorized: Allowed\n"); return 1; }
"1111222233334444""8888"   { printf("Card authorized: Allowed\n"); return 1; }
"1234567890123456""9999"   { printf("Card authorized: Allowed\n"); return 1; }
"9876543210123456""1212"   { printf("Card authorized: Allowed\n"); return 1; }
"4444333322221111""2323"   { printf("Card authorized: Allowed\n"); return 1; }
"5555666677778888""3434"   { printf("Card authorized: Allowed\n"); return 1; }
"1111222233334444""4545"   { printf("Card authorized: Allowed\n"); return 1; }
"1234567890123456""5656"   { printf("Card authorized: Allowed\n"); return 1; }
"9876543210123456""6767"   { printf("Card authorized: Allowed\n"); return 1; }
"4444333322221111""7878"   { printf("Card authorized: Allowed\n"); return 1; }
.                           { printf("Card authorization: Denied\n"); return 0; }
%%

int yywrap() {
    return 1;
}

int main(void) {
    yylex();
    return 0;
}