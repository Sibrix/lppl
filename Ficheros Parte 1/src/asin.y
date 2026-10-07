/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          jbenedi@dsic.upv.es>     V. 24  **/
/*****************************************************************************/
%{
#include "header.h"
#include <stdio.h>
%}

%token PARA_ PARC_ MAS_ MENOS_ POR_ DIV_
%token CTE_ ID_ TRUE_ FALSE_ BOOL_ IF_ ELSE_
%token FOR_ SWITCH_ LESS_ EQUAL_ GREATER_ READ_ 
%token PRINT_ RETURN_ COMMENT_ DELIMITADOR_ INT_
%%
programa        : listDecla ;

listDecla       : decla 
                | listDecla decla 
                ;

decla           : declaVar 
                | declaFunc 
                ;

declaVar        : tipoSimp ID_ ';' 
                | tipoSimp ID_ '=' constante ';' 
                | tipoSimp ID_ '[' CTE_ ']' ';' 
                ;

constante       : CTE_ 
                | TRUE_ 
                | FALSE_ 
                ;

tipoSimp        : INT_
                | BOOL_ 
                ;

declaFunc       : tipoSimp ID_ PARA_ paramForm PARC_ bloque ;

paramForm       : /* vacío */ 
                | listParamForm 
                ;

listParamForm   : tipoSimp ID_ 
                | tipoSimp ID_ ',' listParamForm 
                ;

bloque          : '{' declaVarLocal listInst RETURN_ expre ';' '}' ;

declaVarLocal   : /* vacío */ 
                | declaVarLocal declaVar 
                ;

listInst        : /* vacío */ 
                | listInst inst 
                ;

inst            : '{' listInst '}' 
                | instExpre 
                | instEntSal 
                | instSelec 
                | instIter 
                | instSwitch 
                ;

instSwitch      : SWITCH_ ID_ '{' Less Equal Greater '}' ;

Less            : LESS_ inst ;

Equal           : EQUAL_ inst ;

Greater         : GREATER_ inst ;

instExpre       : expre ';' 
                | ';' 
                ;

instEntSal      : READ_ PARA_ ID_ PARC_ ';' 
                | PRINT_ PARA_ expre PARC_ ';' 
                ;

instSelec       : IF_ PARA_ expre PARC_ inst ELSE_ inst ;

instIter        : FOR_ PARA_ expreOP ';' expre ';' expreOP PARC_ inst ;

expreOP         : /* vacío */ 
                | expre 
                ;

expre           : expreLogic 
                | ID_ '=' expre 
                | ID_ '[' expre ']' '=' expre 
                ;

expreLogic      : expreIgual 
                | expreLogic opLogic expreIgual 
                ;

expreIgual      : expreRel 
                | expreIgual opIgual expreRel 
                ;

expreRel        : expreAd 
                | expreRel opRel expreAd 
                ;

expreAd         : expreMul 
                | expreAd opAd expreMul 
                ;

expreMul        : expreUna 
                | expreMul opMul expreUna 
                ;

expreUna        : expreSufi 
                | opUna expreUna 
                ;

expreSufi       : constante 
                | PARA_ expre PARC_ 
                | ID_ 
                | ID_ '[' expre ']' 
                | ID_ PARA_ paramAct PARC_ 
                ;

paramAct        : /* vacío */ 
                | listParamAct 
                ;

listParamAct    : expre 
                | expre ',' listParamAct 
                ;

opLogic         : '&''&'
                | '|''|'
                ;

opIgual         : '=''='
                | '!''='
                ;

opRel           : '>' 
                | '<' 
                | '<''='
                | '>''='
                ;

opAd            : MAS_ 
                | MENOS_ 
                ;

opMul           : POR_ 
                | DIV_ 
                ;

opUna           : MAS_ 
                | MENOS_ 
                | '!' 
                ;
%%
