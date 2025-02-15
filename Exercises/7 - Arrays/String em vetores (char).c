#include <stdio.h>
#include <stdlib.h>

/*
Em C caracteres são um pouco mais abstratos.

Para entender melhor deve-se saber como os dados são dispostos em memória. (revisão da aula de vetores(arrays))

Num vetor que contenha 10 caracteres, terei 11 posições, pois teremos de ter "\0" como última posição, sendo
essa a posição que indica o fim da string.

	Entrada e saída:
	
	scanf(): 								ATENÇÃO: nos casos abaixo, não se faz necessário o uso de "&"
		-Limitações: sintaxe rebuscada		pois a leitura não é feita caracter por vez, mas sim toda de
		-Especificador de formato: %s		uma vez.	
	
	Sintaxe geral:
		scanf("%s", <str>);      >>>>>>>>>>>>>> Desta forma, não existe o uso de espaço. Se o espaço for 
												usado, tudo que estiver à frente será ignorado.		
	
	Sintaxe aprimorada:
		scanf("%<tamanho - 1>[^\n]s", <str>);
			- o "[^\n]" permite a leitura de espaços.
			
	printf():
		-Especificador de formato %s"
	Sintaxe:
		-printf("<texto>", <str1>, <str2>, ..., <strN>);
		
	gets():
		Limitações: Estouro de limite de vetor.
	Sintaxe:
		-gets(<string>); 
		
	fgets():
		-Último caractere sempre fica reservado ao "\0".   >>>>>>> Melhor para utilizar.
		-Entrada padrão: stdin (teclado)
	Sintaxe:
		-fgets(<string>, <tam>, stdin); 

	puts():
		-Imprime uma string diretamente na tela.
		-Não admite variáveis de outros tipos.
	Sintaxe:
		-puts(<string>);
		
	fflush(stdin): CHAMAR SEMPRE DEPOIS DE UMA ENTRADA.
		-Faz com que as próximas leituras de dados não dêem problema.
		-Dá "descarga" no teclado para fazer uma limpeza nos dados.
*/

int main(){
	
	char s[10];
	
	printf("Digite algo (scanf convencional):\n");
		scanf("%s", s);
		fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	printf("Digite algo (scanf aprimorado):\n");
		scanf("%9[^\n]s", s);
		fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	system("pause");
	return 0;
}
