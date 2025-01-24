#include<stdio.h>

#define SIZE 10

int main(void){
	
	float values[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	float *nptr = values;
	int i;
	
	/*for(a = 0; a < SIZE; a++){
		values[a] = b;
		b += 2; 
	}*/
	
	for(i = 0; i < SIZE; i++){
		printf("%.1f ", values[i]);
		 
	}
	printf("\n");
	for(i = 0; i < SIZE; i++){
		printf("%.1f ", *(nptr + i));
		 
	}
	
	printf("\n");
	for(i = 0; i < SIZE; i++){
		printf("%.1f ", *(values + i));
		 
	}
	
	printf("\n");
	for(i = 0; i < SIZE; i++){
		printf("%.1f ", nptr[i]);
		 
	}
	return 0;
}
