#include<stdio.h>

int main(void)
{
	int N, maior=0, seg_maior=0, contador=1;
	
	while( contador <= 10)
	{
		printf("Digite um numero inteiro:");
		scanf("%d", &N);
		
		if( N > maior) 
		{
			maior = N;
		}
		else if(N > seg_maior){
		
			seg_maior=N;
		}
		++contador;
	}
	
	printf("Primeiro maior e %d\nSegundo maior e %d", maior, seg_maior);
	
	return 0;
}
