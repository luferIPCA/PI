/*****************************************************************//**
 * \file   IfElse.c
 * \brief  Instrução Condicional
 * Algoritmos
 * Instrução Condicional: if..else
 * \author lufer
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main1() {
    
    //variaveis
    int x=7, y=x;

    printf("X= %d - Y=%d\n", x, y);

    

#pragma region h1
    //h1: Se x > y escreve "maior"
    if(x>y) 
        printf("Maior\n");
#pragma endregion
 
#pragma region h2
    //h2: Se x > y escreve "maior" senão escreve "Menor"

    if (x > y)
    {
        printf("Maior\n");
    }
    else
    {
        printf("Menor\n");
    }
#pragma endregion

#pragma region h3
    //h3: Se x > y escreve "maior" senão se for igual a y escreve "Igual" senão escreve "Menor"

    if (x > y)
    {
        printf("Maior\n");
    }
    else //x<=y
    {
        if (x == y)
            printf("Igual\n");
        else
            printf("Menor\n");
    }
#pragma endregion

#pragma region h4
    //h4: verificar se x é par
    // x é par se x%2 ==0

    if (x%2==0)
    {
        printf("Par\n");

    }
    else
        printf("Impar\n");
#pragma endregion

#pragma region h5
    //h5: verificar se x é par e é múltiplo de 7
    // x é par se x%2==0 e x é multiplo de 7 se x%7==0

    if ((x % 2 == 0) && (x % 7 == 0)) {
        printf("É par e multiplo de 7\n");
    }
#pragma endregion

#pragma region h6
    //h6: verificar se x é par e é múltiplo de y
    // x é par se x%2==0 e x é multiplo de y se x%y==0

    if ((x % 2 == 0) && (x % y == 0)) {
        printf("É par e multiplo de y\n");
    }
    else {//não é par ou não é múltiplo de y
        if (x % 2 != 0)
            printf("X é múltiplo Y\n");
        else
            printf("X É Par");
    }
#pragma endregion

    system("pause");

}