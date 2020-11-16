/*****************************************************************//**
 * \file   carateresEmC.c
 * \brief  
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/


#include <stdio.h>
#include <locale.h>

#pragma warning (disable: 4996)     //ignorar _CRT_SECURE_NO_WARNINGS

// declaração ou assinatura das funções locais
char converteParaMinuscula(char letra);

// função principal
int main2() {  
	setlocale(LC_ALL, "Portuguese");
	// declaração e inicialização de variáveis
	char letra = 'A'; 
			
	// ler dados de entrada

	
	// cálculos
	// resultados
	printf(" %c (código ASCII %d) \n", letra, letra );	      // 'A'  ( 65 )
	printf(" %c (código ASCII %d) \n \n", letra+1, letra+1 ); // 'B' ( 66 )
	printf(" %c (código ASCII %d) \n", 'Z', 'Z');    // 'Z' ( 90 )
	printf(" %c (código ASCII %d) \n", 'a', 'a' );	 // 'a' ( 97 )
	printf(" %c (código ASCII %d) \n", 'z', 'z' );   // 'z' ( 122 )
	
	printf("--- \n");
	scanf("%c",&letra);
	printf("letra %c minúscula %c \n", letra, converteParaMinuscula(letra));
	return 0; 
}

/**
 * .
 * 
 * \param letra
 * \return 
 */
char converteParaMinuscula(char letra) {
	char resultado;
	resultado = 'a' + (letra - 'A');
	return resultado;
}

