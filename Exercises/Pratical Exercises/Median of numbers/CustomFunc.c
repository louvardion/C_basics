#include "CustomFunc.h"
#include <stdio.h>

void cleanBuffer(){
	
	while (getchar() != '\n');
}

float medianOfNumbers(float a[], int b){
	
	float sumResult = 0;
	float median;
	
	for (int i = 0; i < b; i++){
		
		sumResult += a[i];	
	
	}
	
	median = sumResult / b;
	
	return median;	
}


