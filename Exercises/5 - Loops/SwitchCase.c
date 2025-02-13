#include <stdio.h>

int main(){

    int choice, num1, num2;

        printf("Choose an Operation (1: Add, 2: Subtract, 3: Multiply, 4: Divide)\n");
            scanf("%d", &choice);
            while (getchar() != '\n');

        printf("\n\nEnter the first number:\n");
            scanf("%d", &num1);
            while (getchar() != '\n');

        printf("Enter the second number:\n");
            scanf("%d", &num2);
            while(getchar() != '\n');
        
        switch (choice){   
            default:
               printf("Invalid choice! Please select a number between 1 and 4.");
            break;
            
            case 1:
                printf("\n\nResult: %d + %d = %d", num1, num2, num1 + num2);
            break;

            case 2:
                printf("\n\nResult: %d - %d = %d", num1, num2, num1 - num2);
            break;

            case 3:
                printf("\n\nResult: %d * %d = %d", num1, num2, num1 * num2);
            break;

            case 4:
                if (choice == 4 && num1 == 0 || num2 == 0)
                {
                    do {                    
                        printf("Division by 0 is prohibited! Please select other numbers.");
                        
                        printf("\n\nEnter the first number:\n");
                             scanf("%d", &num1);
                             while (getchar() != '\n');

                        printf("Enter the second number:\n");
                            scanf("%d", &num2);
                            while(getchar() != '\n');
                    
                    } while (num1 == 0 || num2 == 0);

                    printf("\n\nResult: %d / %d = %d", num1, num2, num1 / num2);
                }    
            break;
        }

        printf("\n\nPress 'Enter' to close window.");
        getchar();
    
    return 0;
}