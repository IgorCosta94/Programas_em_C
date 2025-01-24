#include <stdio.h>

int main(void){
	int contador = 0, numero, armazenar, mult=1, soma=0;
	printf("informe um numero: ");
	scanf("%d", &numero);
	
	while(numero){
		armazenar=numero%10;
		numero/=10;
		if(armazenar==7)++contador;
	}
	printf("VALOR: %d\n", contador);
	return 0;
	
}
