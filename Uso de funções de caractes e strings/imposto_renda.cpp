#include<stdio.h>

int main(void){
	float salario;
	int conv;
	scanf("%f", &salario);
	
	if(salario > 0.00 && salario <= 2000.00){
		printf("Isento\n");
	}
	else if(salario >=2000.01 && salario <= 3000.00){
		conv = salario - 2000.00;
		
		salario = (conv *0.08);
		
		printf("R$ %.2f\n",salario );
	}
	else if(salario >=3000.01 && salario <= 4500.00){
		
		conv = salario - 3000.00;
		
		salario = salario - 2000.01 - conv;
		
		salario = (salario *0.08 ) + (conv * 0.18);
		
		printf("R$ %.2f\n",salario );
	}
	else if(salario > 4500.00){
		conv = salario - 4500.00;
		
		salario = salario - 3000.01 - conv;
		
		salario = ( 1000 * 0.08 ) + (salario * 0.18) + (conv * 0.28) ;
		printf("R$ %.2f\n",salario );
	}

	return 0;
}
