/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  
<<<<<<< HEAD
 * Manipulação de Estruturas repetitivas (ciclos)
=======
 * 
>>>>>>> b22e04dfa70bfde6cd06598fdf3625c1cc1c190e
 * \author lufer
 * \date   November 2020
 *********************************************************************/
#include "Funcoes.h"

const int MAX = 10;

/**
 * .
 * 
 * \param x
 * \param y
 * \return 
 */
int soma(int x, int y) {
	return (x + y);
}

/**
 * TPC: Preciso ou não das variáveis "i" e "conta"????.
 //*     
 //   enquanto conta<=5 faz
 //     {
 //       soma = soma + i
 //       i = i+1             //i avança para proximo valor
 //      }
 //   
 * \param limInf
 * \param limSup
 * \return 
 */
int somaValoresEntre(int limInf, int limSup) {
    int i = limInf;
    int conta = 0;
    int soma=0;

    while (conta <= limSup) {
        soma = soma + i;
        i = i + 1;          //i++;
        conta = conta + 1;  //conta++;
    }
    //return soma;


    //do
    //soma=0;
    //i=limInf;
    //conta=0;
    do {
        soma = soma + i;
        i = i + 1;          //i++;
        conta = conta + 1;  //conta++;
    } while (conta <= limSup);
    //return soma;


    //for
    //soma=0;
    //i=limInf;
    //conta=0;
    for (soma = 0, i = limInf; conta <= limSup; i++) {

        soma = soma + i;
        //i++;
        conta = conta + 1;  //conta++;
    }
    //return soma;
}