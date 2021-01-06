/*
Aplicação para Gerir Eventos
lufer
*/


#include <stdio.h>
//#include "Data.h"

#include "Evento.h"

void main() {

	Data d1 = { 18,12,2017 };

	/*printf("Dia=%d\n", diaData(d1));*/

	Evento e;
	int totalParticipantes = 0;

	//Dados do evento
	e.dataEvento = d1;
	strcpy(e.nomeEvento,"Jogo de Futebol");

	//Dados do registo
	Registo r;
	r.dataRegisto = d1;
	strcpy(r.nome, "lufer");

	int aux = registaParticipanteEvento(r, e, 0);
	if (aux!= -1)
	{
		printf("Registado coom Sucesso no Evento: %s - Participante: Nome: %s Dia: %d", e.nomeEvento,r.nome, diaData(r.dataRegisto));
	}

	getche();
}