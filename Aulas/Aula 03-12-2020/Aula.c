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


boolean insereAluno(Aluno turma[], int n, Aluno novo) {
    int i = 0;
    while (strcmp(turma[i].nome, novo.nome) < 0) i++;

}

/**
 * Coloca valor inicial em todas as posições de um array.
 *
 * \param v
 * \param size
 */
void iniciaArray(int v[], const int size) {
    for (int i = 0; i < size; i++) {
        v[i] = 0;
    }
}

boolean insereValorArray(int valores[], int n, int novo) {
    int i = 0,j;
    while (valores[i] < novo) {
        i++;
    }
    j = n-1;
    while (j > i) {
        valores[j] = valores[j-1];
        j--;
    }
    valores[i] = novo;
}

/**
 * Inserir valor em array ordenado
 * 
 * \param v
 * \param size
 * \param valorNovo
 * \return 
 */
boolean insereValor(int v[], int size, int valorNovo) {
    int i = 0,j;
    //encontra a posição onde inserir valor novo
    while (v[i] < valorNovo)
        i++;
    //desloca "todos" para a direita
    j = size - 1;
    while (j > i) {
        v[j] = v[j - 1];
        j--;
    }
    v[i] = valorNovo;
    return true;
}


void mostraArray(int v[], int s) {
    for (int i = 0; i < s; i++) {
        printf("%d\n", v[i]);
    }
}

int main() {

    int valores[6] = { 1,3,5,8,12 };
    
    mostraArray(valores, 6);

    //ordernarArray(valores, 5);
    insereValor(valores, 6, -7);
    insereValorArray(valores, 6, 2);

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