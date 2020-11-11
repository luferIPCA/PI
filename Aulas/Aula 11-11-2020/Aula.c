/*****************************************************************//**
 * \file   Aula.c
 * \brief  Estruturas condicionais
 * if..else
 * ?:
 * switch
 * Funções (I)
 * \author lufer
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>

//Assinaturas das funções
int somaValores(int valor1, int valor2);

/**
 * .
 * 
 * \return 
 */
int main()
{
    //variaveis e Valores
    int x = 10, y = 2 * x;
    int soma = 0;

    //Calculos
    //soma = x + y;
    soma = somaValores(x, y);

    //apresentar resultados
    printf("A soma de %d com %d = %d", x, y, soma);


#pragma region switch
    //Problema: Numero em extenso
    //h1
    int aux = 0;
    if (aux == 0) {
        puts("Zero");       //printf("%s",aux);
    }
    if (aux == 1) {
        puts("Um");
    }

    //h2
    if (aux == 0) {
        puts("Zero");       //printf("%s",aux);
    }
    else
        if (aux == 1)
            puts("Um");
        else
            if (x == 2) 
                puts("Dois");

    //h3
    switch (aux)
    {
    case 1: 
        puts("Um"); 
        break;
    case 2: 
        puts("Dois"); 
        break;
    default:
        break;
    }

#pragma endregion

    system("pause");
    //getch();
}


#pragma region Funcoes

/**
 * Calcula a soma de dois valores inteiros
 * 
 * \param Valor 1 
 * \param Valor 2
 * \return Soma de Valor1 com Valor2
 */
int somaValores(int a, int b) {
    //h1
    int aux = 0;
    aux = a + b;
    return (aux);

    //h2
    //return (a + b);
}

/**
 * .
 * 
 * \param x
 * \param y
 * \return 
 */
float divide(int x, int y) {
    //h1
    float d = x;
    if (y!=0)
        d = (float)x / y;       //cast
    return d;

    //h2
    //return ((y != 0) ? (float)x / y : x);

}

#pragma endregion