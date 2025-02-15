#include <stdio.h>

#define TAM 5


void imprime(int m[][TAM], int tam){
	int i, j;
	for(i = 0; i < tam; i++){
		for(j = 0; j < TAM; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int mat[4][TAM] = {{0, 1, 2, 3, 4}, 
					   {5, 6, 7, 8, 9},
					   {10, 11, 12, 13, 14},
					   {15, 16, 17, 18, 19}};
	
		puts("Impressao de matriz: ");
		imprime(mat, 4);
	
		puts("\n\nAperte 'Enter' para sair.");
		getchar();
			
	return 0;
}
