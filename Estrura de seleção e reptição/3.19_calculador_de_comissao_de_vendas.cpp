#include <stdio.h>

int main(void)
{
	float v_brutas;
	
	printf("Informa a venda em reais(-1 para terminar):");
	scanf("%f", &v_brutas);
	
	while( v_brutas != -1)
	{
		printf("O pagamento e de: %.2f\n", 200 + (v_brutas * 0.09));
		
		printf("\nInforma a venda em reais(-1 para terminar):");
		scanf("%f", &v_brutas);
	}
	
	return 0;
}
