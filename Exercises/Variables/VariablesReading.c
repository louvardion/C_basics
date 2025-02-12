#include <stdio.h>

int main(){
    char nome[] = "Diego";
    int idade = 24;         
    float altura = 1.90;
    
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f", altura);

    getchar();
    return 0;
}