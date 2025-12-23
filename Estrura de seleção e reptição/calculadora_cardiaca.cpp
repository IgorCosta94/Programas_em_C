#include <stdio.h>

int main(void) {
    const int ANO_ATUAL = 2024;
    int ano_nascimento, idade_usuario, frequencia_maxima_estimada;

    printf("--- Simulador de Frequencia Cardiaca Maxima ---\n");
    printf("Digite o ano de seu nascimento: ");
    
    if (scanf("%d", &ano_nascimento) != 1) {
        printf("Erro: Entrada invalida. Por favor, digite um ano.\n");
        return 1;
    }

    idade_usuario = ANO_ATUAL - ano_nascimento;

    if (ano_nascimento > ANO_ATUAL || idade_usuario > 120) {
        printf("Erro: Ano de nascimento invalido ou fora da realidade.\n");
    } else {
        frequencia_maxima_estimada = 220 - idade_usuario;

        printf("\nResultados:\n");
        printf("Idade estimada: %d anos\n", idade_usuario);
        printf("Sua frequencia cardiaca maxima estimada e: %d bpm\n", frequencia_maxima_estimada);
        printf("Nota: Sempre consulte um profissional de saude antes de realizar exercícios intensos.\n");
    }

    return 0;
}
