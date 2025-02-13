#include <stdio.h>

int GlobNum = 10;

float half(a){
    float value = a / 2;
    return value;
}

float sqrt(a){
    float value =  a / a;
    return value;
}

int main(){

        printf("Global variable: %d \n", GlobNum);
        printf("Global's half: %.2f \n", half(GlobNum));
        printf("Global square root: %.2f \n", sqrt(GlobNum));

        printf("\n\n Press 'Enter' to exit.");
        getchar();

    return 0;
}