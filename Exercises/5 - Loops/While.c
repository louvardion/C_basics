#include <stdio.h>
#include <stdlib.h>


//while: Inicializa��o de uma ou mais vari�veis de controle.
// -Condi��o de parada: Enquanto for verdadeira, o loop repete.
//Atualiza��o de vari�veis de controle.
// CUIDADO: Loop infinito


int main(){
	
	int i=1;
	
	while(i <= 10){
		printf("%d.\n", i);
		printf("\n");
		i++;
	}
}
