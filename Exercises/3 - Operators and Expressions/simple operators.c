#include <stdio.h>

int main (){

    int a = 24, b = 12;

        printf("A = %d \n", a);
        printf("B = %d \n", b);
        printf("A + B = %d\n", a + b);
        printf("A - B = %d\n", a - b);
        printf("A * B = %d\n", a * b);
        printf("A / B = %d \n\n", a / b);
    
        if (a > b && b > 0) {
            printf("A e maior que B e B e maior que zero\n");
       }

        if (a != b) {
            printf("A nao e igual a B\n");
        }

        printf("Aperte 'Enter' para sair");
       getchar();

    return 0;
}
