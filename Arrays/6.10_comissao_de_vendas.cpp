#include<stdio.h>
#define SIZE 9

int main(void)
{
	int salario[ SIZE ] = {0};
	int contador;
	
	float vendas = 0, calculo;
	
	printf("Informe o valor das vendas do vendedor: ");
	scanf("%f", &vendas);
	
	while( vendas != -1)
	{		
		calculo = 200 + (vendas * 0.09);
		
		if(calculo >= 200 and calculo <= 299) salario[0]++;
		if(calculo >= 300 and calculo <= 399) salario[1]++;
		if(calculo >= 400 and calculo <= 499) salario[2]++;
		if(calculo >= 500 and calculo <= 599) salario[3]++;
		if(calculo >= 600 and calculo <= 699) salario[4]++;
		if(calculo >= 700 and calculo <= 799) salario[5]++;
		if(calculo >= 800 and calculo <= 899) salario[6]++;
		if(calculo >= 900 and calculo <= 999) salario[7]++;
		if(calculo >= 1000) salario[8]++;
		
		printf("Informe o valor das vendas do vendedor: ");
		scanf("%f", &vendas);
	}
	
	for( contador = 0; contador < SIZE; contador++){
		printf("X vendedores receberam um salario no quesito [%d]:  %d\n", contador,  salario[contador]);
	}
		
}
	
	

