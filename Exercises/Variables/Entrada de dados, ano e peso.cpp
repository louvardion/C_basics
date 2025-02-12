#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//--variáveis--
	int idade = 0;
	float peso = 0.000;
	//-------------
	
	printf("Digite a sua idade:\n");
		scanf("%d", &idade);
	printf("\n");
	
	printf("Digite o seu peso:\n");
		scanf("%f", &peso);
	printf("\n");
	
	printf("Voce esta com %d anos de idade e pesando %.3f.\n", idade, peso);
		
	system("pause");
}
