#include<stdio.h>

double potenciacao( double x, double y);

int main(void)
{
	int base =5, expoente=2;
	
	printf("Valor da exponenciacao: %.2f", potenciacao( base, expoente));
	
	return 0;
}

double potenciacao( double x, double y){
	
	int calculo = 1;
	
	for(int a =1; a <= y; a++){
		
		calculo *= x;
	}
	
	return calculo;
}
