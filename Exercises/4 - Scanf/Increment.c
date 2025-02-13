#include <stdio.h>

int main(){

    int num;
    
        printf("Type an integer number:");
            scanf("%d", &num);
            while (getchar() != '\n');

        printf("\n\nNumber entered: %d\n", num);
        printf("After increment: %d\n", ++num);
        printf("After adding 10: %d\n", num += 10);
        printf("After multiplying by 2: %d\n", num *= 2);
        printf("Subtracting by 5: %d\n", num -= 5);
        
        printf("\n\nPress 'Enter' to close the window.");
        getchar();
    
    return 0;
}