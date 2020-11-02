
/**
 * @file hoje.c
 * @author lufer (you@domain.com)
 * @brief  Estruturas de um programa em C
 *  regiões #pragma
 *  funções e prodecimentos
 *  tipos de dados
 *  variáveis e constantes
 *  declaração e inicialização de variáveis
 *  regras de escrita de código
 * @version 0.1
 * @date 2020-10-30
 * 
 * //tipoRetorno nomeFuncao(parametros){}
 * //void nomeProdecimento(parametros){}
 * 
 * @copyright Copyright (c) 2020
 * @see https://www.doxygen.nl/manual/commands.html
 * @see https://embeddedinventor.com/guide-to-configure-doxygen-to-document-c-source-code-for-beginners/
 * @code
 *  doublle aux = calculaSoma(2,3);
 * @endcode
 * 
 */

#include <stdio.h>

/*Declaração de Funções (protótipos ou assianturas) */
int calculaSoma(int z, int w);


/**
 * @brief 
 * 
 * @return int 
 */
int main(){

#pragma region H1

    /*Declarar variáveis e inicializam*/
    int x=0, y, soma;

    /*Obter valores*/
    //valores assumidos
    x=15;
    y=15;

    /*Calculo*/
    soma = x+y;

    /*Apresentar ou devolver o resultado */
    printf("A soma de %d com %d = %d\n", x,y,soma);

#pragma endregion

#pragma region H2

 /*Declarar variáveis e inicializam*/
    int a,b;
    int soma2;

    /*Obter valores*/
    //valores lidos
    printf("Valor 1:");
    scanf("%d",&a);
    printf("Valor 2:");
    scanf("%d",&b);

    /*Calculo*/
    soma2 = calculaSoma(a,b);      //invoca a função soma

    /*Apresentar ou devolver o resultado */
    printf("A soma de %d com %d = %d\n", a,b,soma2);


#pragma endregion

}


#pragma region Funções

/**
 * @brief Calcula da soma de dois valores...
 * 
 * @param x Valor 1
 * @param y Valor 2
 * @return int 
 */
int calculaSoma(int x, int y){

    /*Declarar variáveis e inicializam*/
    int aux;

    /*Obter valores*/
    /* vêm nos parâmetros */

    /*Calculo*/
    aux=x+y;


    /*Apresentar ou devolver o resultado */
    return aux;
    //return (x+y);
}

/**
 * @brief Calcula a média de dois valores inteiros
 * A média devolvida é um valor real
 * @param x 
 * @param y 
 * @return (double) valor da média calculada 
 */
double calculaMedia(int x, int y)
{

     /*Declarar variáveis e inicializam*/
    double media;

    /*Obter valores*/

    /*Calculo*/
    media = ((double)x+y)/2;

    /*Apresentar ou devolver o resultado */

    return media;
}


/**
 * @brief Procedimento
 * 
 */
void incrementaValor(){
    //Não faz nada!
}

#pragma endregion
