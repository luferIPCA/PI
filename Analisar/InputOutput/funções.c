/*
	Author: lufer@ipca.pt & oribeiro@ipca.pt
	Date: 2020
	Desc: 
		- Funções e Procedimentos
	Obs:

	Procedimento ou Função
	 - Procedimento: Executa uma ação e não devolve qualquer resultado!
	 - Função: Executa uma ação e devolve um resultado
*/
#include <stdio.h>


/*------------------------------------------------------------------*/

//Protótipos ou Assinatura de Procedimentos/Funções
//Descrição do cabeçalho da função
void parar();

int dobro(int x);

float perimetro(float raio);


/*------------------------------------------------------------------*/


int main_3(){

	int valor=20;

	printf("\nO dobro de %d = %d", valor, calculaDobro(valor));	//invoca a função dobro com valor numa variável

	printf("\nO dobro de %d = %d", 120, calculaDobro(120));		//reinvoca a função dobro com valor direto

	printf("\n\nO Benfica é o maior..\n\n");				//inevitável...nada a dizer :)

	//Exercício: Calcular o Perimetro de uma circunferência, com recurso a uma função
	//pedir o valor do raio da circunf
	//ler o valor do raio 
	//calcular o perimetro
	//mostrar o perimetro

	parar();												//invoca um procedximento
}


/* -------------------- Funções/Procedimentos ----------------------*/

//Procedimento para ajudar na gestão da execução do programa...
void parar(){
	printf("Premir qualquer tecla para continuar.....");
	getch();
}


//Função que calcula o dobro de um valor...
int calculaDobro(int x){
	int aux;

	aux = 2 * x;

	return aux;	//devolve
}

//Função que calcula o perimero de uma circunferência
float calculaPerimetro(float r){
	const float PI = 3.14;

	float aux = 2 * PI *r;
	return (aux);

}
