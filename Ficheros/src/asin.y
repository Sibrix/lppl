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

%type<entero> listDecla decla declaFunc tipoSimp constante opUna listParamAct paramAct
%type<entero> expreSufi expreUna expreMul expreAd expreRel expreIgual expreLogic expre
%type<entero> expreOP instIter instSelec instEntSal bloque
%type<lista>  paramForm listParamForm

%%
programa        :   
                    {
                        niv = 0;
                        dvar = 0;
                        cargaContexto(niv);
                    }
                  listDecla 
                    {
                        if ($2 == 0)
                            yyerror("El programa no tiene funcion main");
                        else if ($2 > 1)
                            yyerror("El programa tiene mas de una funcion main");
                    }
                ;

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
                        else dvar += TALLA_TIPO_SIMPLE;
                    }
                | tipoSimp ID_ IGUAL_ constante PUNTOYCOMA_
                    {
                        if ($1 != $4)
                            yyerror("Error de tipos en la inicializacion de la variable");
                        if (!insTdS($2, VARIABLE, $1, niv, dvar, -1))
                            yyerror("Variable ya declarada");
                        else dvar += TALLA_TIPO_SIMPLE;
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
                        else dvar += talla * TALLA_TIPO_SIMPLE;
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
                        $<entero>$ = insTdS($2, FUNCION, $1, 0, -1, $5.ref);
                        if (!$<entero>$)
                            yyerror("Funcion ya declarada");
                    }
                  bloque
                    {
                        if (!$<entero>7)
                            yyerror("Error en la declaracion de la funcion");
                        else if ($8 != T_ERROR && $8 != $1)
                            yyerror("Error de tipos en el return");
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

bloque          : LLAVEA_ declaVarLocal listInst RETURN_ expre PUNTOYCOMA_ LLAVEC_
                    {
                        $$ = $5;
                    }
                  ;

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

instSwitch      : SWITCH_ ID_ LLAVEA_ Less Equal Greater LLAVEC_
                    {
                        SIMB sim = obtTdS($2);
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (ES_FUNCION(sim))
                            yyerror("El indentificador del switch no puede ser una funcion");
                        else if (sim.t != T_ENTERO)
                            yyerror("la expresion del switch tiene que ser un entero");
                    }
                  ;

Less            : LESS_ inst ;

Equal           : EQUAL_ inst ;

Greater         : GREATER_ inst ;

instExpre       : expre PUNTOYCOMA_
                | PUNTOYCOMA_ 
                ;

instEntSal      : READ_ PARA_ ID_ PARC_ PUNTOYCOMA_ 
                    {
                     SIMB sim = obtTdS($3);
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (ES_FUNCION(sim))
                            yyerror("El argumento de read no puede ser una funcion");
                        else if (sim.t != T_ENTERO)
                            yyerror("El argumento de read debe ser de tipo entero");   
                    }
                | PRINT_ PARA_ expre PARC_ PUNTOYCOMA_
                    {
                        if ($3 != T_ERROR && $3 != T_ENTERO)
                            yyerror("La expresion de print debe de ser de tipo entero");
                    }
                ;

instSelec       : IF_ PARA_ expre PARC_
                    {
                        if ($3 != T_ERROR && $3 != T_LOGICO)
                            yyerror("La condicion del if debe de ser de tipo logico");
                    }
                  inst ELSE_ inst
                ;

instIter        : FOR_ PARA_ expreOP PUNTOYCOMA_ expre PUNTOYCOMA_ expreOP PARC_
                    {
                        if ($5 != T_ERROR && $5 != T_LOGICO)
                            yyerror("La condicion del for debe ser de tipo logico");
                    }
                  inst
                ;

expreOP         : /* vacío */ 
                    {$$ = T_VACIO;}
                | expre
                    {$$ = $1;}
                ;

expre           : expreLogic 
                    {$$ = $1;}
                | ID_ IGUAL_ expre 
                    {
                        SIMB sim = obtTdS($1);
                        $$ = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (ES_FUNCION(sim))
                            yyerror("No se puede asignar a una funcion");
                        else if (sim.t == T_ARRAY)
                            yyerror("Asignacion incompatible a un array");
                        else if ($3 != T_ERROR) {
                            if (sim.t != $3)
                                yyerror("Error de tipos en la instruccion de asignacion");
                            else
                                $$ = sim.t;
                        }
                    }
                | ID_ CORCHA_ expre CORCHC_ IGUAL_ expre 
                    {
                        SIMB sim = obtTdS($1);
                        $$ = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (sim.t != T_ARRAY)
                            yyerror("La variable no es de tipo array");
                        else {
                            DIM dim = obtTdA(sim.ref);
                            if ($3 != T_ERROR && $3 != T_ENTERO)
                                yyerror("El indice del array debe ser de tipo entero");
                            if ($6 != T_ERROR && dim.telem != $6)
                                yyerror("Error de tipos en la asignacion al array");
                            if ($3 == T_ENTERO && dim.telem == $6)
                                $$ = dim.telem;
                        }
                    }
                ;

expreLogic      : expreIgual 
                    {$$ = $1;}
                | expreLogic opLogic expreIgual 
                    {
                        $$ = T_ERROR;
                        if ($1 != T_ERROR && $3 != T_ERROR){
                            if ($1 != T_LOGICO || $3 != T_LOGICO)
                                yyerror("Error de tipos en la expresion logica");
                            else 
                                $$ = T_LOGICO;
                        }
                    }
                ;

expreIgual      : expreRel 
                    {$$ = $1;}
                | expreIgual opIgual expreRel 
                    {
                        $$ = T_ERROR;
                        if ($1 != T_ERROR && $3 != T_ERROR){
                            if ($1 != $3)
                                yyerror("Error de tipos en la expresion de igualdad");
                            else 
                                $$ = T_LOGICO;
                        }
                    }
                ;

expreRel        : expreAd 
                    {$$ = $1;}
                | expreRel opRel expreAd
                    {
                        $$ = T_ERROR;
                        if ($1 != T_ERROR && $3 != T_ERROR){
                            if ($1 != T_ENTERO || $3 != T_ENTERO)
                                yyerror("Error de tipos en la expresion relacional");
                            else
                                $$ = T_LOGICO;
                        }
                    }
                ;

expreAd         : expreMul 
                    {$$ = $1;}
                | expreAd opAd expreMul 
                    {
                        $$ = T_ERROR;
                        if ($1 != T_ERROR && $3 != T_ERROR) {
                            if ($1 != T_ENTERO || $3 != T_ENTERO)
                                yyerror("Error de tipos en la expresion aditiva");
                            else
                                $$ = T_ENTERO;
                        }
                    }
                ;

expreMul        : expreUna 
                    {$$ = $1;}
                | expreMul opMul expreUna 
                    {
                        $$ = T_ERROR;
                        if ($1 != T_ERROR && $3 != T_ERROR) {
                            if ($1 != T_ENTERO || $3 != T_ENTERO)
                                yyerror("Error de tipos en la expresion multiplicativa");
                            else
                                $$ = T_ENTERO;
                        }
                    }
                ;

expreUna        : expreSufi 
                    {$$ = $1; }
                | opUna expreUna
                    {
                        $$ = T_ERROR;
                        if ($2 != T_ERROR) {
                            if ($1 == EXCL_) {
                                if ($2 != T_LOGICO)
                                    yyerror("Error de tipos en la negacion logica");
                                else
                                    $$ = T_LOGICO;
                            } else {
                                if ($2 != T_ENTERO)
                                    yyerror("Error de tipos en el operador unario aritmetico");
                                else
                                    $$ = T_ENTERO;
                            }
                        }
                    }
                ;

expreSufi       : constante
                    {$$ = $1;}
                | PARA_ expre PARC_ 
                    {$$ = $2;}
                | ID_
                    {
                        SIMB sim = obtTdS($1);
                        $$ = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (ES_FUNCION(sim))
                            yyerror("Uso incorrecto de identificador de funcion");
                        else if (sim.t == T_ARRAY)
                            yyerror("El identificador de array requiere indice");
                        else
                            $$ = sim.t;
                    }
                | ID_ CORCHA_ expre CORCHC_ 
                    {
                        SIMB sim = obtTdS($1);
                        $$ = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Objeto no declarado");
                        else if (sim.t != T_ARRAY)
                            yyerror("La variable no es de tipo array");
                        else {
                            DIM dim = obtTdA(sim.ref);
                            if ($3 != T_ERROR && $3 != T_ENTERO)
                                yyerror("El indice del array debe ser de tipo entero");
                            else if ($3 == T_ENTERO)
                                $$ = dim.telem;
                        }
                    }
                | ID_ PARA_ paramAct PARC_ 
                    {
                        SIMB sim = obtTdS($1);
                        $$ = T_ERROR;
                        if (sim.t == T_ERROR)
                            yyerror("Funcion no declarada");
                        else if (!ES_FUNCION(sim))
                            yyerror("El identificador no es una funcion");
                        else if ($3 >= 0) {
                            if (!cmpDom(sim.ref, $3))
                                yyerror("Error en los parametros de la llamada a la funcion");
                            else
                                $$ = sim.t;
                        }
                    }
                ;

paramAct        : /* vacío */ 
                    { $$ = insTdD(-1 , T_VACIO);}
                | listParamAct 
                    {$$ = $1; }
                ;

listParamAct    : expre 
                    { $$ = ($1 == T_ERROR) ? -1 : insTdD(-1, $1); }
                | expre COMA_ listParamAct 
                    { $$ = ($1 == T_ERROR || $3 < 0) ? -1 : insTdD($3, $1);}
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

opUna           : MAS_ { $$ = MAS_;}
                | MENOS_ { $$ = MENOS_;}
                | EXCL_ { $$ = EXCL_;}
                ;
%%
