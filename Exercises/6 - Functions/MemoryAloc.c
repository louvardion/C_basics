#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    
        printf("Please type the numbers you want to save:");
            scanf("%d", &num);
            while(getchar() != '\n');

        int *ptr = (int*)malloc(num * sizeof(int));
        
        if (ptr == NULL) {
            printf("Erro: Memória insuficiente!\n");
            return 1;
        }

        printf("Digite %d números: \n", num);
        for(int i = 0; i < num; i++){
            printf("Número %d: ", i + 1);
            scanf("%d", &ptr[i]);
        }

        printf("Os números digitados foram: ");
        for(int i = 0; i < num; i++){
            printf("%d", ptr[i]);
        }
        printf("\n");

        free(ptr);
        ptr = NULL;

    return 0;
}
    
    
    
    
    
    

