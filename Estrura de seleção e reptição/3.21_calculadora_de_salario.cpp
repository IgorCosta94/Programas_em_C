#include<stdio.h>

int main(void)
{
	int h_trabalhadas;
	float s_por_hora;
	
	printf("Digite  # de horas trabalhadas (-1 para terminar):");
	scanf("%d", &h_trabalhadas);
	
	while(h_trabalhadas != -1)
	{
		printf("Digite o salario por hora do funcionario (R$00,00):");
		scanf("%f", &s_por_hora);
		
		if( h_trabalhadas <= 40) printf("O salario e de:%.2f\n", h_trabalhadas * s_por_hora);
		else printf("O salario e de:%.2f\n", h_trabalhadas * s_por_hora + (s_por_hora/2));
		
		printf("\nDigite  # de horas trabalhadas (-1 para terminar):");
		scanf("%d", &h_trabalhadas);
	}
	
	return 0;
}
