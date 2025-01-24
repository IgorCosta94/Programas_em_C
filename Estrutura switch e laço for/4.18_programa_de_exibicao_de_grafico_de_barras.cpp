#include<stdio.h>

int main(void)
{
	int a, b, c;
	
	for(a = 1; a <= 5; a++)
	{
		printf("Informe um numero entre 1 e 30: ");
		scanf("%d", &b);
		
		for(c = 1; c <= b; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
