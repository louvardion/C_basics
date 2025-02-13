#include <stdio.h>

int main(){

    int num;

        printf("Enter a number to start the countdown:\n");
            scanf("%d", &num);
            while(getchar() != '\n');
        
        printf("\n\nCountdown:\n");
        
        while(num > 0){
            printf("%d\n", num);
            --num;
        }

        printf("Boom! The countdown has finished!");

        printf("\n\nPress 'Enter' to close window.");
        getchar();

    return 0;
}