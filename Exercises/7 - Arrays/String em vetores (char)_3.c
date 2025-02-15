#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 20

/*
BIBLIOTECA "string.h"

Sintaxes importantes:
	-strcpy(<destino>, <origem>);
		-Copia o conteúdo de uma string para a outra.
	-strcat(<destino>, <origem>);
		-Cola o conteúdo de um string na outra.
	-strlen(<string>);
		-Mostra o tamanho da string.
	-strcmp(<string1>, <string2>);
		-Compara se a "string1" é estritamente igual à "string2". Se sim, retorna um "0".

BIBLIOTECA "locale.h"
	-setlocale(LC_ALL,"Portuguese");
		-Permite o uso de acentos no programa.
*/

int main(){


	setlocale(LC_ALL,"Portuguese");	
	
	char origem[N] = {"Olá, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino,origem);
	
	printf("Depois de strcpy:\n");
	puts(origem);
	puts(destino);
	
	system("pause");
	return 0;

}
