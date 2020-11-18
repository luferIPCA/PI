/*****************************************************************//**
 * \file   Tipos.h
 * \brief  
 * Header File
 * \author lufer
 * \date   December 2020
 *********************************************************************/

/**
 * enum NOME {valor1, valor2,...,valorn}.
 * typedef enum NOME NOME;
 * 
 * typedef enum NOMEx {valor1, valor2,...,valorn} NOMEy;
 */

#ifndef TIPOS
#define TIPOS

//#define true 1
//#define false 0

#define True true
#define False false
//enum boolean {false, true};

//typedef enum boolean { false, true } boolean;
typedef enum  { false, true } boolean;

//#define RED 1
//#define GREEN 2
//#define YELLOW 3

//enumerado
enum cores { GRAY, RED=10, GREEN=20, YELLOW=30, BLACK=40};
typedef enum cores cores;

typedef enum dias{SEG,TER,QUA,QUI,SEX,SAB,DOM} dias;



#endif


#ifndef FUNCOES
#define FUNCOES

extern char* diaSemana(int dia);
extern char* diaSemanaII(dias dia);
extern char* numeroExtenso(int x);

#endif




