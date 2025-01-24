#include<stdio.h>

int main(void)
{
	int a, b;
	
	printf("Digite 2 numeros inteiros:");
	scanf("%d%d", &a, &b);
	
	if(a % b == 0) printf("%d e multiplos de %d", a, b);
	if(a % b != 0) printf("%d nao e multiplo de %d", a, b);
	
	return 0;
}
