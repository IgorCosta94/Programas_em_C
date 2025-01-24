#include<stdio.h>

int main(void)
{
	int a;
	
	float b, c, d;
	
	for(a = 1; a <= 3; a++)
	{
		printf("Informe o numero da conta: "); scanf("%d", &b);
		printf("Informe o limite de credito: "); scanf("%f", &c);
		printf("Informe o saldo atual: "); scanf("%f", &d);
		printf("\nNovo limite de credito: %.2f\n",  c = c/2);
		
		if(d > c) printf("\nSeu saldo atual e maior que seu novo limite de credito\n");
	}
	
	return 0;
}
