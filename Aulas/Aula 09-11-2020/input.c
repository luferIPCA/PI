/*****************************************************************//**
 * \file   input.c
 * \brief  Input/Output
 * Ler uma string / ler texto
 * \author lufer
 * \see    https://www.geeksforgeeks.org/scanfns-str-vs-getsstr-in-c-with-examples/
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>                 //para usar o "system"

#pragma warning (disable: 4996)     //ignorar _CRT_SECURE_NO_WARNINGS

#define MAX 500

/**
 * .
 * 
 * \return 
 */
int main() {

    //variaveis

    char nome[MAX];     //evitar usar valores na definição  
    //char* nome="";    // necessario criar espaço em memoria com "malloc"

#pragma region H1

    printf("Nome: ");
    //Experimentar com apenas uma palavra
    //Experimentar com mais do que uma palavra
    scanf("%s", nome);

    //Experimentar com várias palavras
    //scanf("%[^\n]s", nome);

    //Experimentar
    //gets(nome);

    printf("Bem vindo %s\n", nome);

    //scanf("%[^\n]s", nome);         //limpa buffer == fflush(stdin)
    //Experimentar com mais do que uma palavra
    scanf(" %s", nome);

    //scanf("%[^\n]s", nome);         //limpa buffer
    //Experimentar com mais do que uma palavra
    scanf(" %[^ ]s", nome);

    //scanf("%[^\n]s", nome);         //limpa buffer
    printf("Nome:");
    scanf("%s", nome);
    printf("Bem vindo II %s\n", nome);

#pragma endregion

#pragma region H2

    char s[81];
    int i;
    i = 0;
    while ((s[i] = getchar()) != '\n') // ou (scanf("%c"&s[i]));
        i++;
    s[i] = '\0';
    // gets(s);
    // scanf("%[^\n]",s);
    printf("s value is = %s\n", s);
    //puts(s);

#pragma endregion

#pragma region H3

    char text[30];
    printf("Nome : ");
    scanf(" % s", text);
    printf("O seu nome : %s", text);

#pragma endregion

#pragma region H4

    char text1[30];
    printf("Nome : ");
    scanf("%[a-z]s", text1);
    printf("O seu nome : %s", text1);

#pragma endregion

#pragma region H5

    char text2[180];
    printf("Inserir texto terminado com ~ : ");
    scanf("%[^~]s", text2);
    printf("Texto lido : %s", text2);

#pragma endregion

    //ou getchar();                   //espera pela tecla "return"
    //system("pause");                //espera por uma tecla qualquer
    //ou
    getch();

}
