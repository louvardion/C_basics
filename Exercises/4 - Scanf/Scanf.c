#include <stdio.h>

int main(){

    char name[50] = "";
    int age = 0;
    float height = 0;

        printf("Please type your name: \n");
            fgets(name, sizeof(name), stdin);
    
        printf("Please type your age: \n");
            scanf("%d", &age);

        printf("Please type your height (0.00m): \n");
            scanf("%f", &height);
            
        while (getchar() != '\n');

        printf("---------Your Information---------");
        printf("Name: %s \n", name);
        printf("Age: %d \n", age);
        printf("Height: %.2f \n", height);

        printf("Press 'Enter' to close window.");
        getchar();

    return 0;
}