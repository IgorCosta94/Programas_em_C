#include<stdio.h>

int main(void){
	int a,b,c;
	printf("informe tres valores inteiros:");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a + b > c){
		
		if(a + c > b){
		
			if( b + c > a){
			
				printf("Esses valores podem forma os lados de um triangulo");
			}
		}
	}
	return 0;
	
}
