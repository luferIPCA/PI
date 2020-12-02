/*****************************************************************//**
 * \file   Aula.c
 * \brief  Manipulação de Arrays Simples e Strings
 * Strings == array de caracteres terminado com '\0'
 * Tipos de Dados estruturados
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //malloc/free
#include "Header.h"
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "en_US.utf8");

#pragma region Strings

    char str[] = "Benfica";
    //char str[] = { 'B','e','n','f','i','c','a','\0' };
    char str2[20];
    char* str3;

    printf("%d\n", sizeof(str));
    boolean b = existeChar(str, 'B');
    strcpy(str2, str);              //strcpy: copia uma string para outra
    str3 = allChar(str, 'B');

    char str1[12] = " Hello";
    int  len;

    /* copy str1 into str3 */
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3);

    /* concatenates str1 and str2 */
    strcat(str2, str1);
    printf("strcat( str1, str2):   %s\n", str2);

    /* total lenghth of str1 after concatenation */
    len = strlen(str1);
    printf("strlen(str1) :  %d\n", len);

    char nome[MAX];
    inicializaArray(nome, MAX, 'B');
    //char morada[] = "Viana";
    char morada[] = { 'V','i','a','n','a','\0' };

    int pos = ondeEstaChar(morada, 6, 'i');

    if (pos < 0)
        puts("ERRO");
    else
        printf("Está na posição: %d\n", pos);
    //free(str3);

#pragma endregion 

#pragma region ArrayII
    //Criar array como conjunto de apontadores para
    int* valores = (int*)malloc(sizeof(int) * 10);
    //iniciaArray(valores, 10);
    valores[0] = -2;
    //*valores = -2;          //valores[0]
    valores[1] = 12;
    //*(valores + 1) = 12;   //valores[1]
    valores[2] = 13;
    valores[3] = 14;
    valores[9] = 137;

    int n = 10;
    mostraArray(valores, 10);

    valores = getArrayPares(valores, 10);
    valores = getArrayParesII(valores, 10);

    mostraArray(valores, 10);
    free(valores);
#pragma endregion

#pragma region STRUCTS

    struct pessoa p;
    p.idade = 20;
    strcpy(p.nome, "luis");
    //scanf("%s", p.nome);

    pessoa p1 = { 12, "ola" };

    pessoa alunos[MAX];
    alunos[0] = p;
    alunos[2] = p1;

    printf("Idade: %d\n", alunos[0].idade);
    printf("Nome: %s\n", alunos[0].nome);

    mostraPessoas(alunos, MAX);
    pessoa aux1 = existePessoa(alunos, MAX, "luis");

#pragma endregion
}