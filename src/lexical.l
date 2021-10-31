%option noyywrap noinput nounput yylineno
%{
   // Igor Bispo de Moraes - 170050432
   // Tradutores 2021/1
   
   size_t n_line = 1;
   size_t n_column = 1;

   #include "syntax_tree.h"
   #include "symbol_table.h"

   syntax_tree* root;
	symbol_table* s_table;
	scope_t* scope;
	uint16_t last_f;
	bool first_pass_sematic_error_found;
   uint16_t args_count;
   char** args_last_f;

   #include "parser.h"
%}

OP [+\-*\/<>=!(){};:?%]|"+="|"-="|"=="|"*="|"!="|">>"|"<<"|"<="|"||"|"&&"
ID (_|[A-Za-z])([A-Za-z]|[0-9]|_)*
NL \n
NUM [0-9]+(\.[0-9]+)?(E[+-]?[0-9]+)?
STR ["](([\\]["])|([^"]))*["]
COM \/\/.*
WS [ \t\r]
DEFAULT .
WRITE write
WRITE_LN writeln
READ read

%%

int|float {strcpy(yylval.string, yytext);yylloc.first_column=n_column;n_column += yyleng;return TYPE;}
list {yylloc.first_column=n_column;n_column += yyleng;return LIST;}
[(] {yylloc.first_column=n_column;n_column += yyleng;return LP;}
[)] {yylloc.first_column=n_column;n_column += yyleng;return RP;}
[,] {yylloc.first_column=n_column;n_column += yyleng;return COM;}
[;] {yylloc.first_column=n_column;n_column += yyleng;return SEMI;}
[}] {yylloc.first_column=n_column;n_column += yyleng;return RCB;}
[{] {yylloc.first_column=n_column;n_column += yyleng;return LCB;}   
[:] {yylloc.first_column=n_column;n_column += yyleng;return TWD;}
[+] {yylloc.first_column=n_column;n_column += yyleng;return PLUS;}
[-] {yylloc.first_column=n_column;n_column += yyleng;return MIN;}
[*] {yylloc.first_column=n_column;n_column += yyleng;return MUL;}
[<] {yylloc.first_column=n_column;n_column += yyleng;return LT;}
[>] {yylloc.first_column=n_column;n_column += yyleng;return GT;}
[<][=] {yylloc.first_column=n_column;n_column += yyleng;return LEQ;}
[>][=] {yylloc.first_column=n_column;n_column += yyleng;return GEQ;}
[!][=] {yylloc.first_column=n_column;n_column += yyleng;return DIF;}
[>][>] {yylloc.first_column=n_column;n_column += yyleng;return MAP;}
[<][<] {yylloc.first_column=n_column;n_column += yyleng;return FIL;}
[\/] {yylloc.first_column=n_column;n_column += yyleng;return DIV;}
[%] {yylloc.first_column=n_column;n_column += yyleng;return TR;}
[!] {yylloc.first_column=n_column;n_column += yyleng;return TNR;}
[?] {yylloc.first_column=n_column;n_column += yyleng;return HD;}
[=] {yylloc.first_column=n_column;n_column += yyleng;return ATT;}
[=][=] {yylloc.first_column=n_column;n_column += yyleng;return COMP_EQ;}
[&][&] {yylloc.first_column=n_column;n_column += yyleng;return AND;}
[|][|] {yylloc.first_column=n_column;n_column += yyleng;return OR;}

if {yylloc.first_column=n_column;n_column += yyleng;return IF;}
else {yylloc.first_column=n_column;n_column += yyleng;return ELSE;}
for {yylloc.first_column=n_column;n_column += yyleng;return FOR;}
return {yylloc.first_column=n_column;n_column += yyleng;return RET;}
NIL {yylloc.first_column=n_column;n_column += yyleng;return NIL;}

{WS} {
   yylloc.first_column=n_column;
   n_column += yyleng;
}

{NL} {
   n_line += 1;
   n_column = 1;
   
   yylloc.first_line=n_line;
   yylloc.first_column=n_column;
}

{WRITE} {
   yylloc.first_column=n_column;
   n_column += yyleng;
   return WRITE;
}

{WRITE_LN} {
   yylloc.first_column=n_column;
   n_column += yyleng;
   return WRITE_LN;
}

{READ} {
   yylloc.first_column=n_column;
   n_column += yyleng;
   return READ;
}

{ID} {
   //printf("Identifier: \"%s\" at Ln %d, Col %d\n", yytext, yylineno , yy_bs_column );
   yylloc.first_column=n_column;

   n_column += yyleng;
   strcpy(yylval.string, yytext);
   return IDENTIFIER;
}

{OP} {
//   printf("Operator: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   yylloc.first_column=n_column;

   n_column += yyleng;
}

{NUM} {
//  printf("Numerical constant: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   yylloc.first_column=n_column;

   n_column += yyleng;
   yylval.num = strtof(yytext, NULL);
   return NUM_CONST;
}

{STR} {
//   printf("String literal: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   yylloc.first_column=n_column;

   n_column += yyleng;
   strcpy(yylval.string, yytext);
   return STR;
}

{COM} {
//   printf("Comment: \"%s\" at Ln %lu, Col %lu\n", yytext, n_line, n_column);
   yylloc.first_column=n_column;

   n_column += yyleng;
}

{DEFAULT} {
   printf("\x1b[31mInvalid token: \"%s\" at Ln %lu, Col %lu\x1b[0m\n", yytext, n_line, n_column);
   yylloc.first_column=n_column;

   n_column += yyleng;

}

%%
