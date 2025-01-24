#include<stdio.h>

float calcular_taxas( float tempo);

int main(void){
	float horas;
	float total = 0.0, tempo_total = 0.0;
	
	printf("Informe quantas horas o veiculo permaneceu no estacionamento: ");
	scanf("%f", &horas);
	
	while( horas and horas <= 24.00)
	{
		total += calcular_taxas( horas);
		
		tempo_total += horas;
		
		printf("\nInforme quantas horas o veiculo permaneceu no estacionamento: ");
		scanf("%f", &horas);
		
	}
	printf("\nTOTAL\t%.1f\t%.2f", tempo_total, total);
	
	return 0;
}

float calcular_taxas( float tempo){
	static int contador = 0;
	
	float taxa = 2.00, soma = 0.0, b;
	
	printf("\nCarro\tHoras\tTaxa\n");
	
	if( tempo <= 3.00){
		printf("%d\t%.1f\t%.2f\n", ++contador, tempo, taxa);
		return taxa;
	}
	
	if( tempo >= 4.00 and tempo < 7.00){
		
		for(int x = 4; x <= tempo; x++){
			soma += 0.50;
		}
		
		printf("%d\t%.1f\t%.2f\n", ++contador, tempo, taxa+soma);
		return taxa + soma;
	}
	
	if(tempo > 7.00 || tempo < 24){
		b = 7.00;
		for(int x = 4; x <= b; x++){
			soma += 0.50;
		}
		
		printf("%d\t%.1f\t%.2f\n", ++contador, tempo, taxa+soma);
		return taxa + soma;
	}
	
	if( tempo == 24.0){
		printf("%d\t%.1f\t%.2f\n", ++contador, tempo, 10.00);
		return 10;
	}	
}
