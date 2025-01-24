#include<stdio.h>

int main(void)
{
	int contador=1, numero, maior;
	
	while( contador <= 10 )
	{
		printf("Digite um numero inteiro:");
		scanf("%d", &numero);
		
		if( numero > maior) maior = numero;
		
		++contador;
	}
	
	printf("\nO maior e %d", maior);
	return 0;
}
