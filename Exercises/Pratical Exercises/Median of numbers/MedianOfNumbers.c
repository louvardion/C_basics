#include <stdio.h>
#include "CustomFunc.h"

int main(int argc, char *argv[]){
	
	float result;
	int arrSize;
	
		
		puts("================================================");
		puts("Median Calculator");
		puts("================================================\n");
		puts("Type the quantity of numbers you want to input.");
			scanf("%d", &arrSize);
			cleanBuffer();
		
	float n[arrSize];
	
		puts("\n It's time to pick your numbers!\n");
		
		for (int i = 0; i < arrSize; i++){
			printf("Type your number in postion %d: ", i);
				scanf("%f", &n[i]);
				cleanBuffer();
				printf("\n");
		}
		
		result = medianOfNumbers(n, arrSize);
		
		puts("\n================================================");
		printf("Median: %.3f\n", result);
		puts("================================================\n");
		
		puts("\nPress 'Enter' to exit.");
		getchar();
	
	return 0;	
}
