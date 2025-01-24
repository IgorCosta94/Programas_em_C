#include<stdio.h>

int main(void)
{
   int ano_atual=2024, ano_usuario, calculo;
   
   printf("Digite o ano de seu nascimento:");
   scanf("%d", &ano_usuario);
   
	calculo=220-(ano_atual - ano_usuario);
	printf("Frequencia:%d \n", calculo);
	
    return 0;
}
