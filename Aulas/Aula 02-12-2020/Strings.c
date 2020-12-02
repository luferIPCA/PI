/*****************************************************************//**
 * \file   Strings.c
 * \brief  Funções que manipulam strings
 * 
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include "Header.h"

#pragma region ARRAY_CHARS

 /**
  * Inicializa um array com determinado caracter.
  *
  * \param n
  * \param size
  * \param ch
  */
void inicializaArray(char n[], int size, char ch) {
    for (int i = 0; i < size; i++) {
        n[i] = ch;
    }
}


/**
 * Indica a posição onde se encontra determinado caracter num  array de caracteres.
 *
 * \param v
 * \param size
 * \param ch
 * \return
 */
int ondeEstaChar(char v[], int size, char ch) {
    int i = 0;
    while (i < size) {
        if (v[i] == ch) return i;
        i++;
    }
    return -1;          //se não existir devolve -1
}

boolean existeChar(const char v1[], char ch) {
    int i = 0;
    //int size = sizeof(v1);
    while(v1[i] !='\0'){ // or < size){
        if (v1[i] == ch) return true;
        i++;
    }
}

/**
 * Verifica se determinado caracter existe num array de caracteres.
 *
 * \param v
 * \param size
 * \param ch
 * \return
 */
boolean existeCharI(char v[], int size, char ch) {
    int i = 0;
    while (i < size) {
        if (v[i] == ch) return true;
        i++;
    }
    return false;
}

/**
 * Devolve todos os caracteres existentes num array de caracteres.
 * 
 * \param v1
 * \param ch
 * \return 
 */
char* allChar(const char v1[], char ch) {
    char* aux = (char*)malloc(sizeof(v1)+1);    //cria um array
    int i = 0,j=0;
    while (v1[i] != '\0') { 
        if (v1[i] == ch) {
            aux[j++] = v1[i];
        }
        i++;
    }
    aux[j] = '\0';
    return aux;
}

#pragma endregion