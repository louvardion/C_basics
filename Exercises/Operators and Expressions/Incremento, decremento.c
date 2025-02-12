#include <stdio.h>
#include <stdlib.h>

// Operadores aritméticos
// ++, --, =+, =-, =*, =/.

int main(){
	
	int dado = 0;
	
	printf("Escolha um valor:\n");
	printf("\n");
		scanf("%d", &dado);
	printf("\n");
	
	printf("A partir daqui o valor sera incrementado, decrementado a partir das logicas aritmeticas indicadas:\n");
	printf("\n");
	
	dado ++;
	printf("Depois do incremento: %d\n", dado);
	
	dado --;
	printf("Depois do decremento: %d\n", dado);
	
	dado += 3;
	printf("Depois de incremento em 3 unidades: %d\n", dado);
	
	dado -= 2;
	printf("Depois de decremento em 2 unidades %d\n", dado);
	
	dado *= 10;
	printf("Depois de multiplicar por 10: %d\n", dado);
	printf("\n");
	
	printf("Eh isto. ");
	
	system("pause");
	
	return 0;
}
