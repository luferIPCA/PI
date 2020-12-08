/*****************************************************************//**
 * \file   Aula.c
 * \brief  Arrays
 * NOTA: Organizar este código (alunos)
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include<stdio.h>
#include "Header.h"

int main() {

    int valores[6] = { 1,3,5,8,12 };
    
    mostraArray(valores, 6);

    ordernarArray(valores, 5);
    insereValorArray(valores, 6, 2);

    Aluno alunos[MAXALUNOS] = { {23,"Ana"},{24,"Pedro"},{18,"Paula"} };
    //colocar valores diretamente no array
    alunos[3].idade = 20;
    strcpy(alunos[3].nome,"Joaquim");
    //Ler valores para um array
    int i = 0;
    while (i< 3) {
        printf("Nome:"); scanf("%s", alunos[i].nome);
        printf("Idade:"); scanf("%d", &alunos[i].idade);
        i++;
    }
    puts("Array Inicial:\n");
    mostraArrayAlunos(alunos, 5);

    ordernarArrayAlunos(alunos,5 );
    puts("Array Ordeenado:\n");
    mostraArrayAlunos(alunos, 5);


}