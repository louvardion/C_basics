#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){

	setlocale(LC_ALL,"Portuguese");	
	
	char hardText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
	
	printf("Digite a senha para sair:\n");
	gets(senha_usr);
	fflush(stdin);
	
	ok = strcmp(hardText, senha_usr);
	
	do{
	
		if (ok == 0){
			printf("\n\nSaindo...\n\n");
			break;
		}
		
		printf("===Senha incorreta===.\n\n");
		printf("Tente novamente: \n");
			gets(senha_usr);
			fflush(stdin);
		
		ok = strcmp(hardText, senha_usr);
		
		if (ok == 0){
			printf("\n\nSaindo...\n\n");
			break;
		}
		
	}while(ok != 0);

	system("pause");
	return 0;
}
