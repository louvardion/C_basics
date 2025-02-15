#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
Funções:
Resolver problemas complexos através da combinação de soluções menores.

Sintaxe: 
	<tipo> <nome da função>	(<parâmetros>){ 
								<Bloco de comandos>
								return <informação>;
	}
	
-As funções têm Identificador (Mesma regra de variáveis)

-Tipo de retorno (Em C retorno não é obrigatório).

-Parâmetros de Entrada (Nenhum ou vários).
*/

//Função "maior", criada para retornar o maior de dois números:
float maior(float num1, float num2){
	if (num1 > num2){
	
		return num1;
	} else {
		return num2;
	}
}


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float x, y, m;
	
	printf("Insira um valor: \n");
	scanf("%f", &x);
		fflush(stdin);
	printf("Insira mais um valor\n");
	scanf("%f", &y);
		fflush(stdin);
	
	m = maior(x, y);
	
	printf("\n\nO maior número é: %2.f   \n", m);
	
	system("pause");
	return 0;
}
