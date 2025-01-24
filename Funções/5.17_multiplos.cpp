#include<stdio.h>

int multiple( int a, int b);

int main(void)
{
	int x, y;
	
	for(int a= 1; a <= 5; a++)
	{
	
		printf("digite dois valores e verifique se o 1 e multiplo do 2: ");
		scanf("%d%d", &x,&y);
	
		printf("%d\n", multiple(x,y));
		
		printf("\n");
	}	
	
	return 0;
}

int multiple( int a, int b){
	
	return a % b == 0 ? 1 : 0 ;
}
