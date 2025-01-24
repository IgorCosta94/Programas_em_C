#include<stdio.h>

int main(void)
{
	float principal, juros;
	int dias;
	
	printf("Informe o valor principal do emprestimo (-1 para terminar):");
	scanf("%f", &principal);
	
	while( principal != -1)
	{
		printf("Informe a taxa de juros:");
		scanf("%f", &juros);
		
		printf("Informe o prazo do emprestimos:");
		scanf("%d", &dias);
		
		printf("O valor do juros e de:%.2f\n", principal * juros * dias / 365);
		
		printf("\nInforme o valor principal do emprestimo (-1 para terminar):");
		scanf("%f", &principal);
	}
	
	return 0;
}
