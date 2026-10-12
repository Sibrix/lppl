/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          <jbenedi@dsic.upv.es>   V.24    **/
/*****************************************************************************/
%{
#include "header.h"
#include "asin.h"

#define  retornar(x) {if (verbosidad) ECHO ; return (x) ; }
%}
/*----------------------------------------------------------------------
  Dado que las funciones "input()" y "unput(c)" son costosas y no las
  utilizaremos, evitaremos que se generen automaticamente sus rutinas
  correspondientes desactivandolas mediante las siguientes opciones:
----------------------------------------------------------------------*/
%option noinput
%option nounput
/*----------------------------------------------------------------------
  Para mantener el numero de linea actual en la variable global yylineno
----------------------------------------------------------------------*/
%option yylineno

delimitador     [ \t\n]+
digito          [0-9]
entero          {digito}+
letra           [a-zA-Z]
id              {letra}({letra}|{entero}|"-")*
float           ({entero}+[.,]{entero}*)|({entero}*[.,]{entero}+)
%%

{delimitador}   {if (verbosidad) ECHO ; }
"int"           { retornar (INT_); }
"true"          { retornar (TRUE_) ; }
"false"         { retornar (FALSE_) ; }
"bool"          { retornar (BOOL_) ; }
"if"            { retornar (IF_) ; }
"else"          { retornar (ELSE_) ; }
"for"           { retornar (FOR_); }
"switch"        { retornar (SWITCH_) ; }
"less"          { retornar (LESS_) ; }
"equal"         { retornar (EQUAL_) ; }
"greater"       { retornar (GREATER_) ; }
"read"          { retornar (READ_) ; }
"print"         { retornar (PRINT_) ; }
"return"        { retornar (RETURN_) ; }
"+"             { retornar (MAS_) ;}
"-"             { retornar (MENOS_) ; }
"*"             { retornar (POR_) ; }
"/"             { retornar (DIV_) ; }
"("             { retornar (PARA_) ; }
")"             { retornar (PARC_) ; }
"{"             { retornar('{') ; }
"}"             { retornar('}') ; }
";"             { retornar(';') ; }
"["             { retornar('[') ; }
"]"             { retornar(']') ; }
","             { retornar(',') ; }
"<"             { retornar(LESSTH_) ;}
">"             { retornar(GREATERTH_) ;}
"="             { retornar('=') ; }
"<="            { retornar(LESSEQTH_) ;}
">="            { retornar(GREATEREQTH_) ;}
"!"             { retornar('!') ;}
"&&"            { retornar(AND_) ;}
"||"            { retornar(OR_) ;}
"=="            { retornar(EQ_) ;}
"!="            { retornar(NEQ_) ;}
{entero}        { retornar (CTE_) ; }
{float}         { retornar (CTE_) ; }
{id}            { retornar(ID_) ; }

"//".*            { if (verbosidad) ECHO; }

.				{ yyerror("Caracter desconocido") ;}
%%
