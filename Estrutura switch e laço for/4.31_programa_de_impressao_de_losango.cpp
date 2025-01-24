#include<stdio.h>

int main(void)
{
	int x, a, b, c, d;
	
	for(x=1,d=1, c=6; x<=5; x++, c--, d+=2){
		for(a=1; a<=c; a++ ){
			printf(" ");
		
		}
		for(b=1; b<=d;b++){
			printf("*");
		}
		printf("\n");
	}
	for(x=1, d=7, c=3; x<=5; x++, c++, d-=2){
		for(a=1; a<=c; a++ ){
			printf(" ");
		
		}
		
		for(b=1; b<=d; b++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
