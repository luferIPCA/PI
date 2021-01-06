/*
lufer

Manipular Participantes
*/

#ifndef PARTCIPANTE
#define PARTICPANTE

#include "Data.h"
#define TAMANHONOME 30

// ----------------------------------
//Dados
// ----------------------------------
typedef struct Participante {
	char nome[TAMANHONOME];
	Data dataNasc;
}Participante;

// ----------------------------------
//Métodos
// ----------------------------------

//devolve a data de nascimento de um participante
Data dataNascParticipante(Participante p);


//devolve o nome de um participante
char* nomeParticipante(Participante p);


#endif
