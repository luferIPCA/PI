/*****************************************************************//**
 * \file   Header.h
 * \brief  Assinaturas de funções e Tipos de Dados
 * Structs
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#pragma once

#define MAXNOME 50
#define MAX 5
#pragma warning (disable: 4996)


typedef enum {false, true}boolean;

struct pessoa {
    char nome[MAXNOME];
    int idade;
};

typedef struct pessoa pessoa;

void mostraPessoas(pessoa p[], int size);
pessoa existePessoa(pessoa p[], int size, char nome[]);

#pragma region Assinaturas

int* getArrayPares(const int v[], int size);
int* getArrayParesII(int* v, int size);
void iniciaArray(int v[], const int size);
void mostraArray(const int v[], const int size);

char* allChar(const char v1[], char ch);
boolean existeChar(const char v1[], char ch);

void inicializaArray(char n[], int size, char ch);
boolean existeValor(int v[], int size, int valor);
int ondeEstaChar(char v[], int size, char ch);

#pragma endregion