#include <stdio.h>
#include <stdlib.h>

//Comandos de controle e desvio: break, continue.

//break encerra por completo um conjunto de repeti��es (por isso � usado no switch);

//continue encerra a itera��o atual e passa para a pr�xima (ou seja, encerra uma repeti��o);


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
