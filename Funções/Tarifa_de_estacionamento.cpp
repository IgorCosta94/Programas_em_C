#include <stdio.h>
#include <math.h> 

float calcular_taxas_estacionamento(float horas);

int main(void) {
    float horas_entrada;
    float acumulador_horas = 0.0, acumulador_taxas = 0.0;

    printf("--- Sistema de Controle de Estacionamento ---\n");
    printf("Informe as horas (0 para encerrar, maximo 24.0):\n");

    while (1) {
        printf("\nVeiculo: ");
        if (scanf("%f", &horas_entrada) != 1 || horas_entrada <= 0) {
            break; 
        }

        if (horas_entrada > 24.0) {
            printf("[ERRO] Tempo maximo permitido e 24 horas.\n");
            continue;
        }

        float taxa_atual = calcular_taxas_estacionamento(horas_entrada);
        
        acumulador_horas += horas_entrada;
        acumulador_taxas += taxa_atual;

        printf("%-10s %-10s %-10s\n", "Carro", "Horas", "Taxa");
        printf("%-10d %-10.1f %-10.2f\n", 1, horas_entrada, taxa_atual);
    }

    if (acumulador_horas > 0) {
        printf("\n%-10s %-10.1f %-10.2f\n", "TOTAL", acumulador_horas, acumulador_taxas);
    }

    return 0;
}

float calcular_taxas_estacionamento(float horas) {
    float valor_taxa = 2.00; 

    if (horas > 3.0) {
        valor_taxa += ceil(horas - 3.0) * 0.50;
    }

    if (valor_taxa > 10.00) {
        valor_taxa = 10.00;
    }

    return valor_taxa;
}