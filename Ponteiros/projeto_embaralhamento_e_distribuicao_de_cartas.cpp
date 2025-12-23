#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACES 13
#define NAIPES 4
#define CARTAS_MAO 5

typedef struct {
    int faces[CARTAS_MAO];
    int naipes[CARTAS_MAO];
} Mao;

void embaralhar(int deck[][FACES]);
void distribuir(int deck[][FACES], Mao *m, int inicio);
int avaliar_mao(Mao m, const char *nome_jogador);
void exibir_mao(Mao m, const char *faces[], const char *naipes[]);

int main(void) {
    const char *naipes_str[NAIPES] = {"Copas", "Ouros", "Paus", "Espadas"};
    const char *faces_str[FACES] = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei"};

    int baralho[NAIPES][FACES] = {0};
    Mao jogador, computador;
    
    srand(time(NULL));
    embaralhar(baralho);

    distribuir(baralho, &jogador, 1);
    distribuir(baralho, &computador, 6);

    

    printf("--- SUA MAO ---\n");
    exibir_mao(jogador, faces_str, naipes_str);
    int pontos_jogador = avaliar_mao(jogador, "Jogador");

    printf("\n--- MAO DO COMPUTADOR ---\n");
    exibir_mao(computador, faces_str, naipes_str);
    int pontos_computador = avaliar_mao(computador, "Computador");

    printf("\nRESULTADO FINAL: ");
    if (pontos_jogador > pontos_computador) printf("Voce venceu!\n");
    else if (pontos_computador > pontos_jogador) printf("O Computador venceu!\n");
    else printf("Empate técnico!\n");

    return 0;
}

void embaralhar(int deck[][FACES]) {
    for (int carta = 1; carta <= 52; carta++) {
        int r, c;
        do {
            r = rand() % NAIPES;
            c = rand() % FACES;
        } while (deck[r][c] != 0);
        deck[r][c] = carta;
    }
}

void distribuir(int deck[][FACES], Mao *m, int inicio) {
    int cont = 0;
    for (int carta = inicio; cont < CARTAS_MAO; carta++) {
        for (int i = 0; i < NAIPES; i++) {
            for (int j = 0; j < FACES; j++) {
                if (deck[i][j] == carta) {
                    m->faces[cont] = j;
                    m->naipes[cont] = i;
                    cont++;
                }
            }
        }
    }
}



int avaliar_mao(Mao m, const char *nome_jogador) {
    int contagem_faces[FACES] = {0};
    int par = 0, trinca = 0, quadra = 0;

    for (int i = 0; i < CARTAS_MAO; i++) contagem_faces[m.faces[i]]++;

    for (int i = 0; i < FACES; i++) {
        if (contagem_faces[i] == 2) par++;
        if (contagem_faces[i] == 3) trinca++;
        if (contagem_faces[i] == 4) quadra++;
    }

    if (quadra) { printf("%s tem uma QUADRA!\n", nome_jogador); return 7; }
    if (trinca && par) { printf("%s tem um FULL HOUSE!\n", nome_jogador); return 6; }
    if (trinca) { printf("%s tem uma TRINCA!\n", nome_jogador); return 3; }
    if (par == 2) { printf("%s tem DOIS PARES!\n", nome_jogador); return 2; }
    if (par) { printf("%s tem um PAR!\n", nome_jogador); return 1; }

    printf("%s tem apenas a carta mais alta.\n", nome_jogador);
    return 0;
}

void exibir_mao(Mao m, const char *faces[], const char *naipes[]) {
    for (int i = 0; i < CARTAS_MAO; i++) {
        printf("  [%s de %s]\n", faces[m.faces[i]], naipes[m.naipes[i]]);
    }
}