#include<stdio.h>

int main(void)
{
	int populacao=80000000, contador=1;
	float taxa = 1.1; 
	
	while(contador<=5){
		printf("Taxa de crescimento apos %d e igual a %d \n", contador++, populacao = populacao * 1.1);
	}
	
	return 0;
}   
