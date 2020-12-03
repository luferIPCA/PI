#pragma once

#ifndef ALUNO
#define ALUNO


#pragma warning (disable: 4996)

#define TAMNOME 50


//Aluno tem idade e nome
typedef struct Aluno {
	int idade;
	char nome[TAMNOME];
}Aluno;

#endif