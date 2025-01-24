#include<stdio.h>

int main(void)
{
	int fat; 
	float fatorial=1.0, arma=1.0;
	
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
	}
	if(fat >0){
		while(fat){
			fatorial=fatorial* fat;
			--fat;
			if(fat == 0) fatorial=1;
			arma = arma + (1.0/fatorial); 
		}
	}
		
	printf("%.2f\n",arma);
	
	return 0;
}
