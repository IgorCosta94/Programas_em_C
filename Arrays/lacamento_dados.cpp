#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCAMENTOS 36000

int main(void) {

    int frequencia_somas[13] = {0};
    int dado1, dado2, soma, contador;

    srand(time(NULL));

    for (contador = 1; contador <= LANCAMENTOS; contador++) {
        dado1 = 1 + rand() % 6;
        dado2 = 1 + rand() % 6;
        soma = dado1 + dado2;
        
        frequencia_somas[soma]++;
    }

    printf("%-10s %-10s\n", "Soma", "Frequencia");
    printf("----------------------\n");
    for (soma = 2; soma <= 12; soma++) {
        printf("%-10d %-10d\n", soma, frequencia_somas[soma]);
    }

    printf("\nMatriz de somas possiveis (1-6 x 1-6):\n");
    printf("    1  2  3  4  5  6\n");
    printf("   -----------------\n");
    for (int i = 1; i <= 6; i++) {
        printf("%d |", i);
        for (int j = 1; j <= 6; j++) {
            printf("%2d ", i + j);
        }
        printf("\n");
    }

    return 0;
}

