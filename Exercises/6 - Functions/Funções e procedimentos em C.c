#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
Fun��es:
Resolver problemas complexos atrav�s da combina��o de solu��es menores.

Sintaxe: 
	<tipo> <nome da fun��o>	(<par�metros>){ 
								<Bloco de comandos>
								return <informa��o>;
	}
	
-As fun��es t�m Identificador (Mesma regra de vari�veis)

-Tipo de retorno (Em C retorno n�o � obrigat�rio).

-Par�metros de Entrada (Nenhum ou v�rios).
*/

//Fun��o "maior", criada para retornar o maior de dois n�meros:
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
	
	printf("\n\nO maior n�mero �: %2.f   \n", m);
	
	system("pause");
	return 0;
}
