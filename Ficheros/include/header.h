#include <stdio.h>

/*****************************************************************************/
/*****************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H

/************************************* Variables externas definidas en el AL */
#define TRUE  1
#define FALSE 0

#define MAS_a 0
#define MENOS_a 1
#define EXCL_a 2

extern int yylex();
extern int yyparse();

extern FILE *yyin;
extern int   yylineno;

/****************************************************** Funciones auxiliares */
extern void yyerror(const char * msg) ;   /* Tratamiento de errores          */

extern int verbosidad ;

/*MODIFICADO POR EL GRUPO DE PRÁCTICAS*/

#define TALLA_TIPO_SIMPLE 1
#define TALLA_SEGENLACES 2

typedef struct {
    int ref;
    int talla;
} LISTA;

extern int verTdS;

/* Funcion: ref a la TdD (!= -1) y no es array (los arrays tambien usan ref) */
#define ES_FUNCION(s) ((s).t != T_ARRAY && (s).ref != -1)

#endif  /* _HEADER_H */
/*****************************************************************************/
/*****************************************************************************/
