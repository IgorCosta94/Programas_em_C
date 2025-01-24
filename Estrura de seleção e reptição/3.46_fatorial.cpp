#include<stdio.h>

int main(void)
{
	int fat, arma=0, contador=1, fatorial=1;
	
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
		while(fat !=1){
			fatorial=fatorial* fat;
			--fat;
		}
	}
		
	printf("%d\n", fatorial);
	
	return 0;
}
