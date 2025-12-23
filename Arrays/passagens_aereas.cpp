#include <stdio.h>

#define TOTAL_ASSENTOS 11 

void processar_reserva(int mapa[], int classe_escolhida);
void imprimir_bilhete(int numero_assento, int classe);

int main(void) {
    int mapa_assentos[TOTAL_ASSENTOS] = { 0 }; 
    int tipo_classe;

    printf("--- SISTEMA DE RESERVAS AEREO ---\n");

    while (1) {
        printf("\nPor favor, digite:\n");
        printf("1 - Primeira Classe\n");
        printf("2 - Classe Economica\n");
        printf("-1 - Encerrar sistema\n");
        printf("Escolha: ");
        scanf("%d", &tipo_classe);

        if (tipo_classe == -1) break;

        if (tipo_classe == 1 || tipo_classe == 2) {
            processar_reserva(mapa_assentos, tipo_classe);
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    printf("\nSistema encerrado. Tenha um bom dia!\n");
    return 0;
}

void processar_reserva(int mapa[], int classe) {
    static int proximo_primeira = 1;  
    static int proximo_economica = 6; 
    int resposta_troca;

    if (classe == 1) {
        if (proximo_primeira <= 5) {
            mapa[proximo_primeira] = 1; 
            imprimir_bilhete(proximo_primeira, 1);
            proximo_primeira++;
        } else {
            printf("\n--- Primeira Classe Lotada ---\n");
            printf("Aceita ser realocado na Classe Economica? (1-Sim / 2-Nao): ");
            scanf("%d", &resposta_troca);

            if (resposta_troca == 1) {
                processar_reserva(mapa, 2); 
            } else {
                printf("O proximo voo sai em 3 horas.\n");
            }
        }
    } 
    else if (classe == 2) {
        if (proximo_economica <= 10) {
            mapa[proximo_economica] = 1;
            imprimir_bilhete(proximo_economica, 2);
            proximo_economica++;
        } else {
            printf("\n--- Classe Economica Lotada ---\n");
            printf("Aceita ser realocado na Primeira Classe? (1-Sim / 2-Nao): ");
            scanf("%d", &resposta_troca);

            if (resposta_troca == 1) {
                processar_reserva(mapa, 1);
            } else {
                printf("O proximo voo sai em 3 horas.\n");
            }
        }
    }

    if (proximo_primeira > 5 && proximo_economica > 10) {
        printf("\n!!! ATENCAO: Voo totalmente lotado !!!\n");
    }
}

void imprimir_bilhete(int numero_assento, int classe) {
    printf("\n====================================");
    printf("\n       BILHETE DE EMBARQUE         ");
    printf("\nAssento: %d", numero_assento);
    printf("\nClasse : %s", (classe == 1) ? "Primeira Classe" : "Economica");
    printf("\n====================================\n");
}



























