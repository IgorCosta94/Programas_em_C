#include<stdio.h>

int main(void){
	int numero, horas;
	float salario_ge, salario_th, salario_un, vendas;
	
	
	do{
		printf("\nDigite o codigo do trabalhador: ");
		scanf("%d", &numero);
		
		switch(numero){
			case 1:
				printf("\nInforma o salario do gerente: ");
				scanf("%f", &salario_ge);
				break;
				
			case 2:
				printf("\ninforme o salario do trabalhado por hora: ");
				scanf("%f", &salario_th);
				printf("informe a quantidade de horas trabalhadas: ");
				scanf("%d", &horas);
				
				if(horas <= 40) {
					printf("\nValor do salario para ate 40 horas de trabalho: %.2f\n", salario_th);
				}
				else {
					printf("\nValor do salario para mais de 40 horas de trabalho: %.2f\n", salario_th + (horas * 1.5));
					}
				break;
				
			case 3:
				printf("\ninforme o valor das vendas do trabalhado comissionado: ");
				scanf("%f", &vendas);
				printf("Salario trabalhador comissionado: %.2f\n", 250.00 + (5.7 * vendas));
				break;
				
			case 4: 
				printf("\ninforme do do trabalhado por unidade: ");
				scanf("%f", &salario_un);
				printf("salario trabalhador por unidade: %.2f", salario_un);
				break;
			
			default:
				printf("Codigo incorreto!!Digite um codico valido!!!\n");
				break;
		}
	}while(numero != -1);
	
	return 0;
}
