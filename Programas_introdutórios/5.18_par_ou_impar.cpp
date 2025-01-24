#include<stdio.h>

int even( int x);

int main(void)
{
	int numero;
	
	for(int a = 1; a <= 5; a++)
	{
		printf("Informe um numero inteiro: ");
		scanf("%d", &numero);
		
		printf("\n1 caso o numero seja par ou 0 para impar: %d\n", even( numero ) );
		
		printf("\n");
	}
	return 0;
}

int even( int x )
{
	return x % 2 == 0 ? 1 : 0;  
}
