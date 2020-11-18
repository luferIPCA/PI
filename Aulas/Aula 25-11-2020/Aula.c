/*****************************************************************//**
 * \file   Aula.c
 * \brief  Arrays em C
 * conjunto de valores do mesmo tipo e dados!!!!
 * 
 * tipoDados NomeArray[Dimensão]
 * Nota:
 * Caracteres portugueses:
 * 
 *  setlocale(LC_ALL, "en_US.utf8");
 *  ...
 *  puts(u8"Olá");
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/
#include "Tipos.h"
#include <stdio.h>

int main() {

    //int notas[MAX];                   //declaração
    setlocale(LC_ALL, "en_US.utf8");    //mostrar caracteres portugueses

    int notas[MAX] = { 12, -4, 0 };     //declaração e inicialização

    printf("%d \n", notas[0]);

    notas[0] = 2 * notas[1];
    notas[1]++;     //notas[1] = notas[1]+1;

    //mostrar todos os valore do array
    //h1
    printf("%d \n", notas[0]);
    printf("%d \n", notas[1]);
    printf("%d \n", notas[2]);

    //h2
    int i = 0;
    printf("%d \n", notas[i]);
    i++;
    printf("%d \n", notas[i]);
    i++;
    printf("%d \n", notas[i]);


    //h3
    i = 0;
    while (i < (MAX)) {
        printf("%d \n", notas[i]);
        i++;
    }

    //h4
    i = 0;
    do {
        printf("%d \n", notas[i]);
        i++;
    } while (i < (MAX));

    //h5
    for (i=0;i<(MAX);i++) {
        printf("%d \n", notas[i]);
    }

    //Ler valores para um array
    printf("Valores para o array\n");
    //scanf("%d", &i);
    //scanf("%d", &notas[0]);

    for (i = 0; i < MAX; i++) {
        printf("%dº Valor:", i+1 );
        scanf("%d", &notas[i]);
    }
    printf("\n");
    mostraArray(notas, MAX);
    printf("\n");
    boolean aux = mostraArrayII(notas, MAX);
    printf("\n");
    int size = sizeof(notas) / sizeof(notas[0]);
    printf("Tamanho do Array: %d", size);
        
}
