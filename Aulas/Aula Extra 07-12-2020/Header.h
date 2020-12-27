/*****************************************************************//**
 * \file   Header.h
 * \brief  Manipulação de Arrays
 * Inserção Ordenada em Arrays
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#pragma once

#ifndef ALUNO
#define ALUNO

#pragma warning (disable: 4996)

#define TAMNOME 50
#define MAXALUNOS 35

typedef struct MaiorMenor {
    int maior;
    int menor;
}MaiorMenor;

typedef struct Aluno {
    int idade;
    char nome[TAMNOME];
}Aluno;

typedef enum {false, true} boolean;

#pragma region Assinaturas
void mostraArray(int v[], int s);
void iniciaArrayZero(int v[], const int size);
boolean insereValorArray(int v[], int size, int valorNovo);
MaiorMenor calculaMaiorMenor(int v[], int n);
int menorValor(int v[], int n);
int maiorValor(int v[], int n);
void ordernarArray(int v[], int n);

boolean insereAluno(Aluno turma[], int n, Aluno novo);
Aluno maisVelho(Aluno turma[], int n);
Aluno maisNovo(Aluno turma[], int n);
void mostraArrayAlunos(Aluno v[], int n);
void ordernarArrayAlunos(Aluno v[], int n);
int removeAluno(Aluno turma[], int n, char nome[]);

#pragma endregion

#endif