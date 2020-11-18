/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  
 *  Manipulação de Arrays simples
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include "Tipos.h"
#include <stdio.h>

/**
 * Apresenta o conteúdo de um array
 */
void mostraArray(int x[], int size) {
    for (int i = 0; i < size ; i++) {
        //printf("%dº Valor: %d", i + 1, x[i]);
        printf("x[%d]=%d\n", i, x[i]);

    }
}

/**
 * Apresenta o conteúdo de um array
 */
boolean mostraArrayII(int x[], int size) {
    if (size <= 0)
        return false;
    for (int i = 0; i < size; i++) {
        //printf("%dº Valor: %d", i + 1, x[i]);
        printf("x[%d]=%d\n", i, x[i]);
    }
    return true;
}