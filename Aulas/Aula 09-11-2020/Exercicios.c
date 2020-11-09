
/**
 * .
 */

#include <stdio.h>
#include <stdlib.h>                 //para usar o "system"

#pragma warning (disable: 4996)     //ignorar _CRT_SECURE_NO_WARNINGS


#define MAX 500

/**
 * .
 * 
 * \return 
 */
int main1() {

    //variaveis

    char nome[MAX];     //evitar usar valores na definição  
    //char* nome="";    // necessario criar espaço em memoria com "malloc"


    printf("Nome:");
    scanf("%s", nome);
    printf("Bem vindo %s", nome);

    //ou getchar();                   //espera pela tecla "return"
    //system("pause");                //espera por uma tecla qualquer

}

int soma(int x, int y) {
    return x + y;
}