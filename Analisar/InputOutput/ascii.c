/*
	Author: lufer@ipca.pt & oribeiro@ipca.pt
	Name: Ascii.c
	Date: 2020
	Desc: 
		- Tratamento de leitura e escrita
		- Tipo de dados "char"
		- Analisa Tabela de ASCII
	Obs:
		- Converter minusculas/maiusculas (algoritmo)
			Verificar se é  A - Z
			letra = letra + 32;	

			Verificar se é  a - z
			letra = letra - 32;	
*/

#include <stdio.h>
#include <locale.h>

/*------------------------------------------------------------------*/
// declaração ou assinatura das funções locais
char converteParaMinuscula(char letra);
void mostraTabelaAscii();

char inverteChar(char c);

/*------------------------------------------------------------------*/

// função principal
int main() {
	setlocale(LC_ALL, "Portuguese");
	// declaração e inicialização de variáveis
	char letra = 'A';	//letra=65;

	//valores diretos
	// Vários resultados
	printf(" %c (código ASCII %d) \n", letra, letra);				// 'A'  ( 65 )
	printf(" %c (código ASCII %d) \n \n", letra + 1, letra + 1);	// 'B' ( 66 )
	printf(" %c (código ASCII %d) \n", 'Z', 'Z');					// 'Z' ( 90 )
	printf(" %c (código ASCII %d) \n", 'a', 'a');					// 'a' ( 97 )
	printf(" %c (código ASCII %d) \n", 'z', 'z');					// 'z' ( 122 )

	//valores lidos
	printf("\nInserir letra: ");
	scanf(" %c", &letra);			//atenção, usar " %c" ara ignorar caracter "\n"
	printf(" Caracter inserido: %c (código ASCII %d) \n", letra, letra);		

	//Converter minusculas/maiusculas
	//Verificar se é  A - Z
	//letra = letra + 32;	//???

	//Verificar se é  a - z
	//letra = letra - 32;	//???

	//Analisar:
	printf("letra %c maiúscula %c \n", letra, toupper(letra));
	printf("letra %c minúscula %c \n", letra, tolower(letra));
	printf("Função: letra %c minúscula %c \n", letra, converteParaMinuscula(letra));

	getch();

	/*Mostra toda a Tabela de Ascii*/
	printf("\nTabela de ASCII:\n");
	mostraTabelaAscii();

	//Exercício TPC:
	//Função que "inverte" um catacter???

	getch();
	return 0;
}


/*--------------------------Funções-----------------------------------*/

// Função que converte maiusculas em minusculas
char converteParaMinuscula(char letra) {
	char resultado;

	resultado = letra;
	if (letra >= 'A' && letra <= 'Z'){	//só converte se for maiuscula
		resultado = letra + 32;			// +'a' - 'A';
	}
	
	//resultado = 'a' + (letra - 'A');
	return resultado;
}


// Procedimento para apresentar todos os caracteres de 0 a 255
void mostraTabelaAscii(){

	for (int i = 0; i < 255; i++)
	{
		//escreve inteiro, hexadecimal e caracter correspondente
		printf("%d - %x - %c\n", i, i, i);	

		/*if (i % 15 == 0){			//pausa de 15 em 15 linhas
			getch();
		}*/
	}
}


/*
Função que inverte um caracter, ie, maiusculas para minusculas ou vice-versa
*/
char inverteChar(char c){
	int aux=c;

	//Verificar se é maiuscula
	if (c >= 'A' && c <= 'Z'){
		aux = c + 32;
		//return (c + 32);
	}
	else{
		if (c >= 'a' && c <= 'z')
			aux = c - 32;
			//return (c - 32);
	}

	//se não for letra, mantém o caracter de entrada!!
	return aux;

}
