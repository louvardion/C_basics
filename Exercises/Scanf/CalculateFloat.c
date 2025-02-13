#include <stdio.h>

int main (){
    
    float num1, num2;

        printf("Please type your first float number: \n");
            scanf("%f", &num1);
            while (getchar() != '\n');

        printf("Please type your second float number: \n");
            scanf("%f", &num2);
            while (getchar() != '\n');
        
        printf("-------Here are your results!------- \n");
        printf("%.2f + %.2f = %.2f \n",num1, num2, num1 + num2);
        printf("%.2f - %.2f = %.2f \n", num1, num2, num1 - num2);
        printf("%.2f * %.2f = %.2f \n", num1, num2, num1 * num2);
    
        if(num1 == 0 || num2 == 0){
            printf("Division by 0 is prohibited!");
        } else{
            printf("%.2f / %.2f = %.2f \n", num1, num2, num1 / num2);        
        }

        printf("--------------------------------------");

        printf("\n\n Press 'Enter' to close the window");
        getchar();
    
    return 0;
}       