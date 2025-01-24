#include<stdio.h>

void asterisco( int lado );

int main(void)
{
	int side;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &side);
	
	asterisco(side);
}

void asterisco( int lado )
{
	for(int x = 1; x <= lado; x++){
		
		for(int y = 1; y <= lado; y++){
			
			printf("*");
			
		}
		
		printf("\n");
	}
}
