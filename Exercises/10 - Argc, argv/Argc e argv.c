#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    
    int i;
        
    if(argc == 1){
            puts("Nao houve mais de um argumento!");
    } else {
            printf("Houveram %d argumentos e foram os seguintes: \n\n", argc);
            for(i = 0; i < argc; i++){
                  printf("%s\n", argv[i]);
                  }
    }       
            puts("\n\nAperte 'Enter' para sair.");
            getchar();
    
    return 0;
}
