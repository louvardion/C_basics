#include <stdio.h>
#include <stdlib.h>

//Conjun��o ("e" l�gico (and)): &&
//	-� verdade se tudo for verdade (true)
//Disjun��o ("ou" l�gico (or)): ||
//	-� verdade se ao menos um for verdade (true, false)
//Invers�o (nega��o - "n�o" l�gico (not)): !
//	-� verdade quando o operando � falso. � falso quando o operando � verdadeiro. Basicamente inverte os valores. (false)

//AND, OR, NOT


int main(){
	
	float m;
	
	printf("Insira a nota: \n");
		scanf("%f", &m);
	printf("\n ");
	
	if (m >= 4.0 && m < 7.0){
		printf("Tem direito a exame! \n");
	}	
	
	system("pause");
	return 0;
}
