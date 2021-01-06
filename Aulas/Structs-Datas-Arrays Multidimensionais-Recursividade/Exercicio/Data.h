/*
lufer
Manipula Data...
*/
#ifndef DATA
#define DATA

#pragma warning( disable : 4996 ) //evita MSG ERROS: _CRT_SECURE_NO_WARNINGS

//Dados
typedef struct Data {
	int dia;
	int mes;
	int ano;
}Data;

// ----------------------
//Assinatura dos Metodos
// ----------------------

//devolve o dia de uma data
int diaData(Data d);

/*
Compara duas datas:
	=0 se datas iguais
	=1 se d1>d2
	=-1 se d1<d2
*/
int comparaDatas(Data d1, Data d2);

#endif // !DATA