#include<stdio.h>

int main(void){
	int a[50];
	int *ptr= a;
	
	printf("D=%d\n", ptr);
	printf("I=%i\n", ptr);
	printf("O=%o\n", ptr);
	printf("U=%u\n", ptr);
	printf("X=%x\n", ptr);
	printf("H=%hd\n", ptr);
	
	return 0;
}
