#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHEGADA 70

void imprime_pista(int t, int l);

int main(void) {
    int pos_t = 1; // Posição da Tartaruga
    int pos_l = 1; // Posição da Lebre
    int movimento;

    srand(time(NULL));

    printf("BANG !!!!!\nE ELES PARTIRAM !!!!!\n");

    while (pos_t < CHEGADA && pos_l < CHEGADA) {
        // --- MOVIMENTO TARTARUGA ---
        movimento = 1 + rand() % 10;
        if (movimento <= 5) pos_t += 3;       // Caminhada rápida
        else if (movimento <= 7) pos_t -= 6;  // Escorregão
        else pos_t += 1;                      // Caminhada lenta

        if (pos_t < 1) pos_t = 1;
        if (pos_t > CHEGADA) pos_t = CHEGADA;

        // --- MOVIMENTO LEBRE ---
        movimento = 1 + rand() % 10;
        if (movimento <= 2) ;                 // Dormiu
        else if (movimento <= 4) pos_l += 9;  // Salto grande
        else if (movimento == 5) pos_l -= 12; // Escorregão grande
        else if (movimento <= 8) pos_l += 1;  // Salto pequeno
        else pos_l -= 2;                      // Escorregão pequeno

        if (pos_l < 1) pos_l = 1;
        if (pos_l > CHEGADA) pos_l = CHEGADA;

        imprime_pista(pos_t, pos_l);
    }

    // --- RESULTADO ---
    if (pos_t >= CHEGADA && pos_l >= CHEGADA)
        printf("\nEmpate!\n");
    else if (pos_t >= CHEGADA)
        printf("\nTARTARUGA VENCEU!!! VALEU!!!\n");
    else
        printf("\nA Lebre venceu. Que pena.\n");

    return 0;
}



void imprime_pista(int t, int l) {
    for (int i = 1; i <= CHEGADA; i++) {
        if (i == t && i == l) printf("OUCH!!!");
        else if (i == t) printf("T");
        else if (i == l) printf("L");
        else printf(" ");
    }
    printf("\n");
}