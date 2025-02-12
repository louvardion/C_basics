#include <stdio.h>
#include <stdlib.h>

//Operadores matemáticos (+, -, *, /, %)

int main(){

	int A, B, soma, subtr, mult, divis;  //criamos as variáveis numa linha só sem valores declarados.
	
	printf("Operacoes:\n");
	printf("\n");
	
	printf("Digite o primeiro valor:\n");
		scanf("%d", &A);
			printf("\n");
	printf("Digite o segundo valor:\n");
		scanf("%d", &B);
			printf("\n");
		
		soma = A + B; 
		subtr = A - B;
		mult= A * B;
		divis= A / B;
		
	printf("Resultados:\n");
	printf("\n");
	printf("Soma:%d + %d = %d.\n", A, B, soma);
	printf("Subtracao: %d - %d = %d.\n", A, B, subtr);
	printf("Multiplicacao: %d x %d = %d.\n", A, B, mult);
	printf("Divisao: %d / %d = %d.\n", A, B, divis);
	printf("\n");
	
	system("pause");
	return 0;
}
