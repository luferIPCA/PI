/*****************************************************************//**
 * \file   math.c
 * \brief  
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/


#include <stdio.h>
#include <locale.h>
#include <math.h>

#pragma warning (disable: 4996)     //ignorar _CRT_SECURE_NO_WARNINGS

#define PI 3.14156

// declaração ou assinatura das funções locais
float area(float raio) ;
float perimetro(float raio);

/**
 * .
 * 
 * \return 
 */
int main1() {  	setlocale(LC_ALL, "Portuguese");
	// declaração e inicialização de variáveis
	float raio, valorArea, valorPerimetro ;
		
	// ler dados de entrada
	printf("comprimento do raio? ");
	scanf("%f", &raio );
	
	// cálculos
	valorArea = area(raio);
	valorPerimetro = perimetro(raio);
	
	// resultados
	printf("área: %.2f \n", valorArea);	
	printf("perímetro: %.2f \n ", valorPerimetro);
		
	return 0; 
}

/**
 * .
 * 
 * \param raio
 * \return 
 */
float area(float raio) {
	float resultado;
	
	resultado = PI * pow(raio,2); // pow em math.h
	
	return resultado;
}

/**
 * .
 * 
 * \param raio
 * \return 
 */
float perimetro(float raio) {
	float resultado;
	
	resultado = 2 * PI * raio ;
	
	return resultado;
}


