#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 20

/*
BIBLIOTECA "string.h"

Sintaxes importantes:
	-strcpy(<destino>, <origem>);
		-Copia o conte�do de uma string para a outra.
	-strcat(<destino>, <origem>);
		-Cola o conte�do de um string na outra.
	-strlen(<string>);
		-Mostra o tamanho da string.
	-strcmp(<string1>, <string2>);
		-Compara se a "string1" � estritamente igual � "string2". Se sim, retorna um "0".

BIBLIOTECA "locale.h"
	-setlocale(LC_ALL,"Portuguese");
		-Permite o uso de acentos no programa.
*/

int main(){


	setlocale(LC_ALL,"Portuguese");	
	
	char origem[N] = {"Ol�, mundo!"};
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
