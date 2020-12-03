#pragma once

#include <locale.h>

#ifndef TIPOS
#define TIPOS

#pragma warning (disable: 4996)
#pragma execution_character_set("utf-8")

#define MAX 3
typedef enum { false, true } boolean; 

void mostraArray(int x[], int size);
boolean mostraArrayII(int x[], int size);

//uso de parâmetros variáveis
int incValor(int x);
void incValorII(int* x);
void trocaII(int* x, int* y);
void troca(int x, int y);

boolean existeValor(int v[], int size, int valor);
//int devolvePosicaoArray(int v[], int size, int valor);
//boolean existeValorArray(int v[], int size, int valor);
void ordenaArray(int a[], int size);
int* ordenaArrayII(const int a[], int size);


#endif
