#include<stdio.h>

#define SIZE 5

int main(void){
	
	unsigned int values[SIZE];
	unsigned int *vptr;
	int a, b = 2;
	
	for(a = 0; a < SIZE; a++){
		values[a] = b;
		b += 2; 
	}
	
	//for(a = 0; a < SIZE; a++){
		printf("%p ", &b);
		 
	//}
	
	return 0;
}
