#include <stdio.h>
#include <stdlib.h>

//Comandos de controle e desvio: break, continue.

//break encerra por completo um conjunto de repetições (por isso é usado no switch);

//continue encerra a iteração atual e passa para a próxima (ou seja, encerra uma repetição);


//Exemplo de break
/*int main(){
	
	int i;
	
	for(i = 1; i <= 10; i++){
			
			printf("%d \n", i);
			
			if (i == 7){
				break;
			}		
	}
	
	system("pause");
	return 0;
	
}*/

//Exemplo de continue
int main(){
	
	int i;
	
	for(i = 1; i <= 10; i++){
			
			if (i == 7){
				continue;
			}
			
			printf("%d \n", i);		
	}
	
	system("pause");
	return 0;
	
}
