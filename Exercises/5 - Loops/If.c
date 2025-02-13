#include <stdio.h>
#include <stdlib.h>

// Sintaxe do IF
// if(<condição>){ <bloco de comandos> }

//Operadores relacionais: >(maior), <(menor), >=(maior ou igual), <=(menor ou igual), ==(igual), !=(diferente).

int main(){
	
	float m;
	
	printf("Insira a nota:\n");
		scanf("%f", &m);
	printf("\n");
	
	if (m >= 7.0){
		printf("Aprovado(a)!");
	}
	
	system("pause");
	return 0;
}
