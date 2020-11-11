/*
	autor:lufer@ipca.pt & oribeiro@ipca.pt	
	date: 2020

	desc: Funções de Input e Output
	Analisar
	http://beej.us/guide/bgc/output/html/multipage/scanf.html

	int scanf(const char *format, ...);
	int fscanf(FILE *stream, const char *format, ...);

*/

#include <stdio.h>

void main_2(){
	int v1, v2;
	float vf1, vf2;
	char c=0;
	unsigned int ui;
	long li;

	//char* str="";
	/*char nome[20];*/

	//Calcula a soma de dois valores inseridos
	printf("\nVALORES INTEIROS\n");
	
	printf("Valor 1: ");
	scanf_s("%d", &v1);

	printf("Valor 2: ");
	scanf_s("%d", &v2);

	//mostrar a soma
	printf("Soma de %d com %d = %d\n", v1, v2, v1 + v2);


	printf("\nVALORES REAIS\n");
	//Calcula a soma de dois valores reais
	printf("Valor 1: ");
	scanf("%f", &vf1);	//incluir _CRT_SECURE_NO_WARNINGS em Preprocessing

	printf("Valor 2: ");
	scanf_s("%f", &vf2);

	//mostrar a soma
	printf("Soma de %.2f com %.2f = %.2f\n", vf1, vf2, vf1 + vf2);

	//Leitura de outro tipo de valores

	printf("\nOUTROS VALORES\n");
	printf("Valor sem sinal: ");
	scanf("%u",&ui);
	printf("Valor long: ");
	scanf("%ld", &li);
		
	//mostrar valores
	printf("Valors Inseridos: %u - %ld\n", ui,li);



	printf("\nVALORES TEXTO\n");

	char c1='0';
	printf("Char: ");
	scanf(" %c", &c1);

	printf("Char lido=%c\n", c1);

	/*printf("Nome: ");
	scanf("%s", nome);
	printf("Nome lido=%s", nome);*/

	getche();
}