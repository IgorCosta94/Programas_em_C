#include <stdio.h>

long long calcular_potencia(int base, int expoente);

int main(void) {
    int base_usuario, expoente_usuario;

    printf("--- Calculadora de Potencia Recursiva ---\n");
    printf("Digite a base e o expoente (ex: 2 3): ");
    
    if (scanf("%d %d", &base_usuario, &expoente_usuario) != 2) {
        printf("Erro: Entrada invalida.\n");
        return 1;
    }

    if (expoente_usuario < 0) {
        printf("Erro: Este programa nao suporta expoentes negativos.\n");
    } else {
        printf("\nResultado de %d elevado a %d e: %lld\n", 
                base_usuario, expoente_usuario, calcular_potencia(base_usuario, expoente_usuario));
    }

    return 0;
}

long long calcular_potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    
    if (expoente == 1) {
        return base;
    }

    return base * calcular_potencia(base, expoente - 1);
}
