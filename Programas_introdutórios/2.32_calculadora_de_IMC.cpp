#include<stdio.h>

int main(void)
{
	float imc, altura, peso;
	
	printf("Digite sua altura em metros: ");
	scanf("%f", &altura);
	
	printf("Digite seu peso em quilos: ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	if(imc < 18.5) printf("Seu IMC corresponde a: %.1f, ele esta abaixo do peso\n", imc);
	if(imc >= 18.5 && imc <= 24.9) printf("Seu IMC corresponde a: %.1f, ele esta normal\n", imc);
	if(imc >= 25 && imc <= 29.9 ) printf("Seu IMC corresponde a: %.1f, ele esta acima do peso\n", imc);
	if(imc >= 30) printf("Seu IMC corresponde a: %.1f, ele demonstra que voce esta obeso\n", imc);
	
	return 0;
}
