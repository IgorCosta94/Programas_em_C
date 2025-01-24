#include <stdio.h>

int main(void)
{
	int a;
	
	printf("Digite um numeros inteiro: ");
	scanf("%d", &a);
	
	if(a % 2 == 0) printf("O numero %d e par", a);
	if(a % 2 == 1) printf("O numero %d e impar", a);
	
	return 0;
}
