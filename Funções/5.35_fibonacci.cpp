#include<stdio.h>

int fibonaci(void);

int main(void){
	
	printf("%d", fibonaci() );
	
	return 0;
}

int fibonaci(void){
	
	int numero, valor;
	
	printf("Digite o temo que desaja saber da serie fibonacci: ");
	scanf("%d", &numero);
	
	for(int a=0,b=1, c=2; c <= numero; c++ )
	{
	
		valor= a+b;
		a=b;
		b=valor;
	}
	return valor;
}
