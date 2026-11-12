/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          jbenedi@dsic.upv.es>     V. 24  **/
/*****************************************************************************/
%{
#include "header.h"
#include "asin.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libtds.h"
%}

%union {
  int entero;
  char *cadena;
  LISTA lista;
}


%token PARA_ PARC_ MAS_ MENOS_ POR_ DIV_
%token TRUE_ FALSE_ BOOL_ IF_ ELSE_
%token FOR_ SWITCH_ LESS_ EQUAL_ GREATER_ READ_ 
%token PRINT_ RETURN_ INT_
%token AND_ OR_ EQ_ NEQ_ LESSEQTH_ LESSTH_ 
%token GREATERTH_ GREATEREQTH_ LLAVEA_ LLAVEC_
%token EXCL_ IGUAL_ COMA_ PUNTOYCOMA_ CORCHA_ CORCHC_

%token<entero> CTE_
%token<cadena> ID_

%type<entero> listDecla decla declaFunc tipoSimp constante
%type<lista>  paramForm listParamForm

%%
programa        :   
                    {
                        niv = 0;
                        dvar = 0;
                        cargaContexto(niv);
                    }
                  listDecla ;

listDecla       : decla 
                    { $$ = $1;}
                | listDecla decla 
                    { $$ = $1 + $2;}
                ;

decla           : declaVar 
                    { $$ = 0; }
                | declaFunc 
                    { $$ = $1; }
                ;

declaVar        : tipoSimp ID_ PUNTOYCOMA_
                    {
                        if (!insTdS($2, VARIABLE, $1, niv, dvar, -1))
                            yyerror("Variable ya declarada");
                    }
                | tipoSimp ID_ IGUAL_ constante PUNTOYCOMA_
                    {
                        if ($1 != $4)
                            yyerror("Error de tipos en la inicializacion de la variable");
                        else if (!insTdS($2, VARIABLE, $1, niv, dvar, -1))
                            yyerror("Variable ya declarada");
                    }
                | tipoSimp ID_ CORCHA_ CTE_ CORCHC_ PUNTOYCOMA_
                    {
                        int talla = $4;
                        if (talla <= 0) {
                            yyerror("Talla de array no valida");
                            talla = 1;
                        }
                        int refe = insTdA($1, talla);
                        if (!insTdS($2, VARIABLE, T_ARRAY, niv, dvar, refe))
                            yyerror("Variable ya declarada");
                    }
                ;


constante       : CTE_ 
                    { $$ = T_ENTERO; }
                | TRUE_ 
                    { $$ = T_LOGICO; }
                | FALSE_ 
                    { $$ = T_LOGICO; }
                ;

tipoSimp        : INT_
                    { $$ = T_ENTERO; }
                | BOOL_ 
                    { $$ = T_LOGICO; }
                ;

declaFunc       : tipoSimp ID_
                    {
                        niv = 1;
                        cargaContexto(niv);
                        dvar = 0;
                    }
                  PARA_ paramForm PARC_
                    {
                        if (!insTdS($2, FUNCION, $1, 0, -1, $5.ref))
                            yyerror("Funcion ya declarada");
                    }
                  bloque
                    {
                        if (verTdS) mostrarTdS();
                        descargaContexto(niv);
                        niv = 0;
                        dvar = 0;
                        $$ = (strcmp($2, "main") == 0);
                    }
                ;
                    

paramForm       : /* vacío */
                    { $$.ref = insTdD(-1, T_VACIO); $$.talla = 0;}
                | listParamForm
                    {$$ = $1;}
                ;

listParamForm   : tipoSimp ID_  
                    {
                        $$.ref = insTdD(-1, $1);
                        $$.talla = TALLA_TIPO_SIMPLE;
                        if (!insTdS($2, PARAMETRO, $1, niv, -(TALLA_SEGENLACES + $$.talla), -1)) { yyerror("Identificador de parametro repetido."); }
                    }
                | tipoSimp ID_ COMA_ listParamForm
                    {
                        $$.ref   = insTdD($4.ref, $1);
                        $$.talla = $4.talla + TALLA_TIPO_SIMPLE;
                        if (!insTdS($2, PARAMETRO, $1, niv, -(TALLA_SEGENLACES + $$.talla), -1))
                            yyerror("Identificador de parametro repetido");
                    }

bloque          : LLAVEA_ declaVarLocal listInst RETURN_ expre PUNTOYCOMA_ LLAVEC_ ;

declaVarLocal   : /* vacío */ 
                | declaVarLocal declaVar 
                ;

listInst        : /* vacío */ 
                | listInst inst 
                ;

inst            : LLAVEA_ listInst LLAVEC_ 
                | instExpre 
                | instEntSal 
                | instSelec 
                | instIter 
                | instSwitch 
                ;

instSwitch      : SWITCH_ ID_ LLAVEA_ listInst LLAVEC_ ;

Less            : LESS_ inst ;

Equal           : EQUAL_ inst ;

Greater         : GREATER_ inst ;

instExpre       : expre PUNTOYCOMA_
                | PUNTOYCOMA_ 
                ;

instEntSal      : READ_ PARA_ ID_ PARC_ PUNTOYCOMA_ 
                | PRINT_ PARA_ expre PARC_ PUNTOYCOMA_
                ;

instSelec       : IF_ PARA_ expre PARC_ inst ELSE_ inst ;

instIter        : FOR_ PARA_ expreOP PUNTOYCOMA_ expre PUNTOYCOMA_ expreOP PARC_ inst ;

expreOP         : /* vacío */ 
                | expre 
                ;

expre           : expreLogic 
                | ID_ IGUAL_ expre 
                | ID_ CORCHA_ expre CORCHC_ IGUAL_ expre 
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
                | ID_ CORCHA_ expre CORCHC_ 
                | ID_ PARA_ paramAct PARC_ 
                ;

paramAct        : /* vacío */ 
                | listParamAct 
                ;

listParamAct    : expre 
                | expre COMA_ listParamAct 
                ;

opLogic         : AND_
                | OR_
                ;

opIgual         : EQ_
                | NEQ_
                ;

opRel           : LESSTH_ 
                | GREATERTH_
                | LESSEQTH_
                | GREATEREQTH_
                ;

opAd            : MAS_ 
                | MENOS_ 
                ;

opMul           : POR_ 
                | DIV_ 
                ;

opUna           : MAS_ 
                | MENOS_ 
                | EXCL_ 
                ;
%%
