/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  
 *  Manipulação de Arrays simples
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include "Tipos.h"
#include <stdio.h>
#include <string.h>

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
boolean mostraArrayII(int x[], int size) {  //boolean mostraArrayII(int *x, int size)
    if (size <= 0)
        return false;
    for (int i = 0; i < size; i++) {
        //printf("%dº Valor: %d", i + 1, x[i]);
        printf("x[%d]=%d\n", i, x[i]);
    }
    return true;
}

/**
 * Ordena um array.
 * 
 * \param a
 * \param size
 */
void ordenaArray(int a[], int size)
{
    int i, j, temp;
    for (i = 0; i < (size - 1); ++i)
    {
        for (j = 0; j < size - 1 - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int* ordenaArrayII(const int a[], int size)
{
    int i, j, temp;
    int* aux = (int*)malloc(sizeof(int) * size);
    aux = a;
    for (i = 0; i < (size - 1); ++i)
    {
        for (j = 0; j < size - 1 - i; ++j)
        {
            if (aux[j] > aux[j + 1])
            {
                temp = aux[j + 1];
                aux[j + 1] = aux[j];
                aux[j] = temp;
            }
        }
    }
    return aux;
}


/**
 * Verifica se determinado valor existe.
 * 
 * \param v
 * \param size
 * \param valor
 * \return 
 */
boolean existeValor(int v[], int size, int valor) {
    int i = 0;
    while (i < size) {
        if (v[i] == valor) return true;
        i++;
    }
    return false;
}

#pragma region PARAMETROS_VARIAVEIS

int incValor(int x) {
    return x + 1;
}

void incValorII(int *x) //x aponta para inteiro
{
         (*x)++;          //o apontado por x incrementa!!
}

void trocaII(int* x, int* y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void troca(int x, int y) {
    int aux;
    aux = x;
    x = y;
    y = aux;
}

#pragma endregion
