#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
Matrizes podem ter v�rias dimens�es.
Dois ou mais �ndices para acessar posi��es.

Sintaxe:
<tipo> <nome> [<dim1>] [<dim2>]...[<dimN>];

Sintaxe de Acesso a posi��o:
<nome>[<i1>][<i2>]...[iN]

Sintaxe de inicializa��o:
<declara��o> = { {<l1>}, {<l2>}, ...,{<lN>}};
*/

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int mat[3][3];
	
	mat [0] [0] = 1;
	mat [0] [1] = 2;
	mat [0] [2] = 3;
	
	mat [1] [0] = 4;
	mat [1] [2] = 5;
	mat [1] [3] = 6;
	
	mat [2] [0] = 7;
	mat [2] [1] = 8;
	mat [2] [2] = 9;
	
	printf("Imprimindo a primeira linha: \n");
	printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);
	
	system ("pause");
	return 0;
}
