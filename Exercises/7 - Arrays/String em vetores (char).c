#include <stdio.h>
#include <stdlib.h>

/*
Em C caracteres s�o um pouco mais abstratos.

Para entender melhor deve-se saber como os dados s�o dispostos em mem�ria. (revis�o da aula de vetores(arrays))

Num vetor que contenha 10 caracteres, terei 11 posi��es, pois teremos de ter "\0" como �ltima posi��o, sendo
essa a posi��o que indica o fim da string.

	Entrada e sa�da:
	
	scanf(): 								ATEN��O: nos casos abaixo, n�o se faz necess�rio o uso de "&"
		-Limita��es: sintaxe rebuscada		pois a leitura n�o � feita caracter por vez, mas sim toda de
		-Especificador de formato: %s		uma vez.	
	
	Sintaxe geral:
		scanf("%s", <str>);      >>>>>>>>>>>>>> Desta forma, n�o existe o uso de espa�o. Se o espa�o for 
												usado, tudo que estiver � frente ser� ignorado.		
	
	Sintaxe aprimorada:
		scanf("%<tamanho - 1>[^\n]s", <str>);
			- o "[^\n]" permite a leitura de espa�os.
			
	printf():
		-Especificador de formato %s"
	Sintaxe:
		-printf("<texto>", <str1>, <str2>, ..., <strN>);
		
	gets():
		Limita��es: Estouro de limite de vetor.
	Sintaxe:
		-gets(<string>); 
		
	fgets():
		-�ltimo caractere sempre fica reservado ao "\0".   >>>>>>> Melhor para utilizar.
		-Entrada padr�o: stdin (teclado)
	Sintaxe:
		-fgets(<string>, <tam>, stdin); 

	puts():
		-Imprime uma string diretamente na tela.
		-N�o admite vari�veis de outros tipos.
	Sintaxe:
		-puts(<string>);
		
	fflush(stdin): CHAMAR SEMPRE DEPOIS DE UMA ENTRADA.
		-Faz com que as pr�ximas leituras de dados n�o d�em problema.
		-D� "descarga" no teclado para fazer uma limpeza nos dados.
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
