#include <stdio.h>
#include <locale.h>

float multiply(float a, float b) {
    return a * b;
}

int main(){

    setlocale(LC_ALL, "C");

    float num1, num2, result;

        printf ("Enter the first number:\n");
            scanf ("%f", &num1);
            while (getchar() != '\n');
        
        printf ("Enter the second number:\n");
            scanf ("%f", &num2);
            while (getchar() != '\n');

        result = multiply(num1, num2);
        printf("\n\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);

        printf("Press 'Enter' to exit.");
        getchar();

    return 0;
}