#include <stdio.h>

int main(void){
	int contador = 1, numero, armazenar, mult=1, soma=0;
	printf("informe um numero: ");
	scanf("%d", &numero);
	
	while(contador<=4){
		armazenar=numero%10;
		printf("Resto:%d\n", armazenar);
		numero/=10;
		printf("Divisao inteira:%d\n", numero);
		soma=soma+(armazenar*mult);
		mult+=2;
		printf("soma:%d\n\n", soma);
		++contador;
	}
	
	return 0;
	
}
