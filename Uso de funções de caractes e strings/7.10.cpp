#include<stdio.h>

int main(void){
	
	long int value1=20000, value2;
	
	long int *lptr;
	
	lptr = &value1;
	
	value2=*lptr;
	
	printf("%p", &value1);
	printf("\n%p", lptr);
	return 0;
}
