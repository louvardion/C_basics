#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){

	setlocale(LC_ALL,"Portuguese");	
	
	char s1[N] = {"L�gica de"};
	char s2[N] = {" Progama��o!"};
	
	printf("Antes do strcat:\n");
	printf("str1: %s\n", s1);
	printf("str2: %s\n", s2);
	
	strcat(s1,s2);
	
	printf("Depois de strcat:\n");
	printf(s1);
	
	system("pause");
	return 0;

}
