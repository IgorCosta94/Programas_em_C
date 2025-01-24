#include<stdio.h>

int main(void)
{
	int lado, contador = 1, contador_2 = 1;
	
	printf("Informe o lado de um quadrado:");
	scanf("%d", &lado);
	
	while( contador <= lado)
	{
		while(contador_2 <= lado){
			printf("*");
			++contador_2;
		}
		printf("\n");
		++contador;
		contador_2=1;
	}
	return 0;
}
