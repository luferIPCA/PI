/*****************************************************************//**
 * \file   Aula.c
 * \brief  Arrays
 * NOTA: Organizar este código (alunos)
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include<stdio.h>
#include "Header.h"

#define MAXALUNOS 35

/**
 * Ordena um array!
 * 
 * \param v
 * \param n
 */
void ordernarArray(int v[], int n) {
    //v[n] não existe!!!!
    for (int i = 0; i < (n-1); i++)
    {
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[i]) {  //Troca
                int aux = v[i];     //auxiliar para preservar o valor de v[i]
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

}

/**
 * Encontra o maior valor de um array.
 * 
 * \param v
 * \param n
 * \return 
 */
int maiorValor(int v[], int n) {
    int m = v[0];
    for (int i = 1; i < n; i++)
    {
        if (m < v[i]) m = v[i];
    }
    return m;
}

/**
 * Encontra o menor valor de um array.
 *
 * \param v
 * \param n
 * \return
 */
int menorValor(int v[], int n) {
    int m = v[0];
    for (int i = 1; i < n; i++)
    {
        if (m > v[i]) m = v[i];
    }
    return m;
}


typedef struct MaiorMenor {
    int maior;
    int menor;
}MaiorMenor;

/**
 * Encontra o maior e menor valor de um array.
 *
 * \param v
 * \param n
 * \return
 */
MaiorMenor calculaMaiorMenor(int v[], int n) {
    MaiorMenor aux;

    aux.maior = maiorValor(v, n);
    aux.menor = menorValor(v, n);
    return aux;
}

/**
 * Ordena um array de structs!
 * 
 * \param v
 * \param n
 */
void ordernarArrayAlunos(Aluno v[], int n) {
    //v[n] não existe!!!!
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = i + 1; j < n; j++) {
            if (v[j].idade < v[i].idade) {  //Troca
                Aluno aux = v[i];     //auxiliar para preservar o valor de v[i]
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

/**
 * Apresenta um array de alunos!
 * 
 * \param v
 * \param n
 */
void mostraArrayAlunos(Aluno v[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nome:%s\n", v[i].nome);
        printf("Idade: %d\n", v[i].idade);
    }
}

/**
 * Encontra o aluno mais novo!
 * 
 * \param turma
 * \param n
 * \return 
 */
Aluno maisNovo(Aluno turma[], int n) {
    ordernarArrayAlunos(turma, n);
    return (turma[0]);      //aluno mais novo encontra-se na posição 0 do array, após a ordenação!!!
}

/**
 * Encontra o aluno mais velho!
 *
 * \param turma
 * \param n
 * \return
 */
Aluno maisVelho(Aluno turma[], int n) {
    ordernarArrayAlunos(turma, n);
    return (turma[n-1]);      //aluno mais velho encontra-se na posição N-1 do array, após a ordenação!!!
}




int main() {

    int valores[] = { 12,-4,12,7 };

    Aluno alunos[MAXALUNOS] = { {23,"Ana"},{24,"Pedro"},{18,"Paula"} };


    alunos[3].idade = 20;
    strcpy(alunos[3].nome,"Joaquim");
    int i = 5;
    while (i < MAXALUNOS) {
        printf("Nome:"); scanf("%s", alunos[i].nome);
        printf("Idade:"); scanf("%d", &alunos[i].idade);
        i++;
    }

    mostraArrayAlunos(alunos, 5);

    ordernarArrayAlunos(alunos,5 );

    mostraArrayAlunos(alunos, 5);


}