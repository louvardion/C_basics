#include <stdio.h>
#include <stdlib.h>

/* 	Vetores (arrays)
      -S�o estruturas de dados unidimensionais.
      -�ndice �nico controla as posi��es.
	
	Sintaxe:
		- <tipo> <nome>[<tamanho>];
		
		
 � como se fosse (n�o de fato) uma forma de vari�vel mais poderosa, que ao inv�s de guardar apenas
 um dado que vai sendo alterado no decorrer do programa, pode conter v�rios dados que s�o buscados 
 por �ndice.
 
	Manipula��o de Vetores
	
		-N�o � poss�vel acessar o um vetor inteiro, por isso acessa-se por posi��o:
			<nome>[<�ndice>]


	Lista de Inicializa��o: Ela preenche o vetor todo de uma vez ao declarar, e s� nesse momento:
	
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
