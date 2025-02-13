#include <stdio.h>
#include <stdlib.h>

//Variáveis

//  -Declaração: <tipo> <nome>;
//      Exemplo:    int idade;

//Regras

//  -Não pode começar com número (mas pode conter números no meio. Tipo "int idade1;" ou "int idade2;);
//  -Não pode ter caracteres especiais;
//  -Não pode espaço;

//Tipos       |  N° de bits  |     Faixa de Representação   |  
//-----------------------------------------------------------
//char(texto) |      8       |        -127 a 127            | 
//int (short) |     16       |    -32.768 a 32.767          |
//int (long)  |     32       |-2.147.483.648 a 2.147.483.647|
//float       |     32       |  3,5 x 10^-38 a 3,4 x 10^38  |
//double      |     64       | 1,7 x 10^-308 a 1,7 x 10^308 |
//-----------------------------------------------------------

//Atribuições
//    -Operador "="
//    -O que está à direita é atribuído à variável que está à esquerda do operador.
//    -Sintaxe: <variável> = <informação>;
//     Exemplo:  int idade = 10;  


//Constantes
//    -Ao contrário das variáveis, seu valor não pode ser alterado e se mantém constante.
//    -Para definir uma constante é só usar "#define <nome> <valor>"
//          Exemplo:

#define texto "Chapa hall's: A nova entrada e saida de dados."

int main(){
	
//	------variáveis------	
	int idade = 0;	
	float altura = 0.0;
	char nome[50] = "";
//  ---------------------	
	
	printf("%s\n", texto);
	printf("\n");
	printf("\n");
	
	
	printf("Digite a idade:\n");
		scanf("%d.", &idade);           //Entrada de idade
	printf("\n");	
//  -------------------------------		
	printf("Digite a altura (em metros):\n");
		scanf("%f.", &altura);	    	//Entrada de altura
	printf("\n");	
//  -------------------------------		
	printf("Digite o seu nome:\n");
		scanf("%s.", &nome);			//Entrada de nome
	printf("\n");	
//  -------------------------------

//        Impressão final dos dados:
	printf("Os dados entregues foram:\n");
	printf("\n");		
	printf("Nome: %s. \n", nome);
	printf("Idade: %d. \n", idade);
	printf("Altura: %.2f m.\n", altura);
	printf("\n");
	
	system("pause");
}
