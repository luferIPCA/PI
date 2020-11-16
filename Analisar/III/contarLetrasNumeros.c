/*****************************************************************//**
 * \file   contarLetrasNumeros.c
 * \brief
 * This program prompts a user to enter a piece of text and\ncalculates the number of alphabetic letters, lowercase letters, \nvowels and words in that piece of text.
 * \see
 * \author lufer https://stackoverflow.com/questions/39738163/usage-of-getchar-and-fflushstdin
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <ctype.h>		//isalpha(); islower(); etc...

#pragma warning (disable: 4996)     //ignorar _CRT_SECURE_NO_WARNINGS

//Exercícioi: Passar a contar também digitos?

int main(void)
{

	char ch, repeat;
	int numVowel = 0, numLower = 0, numAlpha = 0, numWords = 0, inWord = 0;

	//Descrição
	printf("This program prompts a user to enter a piece of text and\ncalculates the number of alphabetic letters, lowercase letters, \nvowels and words in that piece of text.\n\n");


	do
	{
		printf("Type the text here (hit \"Enter\" to end): ");

		while ((ch = getchar()) != '\n')        
		{
			if (ch == ' ')
				inWord = 0;

			else if (inWord == 0 && isalpha(ch))
			{
				inWord = 1;
				numWords += 1;
			}

			if (isalpha(ch))
				numAlpha += 1;

			if (islower(ch))
				numLower += 1;

			switch (ch)
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': numVowel += 1;
				break;
			}
		}

		printf("\nNumber of alphabetical letters: %-4d\n", numAlpha);
		printf("Number of lowercase letters   : %-4d\n", numLower);
		printf("Number of vowels              : %-4d\n", numVowel);
		printf("Number of words               : %-4d\n\n", numWords);

		do
		{
			printf("Do you want to try again? (Y/N): ");

			scanf("%c", &repeat);
			repeat = toupper(repeat);
			if (repeat != 'Y' && repeat != 'N')
				printf("Invalid answer. Please enter 'Y' or 'N'.\n\n");
			fflush(stdin);                              

		} while (repeat != 'N' && repeat != 'Y');

		printf("\n");
		// limpa o standard input  (buffer do teclado) 
		while ((getchar()) != '\n');	//elimina o '\n'
		numVowel = 0, numLower = 0, numAlpha = 0, numWords = 0, inWord = 0;
	} while (repeat == 'Y');


	return 0;
}