/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  
 * Utilização de Tipos Enumerados
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include "Tipos.h"

/**
 * Devolve um dia por extenso...
 * 
 * \param dia
 * \return 
 */
char* diaSemana(int dia) {
	//char* aux;
	//if...else
	//if (dia == 0) 
	//	strcpy(aux,"Domingo");
	//else
	//	if (dia == 1) 
	//		strcpy(aux, "Segunda");
	//switch
	switch (dia)
	{
	case 0: return ("Dimingo");
	case 1: return ("Segunda");
	case 2: return ("Terça");
	default:
		return "Dia Invalido";
	}
}

/**
 * .
 * 
 * \param d
 * \return 
 */
char* diaSemanaII(dias d) {
	
	switch (d)
	{
	case DOM: return ("Domingo");
	case SEG: return ("Segunda");
	case TER: return ("Terça");
	default:
		return "Dia Invalido";
	}
}