#include <stdio.h>

int main(void)
{
	float abastecimento, km, a_bast = 0.0, a_km = 0.0;
	
	printf("Informe quantos listros abasteceu(-1 para terminar):");
	scanf("%f", &abastecimento);
	
	while(abastecimento != -1)
	{
		
		printf("Informe quantos quilometros dirigiu: ");
		scanf("%f", &km);
		
		a_bast += abastecimento;
		a_km += km;
		
		printf("O consumo total atual e de %f\n\n", km / abastecimento);
		
		printf("Informe quantos listros abasteceu(-1 para terminar):");
		scanf("%f", &abastecimento);
			
	}
	printf("\nO consumo geral foi de %f", a_km / a_bast);
	
	return 0;
}
