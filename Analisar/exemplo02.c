

/**
 * @file exemplo02.c
 * @author your name (oribeiro@ipca.pt)
 * @brief 
 * @version 0.1
 * @date 27/09/17 
 * exemplo da aula LP1: como invocar funções
 *          cálculo do expoente de um número. 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <math.h>   // tem a defeinição de pow 

int main(){
	/* declaração e inicialização de variáveis */
	int base, expoente, resultado;
	
	base = 10;
	expoente = 4 ;
	
	/* leitura de dados */
	// não tem
	
	/* cálculos / relações */
	resultado = pow(base, expoente);  //  pow definida em math.h (base^expoente)
	
	/* apresentação dos resultados */
	printf("resultado: %d \n", resultado);
	
	return 0;	
}
