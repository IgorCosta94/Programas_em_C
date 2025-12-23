#include <stdio.h>

int main(void) {
    float litros_abastecidos, quilometros_dirigidos;
    float total_litros_consumidos = 0.0;
    float total_quilometros_percorridos = 0.0;
    float consumo_atual, consumo_geral;

    while (1) {
        printf("Informe quantos litros abasteceu (-1 para terminar): ");
        scanf("%f", &litros_abastecidos);

        if (litros_abastecidos == -1) {
            break;
        }

        printf("Informe quantos quilometros dirigiu: ");
        scanf("%f", &quilometros_dirigidos);

        total_litros_consumidos += litros_abastecidos;
        total_quilometros_percorridos += quilometros_dirigidos;

        consumo_atual = quilometros_dirigidos / litros_abastecidos;
        printf("O consumo neste abastecimento foi de: %.2f km/l\n\n", consumo_atual);
    }

    if (total_litros_consumidos != 0) {
        consumo_geral = total_quilometros_percorridos / total_litros_consumidos;
        printf("\n--- RELATORIO FINAL ---\n");
        printf("Total de quilometros: %.2f km\n", total_quilometros_percorridos);
        printf("Total de combustivel: %.2f litros\n", total_litros_consumidos);
        printf("Consumo geral medio:  %.2f km/l\n", consumo_geral);
    } else {
        printf("\nNenhum dado foi registrado.\n");
    }

    return 0;
}