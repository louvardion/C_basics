#include <stdio.h>
#include <stdlib.h>

//Vari�veis

//  -Declara��o: <tipo> <nome>;
//      Exemplo:    int idade;

//Regras

//  -N�o pode come�ar com n�mero (mas pode conter n�meros no meio. Tipo "int idade1;" ou "int idade2;);
//  -N�o pode ter caracteres especiais;
//  -N�o pode espa�o;

//Tipos       |  N� de bits  |     Faixa de Representa��o   |  
//-----------------------------------------------------------
//char(texto) |      8       |        -127 a 127            | 
//int (short) |     16       |    -32.768 a 32.767          |
//int (long)  |     32       |-2.147.483.648 a 2.147.483.647|
//float       |     32       |  3,5 x 10^-38 a 3,4 x 10^38  |
//double      |     64       | 1,7 x 10^-308 a 1,7 x 10^308 |
//-----------------------------------------------------------

//Atribui��es
//    -Operador "="
//    -O que est� � direita � atribu�do � vari�vel que est� � esquerda do operador.
//    -Sintaxe: <vari�vel> = <informa��o>;
//     Exemplo:  int idade = 10;  


//Constantes
//    -Ao contr�rio das vari�veis, seu valor n�o pode ser alterado e se mant�m constante.
//    -Para definir uma constante � s� usar "#define <nome> <valor>"
//          Exemplo:

#define texto "Chapa hall's: A nova entrada e saida de dados."

int main(){
	
//	------vari�veis------	
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

//        Impress�o final dos dados:
	printf("Os dados entregues foram:\n");
	printf("\n");		
	printf("Nome: %s. \n", nome);
	printf("Idade: %d. \n", idade);
	printf("Altura: %.2f m.\n", altura);
	printf("\n");
	
	system("pause");
}
