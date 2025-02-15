#include <stdio.h>

void imprime1(int vet[], int tam){
	int i;
	for(i + 0; i < tam; i++){
		printf("%d ", vet[i]);
	}
}

void imprime2(int vet[5]){
	int i;
	for(i = 0; i < 5; i++){
		printf("%d ", vet[i]);
	}
}

void imprime3(int *vet, int tam){
	int i;
	for(i = 0; i < tam; i++){
		printf("%d ", vet[i]);
	}
}

int main() {
	int vet[5] = {1, 2, 3, 4, 5};
	
		puts("Primeiro imprime:");
		imprime1(vet, 5);
		
		puts("\nSegundo imprime:");
		imprime2(vet);
		
		puts("\nTerceiro imprime:");
		imprime3(vet, 5);
		
		puts("\n\n Aperte 'Enter' para sair.");
		getchar();
		
	return 0;
		
}
