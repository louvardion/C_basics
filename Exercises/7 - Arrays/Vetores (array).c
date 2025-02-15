#include <stdio.h>
#include <stdlib.h>

/* 	Vetores (arrays)
      -São estruturas de dados unidimensionais.
      -Índice único controla as posições.
	
	Sintaxe:
		- <tipo> <nome>[<tamanho>];
		
		
 É como se fosse (não de fato) uma forma de variável mais poderosa, que ao invés de guardar apenas
 um dado que vai sendo alterado no decorrer do programa, pode conter vários dados que são buscados 
 por índice.
 
	Manipulação de Vetores
	
		-Não é possível acessar o um vetor inteiro, por isso acessa-se por posição:
			<nome>[<índice>]


	Lista de Inicialização: Ela preenche o vetor todo de uma vez ao declarar, e só nesse momento:
	
	<tipo> <nome>[<tamanho>] = {<v1>, <v2>, <v3>, ..., <vnN};
 */

int main(){
	
		int v[5];
		
		float m;
		
		v[0] = 50;
		v[1] = 60;
		v[2] = 70;
		v[3] = 80;
		v[4] = 90;

		m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;
			
		printf("resultado %.2f \n", m);
		
	system("pause");
	return 0;
}
