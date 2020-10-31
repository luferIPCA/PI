
/**
 * @file exemplo03.c
 * @author Oscar Ribeiro (you@domain.com)
 * @brief definir funções locais
 * @version 0.1
 * @date 2020-10-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

#pragma region Assinaturas
/* Funções com definição local (protótipos | assinaturas) */ 
int somaTres(int a, int b, int c);
#pragma endregion Assinaturas


/**
 * @brief Função Principal
 * 
 * @return int 
 */
int main(){
	/* ... */
	int numero=1, resultado;
	
	/* leitura de dados */
	// não tem
	
	/* ... */
	resultado = somaTres(numero, numero, numero);  // somaTres: função local
	// resultado= somaTres(resultado, resultado, resultado);
	/* apresentação dos resultados */
	printf("resultado: %d \n", resultado);
	
	return 0;	
}

/* Implementação das funções locais */

/**
 * @brief Função que soma três valores inteiros
 * 
 * @param a Valor 1
 * @param b Valor 2
 * @param c Valor 3
 * @return int 
 */
int somaTres(int a, int b, int c){
	int resultado;
	
	resultado = a+b+c;
	
	return resultado;
}
