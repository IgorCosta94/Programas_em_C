#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NAIPES 4
#define FACES 13

void inicializar_baralho(int baralho[][FACES]);
void embaralhar(int baralho[][FACES]);
void exibir_matriz_baralho(int baralho[][FACES]);

int main(void) {
    int baralho[NAIPES][FACES];

    srand(time(NULL));

    inicializar_baralho(baralho);
    
    printf("--- BARALHO ANTES DE EMBARALHAR ---\n");
    exibir_matriz_baralho(baralho);

    embaralhar(baralho);

    printf("\n--- BARALHO DEPOIS DE EMBARALHAR ---\n");
    exibir_matriz_baralho(baralho);

    return 0;
}



void inicializar_baralho(int baralho[][FACES]) {
    int contador = 1;
    for (int i = 0; i < NAIPES; i++) {
        for (int j = 0; j < FACES; j++) {
            baralho[i][j] = contador++;
        }
    }
}

void embaralhar(int baralho[][FACES]) {
    int r2, c2, temp;

    for (int r1 = 0; r1 < NAIPES; r1++) {
        for (int c1 = 0; c1 < FACES; c1++) {
            r2 = rand() % NAIPES;
            c2 = rand() % FACES;

            temp = baralho[r1][c1];
            baralho[r1][c1] = baralho[r2][c2];
            baralho[r2][c2] = temp;
        }
    }
}



void exibir_matriz_baralho(int baralho[][FACES]) {
    printf("\n      ");
    for (int i = 0; i < FACES; i++) printf("%3d  ", i); 
    printf("\n      %s\n", "------------------------------------------------------------------");

    for (int i = 0; i < NAIPES; i++) {
        printf("[%d] |", i); 
        for (int j = 0; j < FACES; j++) {
            printf("%3d |", baralho[i][j]);
        }
        printf("\n");
    }
}