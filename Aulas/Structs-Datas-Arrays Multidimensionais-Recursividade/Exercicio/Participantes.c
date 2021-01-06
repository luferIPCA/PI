/*
lufer
Manipular Participante
*/

#include "Participante.h"

//devolve a data de nascimento de um participante
Data dataNascParticipante(Participante p) {
	return p.dataNasc;
}


//devolve o nome de um participante
char* nomeParticipante(Participante p) {
	return p.nome;
}