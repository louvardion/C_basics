#include <stdio.h>
#include <stdlib.h>

//IF e ELSE 

// Se a condição do If for verdadeira, o bloco do if é executado, caso contrário, o bloco do else é executado.
// Sintaxe:
//			if(<condição>){
//				<bloco de comandos>
//			}
//			else{
//				<bloco de comandos>
//			}				


int main(){
	
	float m;
	
	printf("Insira a nota: \n");
		scanf("%f", &m);
	printf("\n");
	
	if(m >= 7.0){
		printf("Aprovado(a)! \n");	
	} else {
		printf("Reprovado(a)! \n");
	}
	
	printf("\n");
	printf("Possibilidade de fazer a recuperacao:");
	printf("\n");
	
	if(m < 4){
		printf("\n -- Sem recuperacao. --\n");
	} else {
		printf("\n -- Possivel Recuperacao. -- \n");
	}
	printf("\n");
	
	system("pause");
	return 0;	
}
