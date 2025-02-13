#include <stdio.h>
#include <stdlib.h>

//do-while
//Inicialização, condição, atualização de variável, porém a condição é avaliada somente no final.
//O bloco de comandos é executado pelo menos 1x obrigatoriamente.

//Sintaxe:
// do{
//   <bloco de comando>
// }while(<condição>);


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
