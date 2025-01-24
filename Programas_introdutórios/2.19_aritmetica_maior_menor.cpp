#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("Digite Tres numeros inteiros:");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("Soma:%d.\nMedia:%d.\nProduto:%d\n", a+b+c, (a+b+c)/3, a*b*c);
	
	if(a > b){
		if(a > c) printf("O maior e %d\n", a);
	}
	if(b > c){
		if(b > a) printf("O maior e %d\n", b);
	}
	if(c > a){
		if(c > b) printf("O maior e %d\n", c);
	}
	
	if(a < b){
		if(a < c) printf("O menor e %d\n", a);
	}
	if(b < a){
		if(b < c) printf("O menor e %d\n", b);
	}
	if(c < a){
		if(c < b) printf("O menor e %d\n", c);
	}
	
	return 0;
}
