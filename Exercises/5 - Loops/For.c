#include <stdio.h>
#include <stdlib.h>

//for: Similar ao while, inicializa, condiciona e atualiza variáveis. Porém com sintaxe mais complexa
//e tudo embutido no comando.

//Sintaxe:
// for(<inicialização>; <condição>; <incremento>){
//		<bloco de comandos>
//	}

int main(){
	
		int i;
	
		for(i = 1; i <= 10; i++){
			printf("%d. \n", i);
			printf("\n");		
		}

	system("pause");
	return 0;
}
