/*
Funções para manipular arrays multidimensionais
lufer@ipca.pt
2017
Ver: https://beginnersbook.com/2014/01/2d-arrays-in-c-example/
*/

#include "arraysMulti.h"

/*
Mostra o conteúdo de um array bidimensional
*/
void mostraArrayBidimensional(int v[][N], int t) {
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < N; j++) {
			printf("v[%d][%d]=%d | ", i, j, v[i][j]);
		}
		printf("\n");
	}
}

/*
inicializa array bidimensional com determinado valor
*/
void inicalizaArrayBidimensional(int v[][N], int t, int valor) {
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < N; j++) {
			v[i][j] = valor;
		}
	}
}