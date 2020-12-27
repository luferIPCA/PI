/*****************************************************************//**
 * \file   Resolucao.c
 * \brief  Exercícios das Folhas de Exercícios
 * 
 * \author lufer
 * \date   December 2020
 *********************************************************************/

#include <stdio.h>

#pragma warning (disable: 4996)

#pragma region Rui_21674

typedef enum dias { SEG, TER, QUA, QUI, SEX, SAB, DOM } dias;

char* diaSemanaII(dias day) { //definimos uma variavel de entrada do tipo dias

    switch (day)
    {
    case DOM: return ("Domingo");
    case SEG: return ("Segunda-feira");
    case TER: return ("Terça-feira");
    case QUA: return ("Quarta-feira");
    default:
        return "Dia Invalido";
    }
}

dias getEnumValue(char* str) {
    dias aux;
    if (strcmp(str, "SEG")==0) return (SEG);
    if (strcmp(str, "TER")==0) return (TER);
}

#pragma endregion

int main() {
    dias diadaSemana;
    char aux[4]="";
    printf("\nInsira as 3 primeiras letras de um dia da semana: \n");
    scanf("%s", aux);
    printf("DIA = %s\n", diaSemanaII(getEnumValue(aux)));

}