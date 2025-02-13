#include <stdio.h>
#include <stdlib.h>


//while: Inicialização de uma ou mais variáveis de controle.
// -Condição de parada: Enquanto for verdadeira, o loop repete.
//Atualização de variáveis de controle.
// CUIDADO: Loop infinito


int main(){
	
	int i=1;
	
	while(i <= 10){
		printf("%d.\n", i);
		printf("\n");
		i++;
	}
}
