#include <stdio.h>
#include <stdlib.h>

//Conjunção ("e" lógico (and)): &&
//	-É verdade se tudo for verdade (true)
//Disjunção ("ou" lógico (or)): ||
//	-É verdade se ao menos um for verdade (true, false)
//Inversão (negação - "não" lógico (not)): !
//	-É verdade quando o operando é falso. É falso quando o operando é verdadeiro. Basicamente inverte os valores. (false)

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
