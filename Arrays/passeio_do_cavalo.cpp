#include <stdio.h>

#define TAMANHO 8

void inicializar_tabuleiro(int tabuleiro[][TAMANHO]);
void renderizar_tabuleiro(int tabuleiro[][TAMANHO]);
void realizar_passeio(int tabuleiro[][TAMANHO]);

int main(void) {
    int tabuleiro_xadrez[TAMANHO][TAMANHO];

    inicializar_tabuleiro(tabuleiro_xadrez);
    realizar_passeio(tabuleiro_xadrez);

    return 0;
}

void inicializar_tabuleiro(int tabuleiro[][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void realizar_passeio(int tabuleiro[][TAMANHO]) {
    int linha, coluna, passo;

    printf("--- SIMULADOR: PASSEIO DO CAVALO ---\n");
    printf("Preencha as 64 posicoes do tabuleiro.\n");

    for (passo = 1; passo <= 64; passo++) {
        printf("\nPasso [%d/64] - Digite a linha e coluna (0-7): ", passo);
        
        if (scanf("%d %d", &linha, &coluna) != 2) {
            printf("Entrada invalida! Use números.\n");
            while(getchar() != '\n'); 
            passo--;
            continue;
        }

        if (linha >= 0 && linha < TAMANHO && coluna >= 0 && coluna < TAMANHO) {
            if (tabuleiro[linha][coluna] == 0) {
                tabuleiro[linha][coluna] = passo;
                renderizar_tabuleiro(tabuleiro);
            } else {
                printf("[!] Esta posicao ja foi visitada. Tente outra.\n");
                passo--;
            }
        } else {
            printf("[!] Coordenadas fora do tabuleiro (0 a 7). Tente novamente.\n");
            passo--;
        }
    }
}

void renderizar_tabuleiro(int tabuleiro[][TAMANHO]) {
    printf("\n     0  1  2  3  4  5  6  7\n");
    printf("   ------------------------\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d | ", i);
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 0) {
                printf(" . "); 
            } else {
                printf("%2d ", tabuleiro[i][j]); 
            }
        }
        printf("\n");
    }
}
