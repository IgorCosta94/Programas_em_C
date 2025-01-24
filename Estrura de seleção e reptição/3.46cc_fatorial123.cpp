#include<stdio.h>

int main(void)
{
	int fat, contador=1; 
	float fatorial=1.0, arma=1.0, x=2.0, exp=1.0,b=1.0;
	
	printf("informe um valor inteiro nao negativo");
	scanf("%d", &fat);
	
	if(fat<0){
		while(1){
			printf("informe um valor inteiro nao negativo");
			scanf("%d", &fat);
			
			if(fat > 0) break;
		}
	}
	
	if(fat<0){
		fatorial=1;
		x=1.0;
	}
	
	if(fat >0){
		while(b<=fat){
			exp=exp*x;
			
			fatorial = fatorial*b;
			
			if(fat == 0) fatorial=1;
			
			arma = arma + (exp/fatorial);
			
			++b;
		}
	}
		
	printf("\n%.2f\n",arma);
	
	return 0;
}
