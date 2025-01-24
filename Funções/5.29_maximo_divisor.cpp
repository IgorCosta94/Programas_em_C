#include<stdio.h>


int maximo(void);

int main(void){
	
	maximo();
	
	return 0;
}


int maximo(void){
	
	int a, b, maior;
	
	printf("Digite dois numeros inteiros:");
	scanf("%d%d", &a, &b);
	
	if( a >= b ) maior = a;
	else maior= b;
	
	for(int x = maior;  x >= 1; x--){
		if( a%x == 0 and b%x==0) return printf("\nO maximo divisor comum entre %d e %d e: %d\n", a, b, x);
	}
}
