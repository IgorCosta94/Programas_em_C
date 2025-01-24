#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
	srand(time(NULL));
	
	char number[10];
	char numero;
	int y,acumulador=0;
	
	for(int a=0; a<10;a++){
		
		numero=1+rand()%1000;  number[a]=numero;
		
		printf("Numero:");	
		
		y=printf("%d",number[a]);
		
		acumulador+=y;
		
		
		
		printf("  Acumulado:%d\n",acumulador);
	}
	
	printf("Total de caracteres acumulados: %d\n",acumulador);
	return 0;	
}
