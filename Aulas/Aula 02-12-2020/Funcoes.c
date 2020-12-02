/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  Funções para manipular arrays
 * Manipular strings como array de char
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include "Header.h"
#include <stdio.h>

/**
 * Verifica se determinado valor existe num array
 * 
 * \param v
 * \param size
 * \param valor
 * \return 
 */
boolean existeValorArray(int v[], int size, int valor) {

	boolean enc = false;
	for (int i = 0; i < size; i++) {
		if (v[i] == valor) {
			enc = true;
			break;
		}
	}
	return(enc);
}

/**
 * Devolve a posição onde determinado valor ocorre num array
 * 
 * \param v
 * \param size
 * \param valor
 * \return 
 */
int devolvePosicaoArray(int v[], int size, int valor) {

	for (int i = 0; i < size; i++) {
		if (v[i] == valor) {
			return i;
		}
	}
	return(-1);
}

/**
 * Devolve arrays de valores pares!
 * 
 * \param v
 * \param size
 * \return 
 */
int* getArrayPares(const int v[], int size) {
    //int aux[size];        //Não é permitido!
    int j = 0;
    int* pares = (int*)malloc(sizeof(int) * size);
    iniciaArray(pares, size);
    for (int i = 0; i < size; i++) {
        if (v[i] % 2 == 0) {
            pares[j] = v[i];
            j++;
        }
    }
    return pares;
}

int* getArrayParesII(int *v, int size) {
    //int aux[size];        //Não é permitido!
    int j = 0;
    int* pares = (int*)malloc(sizeof(int) * size);
    iniciaArray(pares, size);
    for (int i = 0; i < size; i++) {
        if (v[i] % 2 == 0) {
            pares[j] = v[i];
            j++;
        }
    }
    return pares;
}

/**
 * Apresenta conteúdo do array no ecrã
 * 
 * \param v
 * \param size
 */
void mostraArray(const int v[], const int size) {
    for (int i = 0; i < size; i++) {
        if (v[i] != NULL) {
            printf("v=%d\n", v[i]);
        }
    }
}

/**
 * Coloca valor inicial em todas as posições de um array.
 * 
 * \param v
 * \param size
 */
void iniciaArray(int v[], const int size) {
    for (int i = 0; i < size; i++) {
        v[i] = NULL;
    }
}


#pragma region STRUCTS
/**
 * Apresenta todas as pessoas que constam  um array!
 *
 * \param p
 * \param size
 */
void mostraPessoas(pessoa p[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Idade: %d\n", p[i].idade);
        printf("Nome: %s\n", p[i].nome);
    }
}

/**
 * Procura a pessoa com determinado nome!
 *
 * \param p
 * \param size
 * \param nome
 * \return
 */
pessoa existePessoa(pessoa p[], int size, char nome[]) {
    for (int i = 0; i < size; i++) {
        //if(p[i].nome==nome)
        if (strcmp(p[i].nome, nome) == 0) {
            return p[i];
        }
    }
    pessoa aux = { -1,"" };
    return aux;
}

#pragma endregion

