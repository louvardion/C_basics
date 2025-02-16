#include <stdio.h> 
#include <locale.h>

float maior(float n1, float n2); /*Declaro o protótipo da função aqui sem o bloco de código para 
                                  o programa saber que existe uma função com esse nome.*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;

            puts("Escreva o primeiro numero:");
                scanf("%f", &a);
                while(getchar() != '\n');

            puts("Escreva o segundo numero:");
                scanf("%f", &b);
                while(getchar() != '\n');

            c = maior(a, b);

            printf("Maior: %.2f", c);

            puts("\n\nAperte 'Enter' para sair.");
            getchar();

    return 0;
}

float maior(float num1, float num2){  //Terminar a função aqui em baixo.
    if (num1 < num2){
        return num2;
    } else {
        return num1;
    }
}