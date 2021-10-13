%option noyywrap noinput nounput
%{
   // Igor Bispo de Moraes - 170050432
   // Tradutores 2021/1
   
   size_t n_line = 1;
   size_t n_column = 1;

   #include "parser.h"
%}

KEY_W int|float|list|if|else|exists|return|for
OP [+\-*\/<>=!(){};:?%]|"+="|"-="|"=="|"*="|"!="|">>"|"<<"|"<="|"||"|"&&"
ID (_|[A-Za-z])([A-Za-z]|[0-9]|_)*
NL \n
NUM [-]?[0-9]+(\.[0-9]+)?(E[+-]?[0-9]+)?
STR ["](([\\]["])|([^"]))*["]
CHR ('(([\\]['])|([^']))+')
COM \/\/.*
WS [ \t\r]
DEFAULT .

%%

int|float {strcpy(yylval.string, yytext);n_column += yyleng;return TYPE;}
list {n_column += yyleng;return LIST;}
[(] {n_column += yyleng;return LP;}
[)] {n_column += yyleng;return RP;}
[,] {n_column += yyleng;return COM;}
[;] {n_column += yyleng;return SEMI;}
[}] {n_column += yyleng;return RCB;}
[{] {n_column += yyleng;return LCB;}   
[:] {n_column += yyleng;return TWD;}
[+] {n_column += yyleng;return PLUS;}
[-] {n_column += yyleng;return MIN;}
[*] {n_column += yyleng;return MUL;}
[<] {n_column += yyleng;return LT;}
[>] {n_column += yyleng;return GT;}
[<][=] {n_column += yyleng;return LEQ;}
[>][=] {n_column += yyleng;return GEQ;}
[!][=] {n_column += yyleng;return DIF;}
[>][>] {n_column += yyleng;return MAP;}
[<][<] {n_column += yyleng;return FIL;}
[\/] {n_column += yyleng;return DIV;}
[%] {n_column += yyleng;return TR;}
[!] {n_column += yyleng;return TNR;}
[?] {n_column += yyleng;return HD;}
[=] {n_column += yyleng; return ATT;}
[=][=] {n_column += yyleng;return COMP_EQ;}
[&][&] {n_column += yyleng;return AND;}
[|][|] {n_column += yyleng;return OR;}

if {n_column += yyleng;return IF;}
else {n_column += yyleng;return ELSE;}
for {n_column += yyleng;return FOR;}
return {n_column += yyleng;return RET;}
NIL {n_column += yyleng;return NIL;}

{KEY_W} {
//   printf("Keyword: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   n_column += yyleng;
}

{ID} {
//   printf("Identifier: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   n_column += yyleng;
   strcpy(yylval.string, yytext);
   return IDENTIFIER;
}

{OP} {
//   printf("Operator: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   n_column += yyleng;
}

{NUM} {
//  printf("Numerical constant: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   n_column += yyleng;
   yylval.num = strtol(yytext, NULL, 0);
   return NUM_CONST;
}

{STR} {
//   printf("String literal: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   n_column += yyleng;
}

{CHR} {
//   printf("Char literal: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   n_column += yyleng;
}

{COM} {
//   printf("Comment: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   n_column += yyleng;
}

{WS} {
   n_column += yyleng;
}

{NL} {
   n_line += 1;
   n_column = 1;
}

{DEFAULT} {
   printf("\x1b[31mInvalid token: \"%s\" at Ln %lu, Col %lu\x1b[0m\n", yytext, n_line, n_column);
   n_column += yyleng;

}

%%
