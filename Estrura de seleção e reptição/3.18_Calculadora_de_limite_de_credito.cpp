#include<stdio.h>

int main(void)
{
	int n_conta;
	float s_inicial, t_encargos, t_credito, l_credito;
	
	printf("Informe o numero da conta (-1 para terminar):");
	scanf("%d", &n_conta);
	
	while( n_conta != -1)
	{
		printf("Informe o saldo incial:");
		scanf("%f", &s_inicial);
		
		printf("Informe o total de encargos:");
		scanf("%f", &t_encargos);
		
		printf("Informe o total de credito:");
		scanf("%f", &t_credito);
		
		printf("Informe o limite de credito:");
		scanf("%f", &l_credito);
		
		if( s_inicial + t_encargos - t_credito > l_credito)
		{
			printf("Conta:%d\n", n_conta);
			printf("Limite de credito:%.2f\n", l_credito);
			printf("Novo_saldo:%.2f\n", s_inicial + t_encargos - t_credito);
			printf("Limite de credito ultrapassado\n");
			
		}
		
		printf("\nInforme o numero da conta (-1 para terminar):");
		scanf("%d", &n_conta);
	}
	
	return 0;
}
