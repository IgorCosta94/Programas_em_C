#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogar_moeda(void);

int main(void) {
    int resultado_lancamento;
    int total_caras = 0;
    int total_coroas = 0;
    int tentativa;

    srand(time(NULL));

    printf("--- Simulando 100 Lancamentos de Moeda ---\n\n");

    for (tentativa = 1; tentativa <= 100; tentativa++) {
        resultado_lancamento = jogar_moeda();

        if (resultado_lancamento == 0) {
            printf("Lancamento %3d: CARA\n", tentativa);
            total_caras++;
        } else {
            printf("Lancamento %3d: COROA\n", tentativa);
            total_coroas++;
        }
    }

    printf("\n--- ESTATISTICAS FINAIS ---\n");
    printf("Total de Caras:  %d\n", total_caras);
    printf("Total de Coroas: %d\n", total_coroas);
    printf("---------------------------\n");

    return 0;
}

int jogar_moeda(void) {
    return rand() % 2;
}
