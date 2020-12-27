/*****************************************************************//**
 * \file   main.c
 * \brief  Manipulação de ficheiros binários: fundamentos!
 * Rever "Apontadores"
 * \author lufer
 * \date   December 2020
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Square {
	int x;
	struct Peca *p;
};

struct Peca {
	int v;
	char name[50];
};

typedef struct
{
	char name[20];
	int age;
	int height;
} Pessoa;
  

int main() {

	//=====================
	//h1
	//=====================
	{
	//Gravar em ficheiro binário "wb"
	FILE* file = fopen("out1.bin", "wb");
	if (!file) {
		fprintf(stderr, "Erro no acesso ao ficheiro!!\n");
		return 1;
	}

	//um só registo
	Pessoa person = { "John", 40, 180 };
	fwrite(&person, 1, sizeof(person), file);

	Pessoa varios[] = { { "lufer",12,14 },{ "Maria",10,11 },{ "Benfica",18,19 } };
	//vários de uma vez
	fwrite(varios, 1, sizeof(Pessoa) * 3, file);
	fclose(file);

	//Carregar do ficheiro
	Pessoa aux;
	file = fopen("out1.txt", "rb");
	while ((fread(&aux, sizeof(aux), 1, file)) != 0)
		printf("%s - %d - %d\n", aux.name, aux.age, aux.height);

	fclose(file);
	}

	//=====================
	//h2
	//=====================
	{
		struct Peca p1 = { 12,"Parafuso" };
		struct Square s1;
		s1.p = &p1;
		s1.x = 1;

		//gravar
		FILE* file2 = fopen("out2.bin", "wb");
		if (!file2) {
			fprintf(stderr, "Erro no acesso ao ficheiro!!\n");
			return 1;
		}
		//apenas um registo
		fwrite(&s1, 1, sizeof(struct Square), file2);


		//varios

		struct Square variosSquares[4];
		variosSquares[0].x = 2;
		variosSquares[0].p = (struct Peca*)malloc(sizeof(struct Peca));
		strcpy(variosSquares[0].p->name,"Benfica");
		variosSquares[0].p->v = 2;

		variosSquares[1].x = 3;
		variosSquares[1].p = (struct Peca*)malloc(sizeof(struct Peca));
		strcpy(variosSquares[1].p->name,"Porto");
		variosSquares[1].p->v = 3;

		for (int i = 0; i < 2; i++) {
			fwrite(&variosSquares[i], 1, sizeof(variosSquares[i]), file2);
		}

		fclose(file2);

		//ler
		struct Square aux2;
		file2 = fopen("out2.txt", "rb");
		//ler para struct
		while ((fread(&aux2, sizeof(aux2), 1, file2)) != 0)
			printf("X=%d - Name=%s - V=%d\n", aux2.x, aux2.p->name, aux2.p->v);

		//ler para array de structs
		int j = 0;
		fseek(file2, 0, SEEK_SET);
		while ((fread(&variosSquares[j], sizeof(struct Square), 1, file2)) != 0) 
		{
			printf("X=%d - Name=%s - V=%d\n", variosSquares[j].x, variosSquares[j].p->name, variosSquares[j].p->v);
			j++;
		}

		fclose(file2);
	}
	return 0;

}

