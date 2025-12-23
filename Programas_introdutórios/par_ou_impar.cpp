#include <stdio.h>

int main(void) {
    int numero_digitado;

    printf("Verificador de Paridade\n");
    printf("Digite um numero inteiro: ");
    
	if (scanf("%d", &numero_digitado) != 1) {
        printf("Erro: Por favor, insira um numero valido.\n");
        return 1;
    }

    if (numero_digitado % 2 == 0) {
        printf("O numero %d e PAR.\n", numero_digitado);
    } 
    else {
        printf("O numero %d e IMPAR.\n", numero_digitado);
    }

    return 0;
}