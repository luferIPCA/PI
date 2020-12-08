#include "Header.h"


/**
 * Ordena um array!
 *
 * \param v
 * \param n
 */
void ordernarArray(int v[], int n) {
    //v[n] não existe!!!!
    for (int i = 0; i < (n - 1); i++)
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
 * Coloca valor inicial em todas as posições de um array.
 * Inicializa com o valor zero "0"
 * \param v
 * \param size
 */
void iniciaArrayZero(int v[], const int size) {
    for (int i = 0; i < size; i++) {
        v[i] = 0;
    }
}


/**
 * Inserir valor em array ordenado
 *
 * \param v
 * \param size
 * \param valorNovo
 * \return
 */
boolean insereValorArray(int v[], int size, int valorNovo) {
    int i = 0, j;
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

/**
 * Mostra no ecrã todo o array
 * 
 * \param v
 * \param s
 */
void mostraArray(int v[], int s) {
    for (int i = 0; i < s; i++) {
        printf("%d\n", v[i]);
    }
}


#pragma region Alunos
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
 * Apresenta no ecrã um array de alunos!
 *
 * \param v
 * \param n
 */
void mostraArrayAlunos(Aluno v[], int n) {
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
    return (turma[n - 1]);      //aluno mais velho encontra-se na posição N-1 do array, após a ordenação!!!
}

/**
 * Insere um novo aluno num array ordenado
 *
 * \param turma
 * \param n
 * \param novo
 * \return
 */
boolean insereAluno(Aluno turma[], int n, Aluno novo) {
    int i = 0;
    while (strcmp(turma[i].nome, novo.nome) < 0) i++;
    //Completar
}

#pragma endregion

