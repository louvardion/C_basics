#include <stdio.h>
#include <stdlib.h>

//do-while
//Inicializa��o, condi��o, atualiza��o de vari�vel, por�m a condi��o � avaliada somente no final.
//O bloco de comandos � executado pelo menos 1x obrigatoriamente.

//Sintaxe:
// do{
//   <bloco de comando>
// }while(<condi��o>);


int main(){
	
	int i=1;
	
	do{
		printf("%d \n", i);
		printf("\n");
		i++;
	}while(i <= 10);
	
	system("pause");
	return 0;
	
}
