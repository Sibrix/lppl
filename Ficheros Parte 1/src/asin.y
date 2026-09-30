/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          jbenedi@dsic.upv.es>     V. 24  **/
/*****************************************************************************/
%{
#include "header.h"
%}

%token PARA_ PARC_ MAS_ MENOS_ POR_ DIV_
%token CTE_ 

%%

expMat : exp
       ;
exp    : exp MAS_   term
       | exp MENOS_ term
       | term         
       ;
term   : term POR_ fac
       | term DIV_ fac   
       | fac             
       ;
fac    : PARA_ exp PARC_ 
       | CTE_            
       ;
%%
