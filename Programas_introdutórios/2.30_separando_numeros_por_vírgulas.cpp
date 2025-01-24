#include<stdio.h>

int main(void)
{
	int a;
	printf("Digite um numero inteiro de cinco digitos:");
	scanf("%d", &a);
	printf("\n%d %d %d %d %d",  (a%100000)/10000, (a%10000)/1000, (a%1000)/100, (a%100)/10, a%10);
	
	return 0;
}
