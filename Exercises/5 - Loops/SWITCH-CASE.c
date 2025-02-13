#include <stdio.h>
#include <stdlib.h>

//SWITCH-CASE

// switch(<var>){
//		  case <v1>:
//				<bloco de comandos>
//				break;
//		  case <v2>:
//				<bloco de comandos>
//				break;
//        ...
//		  case <vN>:
//				<bloco de comandos>
//				break;
//		  default:
//			     <bloco de comandos padrão>
//				 break;

int main (){
	
	int d;
	
	printf("Digite um numero de 1 a 7: \n");
		scanf("%d", &d);
	printf("\n");
	
	switch(d){
		case 1:
			printf("Segunda-feira \n");
		break;
		
		case 2:
			printf("Terça-feira \n");
		break;		
		
		case 3:
			printf("Quarta-feira \n");
		break;		
		
		case 4:
			printf("Quinta-feira \n");
		break;		
		
		case 5:
			printf("Sexta-feira \n");
		break;		
		
		case 6:
			printf("Sabado \n");
		break;		
		
		case 7:
			printf("Domingo \n");
		break;
		
		default:
			printf("Ta querendo inventar uma semana de %d dias?? \n", d);
		break;
	}
	
	system("pause");
	return 0;	
}
