/*
lufer
MAnipular Evento
*/

#ifndef EVENTO
#define EVENTO

//#include "Data.h"
#include "Registo.h"
#include <stdbool.h>

#define N 50


typedef struct Evento {
	char nomeEvento[20];
	Data dataEvento;
	Registo participantes[N];
}Evento;


char* nomeEvento(Evento e);
Data dataEvento(Evento e);
int registaParticipanteEvento(Registo r, Evento e, int n);

bool gravaFicheiro(Evento e, char* ficheiro);

#endif