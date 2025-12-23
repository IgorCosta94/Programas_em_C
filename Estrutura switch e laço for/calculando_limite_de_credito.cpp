#include <stdio.h>

int main(void) {
    int contador;
    int numero_conta;
    float limite_credito, saldo_atual, novo_limite;

    printf("--- Atualizacao de Limites de Credito ---\n\n");

    for (contador = 1; contador <= 3; contador++) {
        printf("Cliente %d de 3:\n", contador);

        printf("  Informe o numero da conta: ");
        scanf("%d", &numero_conta);

        printf("  Informe o limite de credito atual: ");
        scanf("%f", &limite_credito);

        printf("  Informe o saldo atual devedor: ");
        scanf("%f", &saldo_atual);

        novo_limite = limite_credito / 2.0;

        printf("\n  Conta: %d\n", numero_conta);
        printf("  Novo limite de credito aprovado: R$ %.2f\n", novo_limite);

        if (saldo_atual > novo_limite) {
            printf("  ATENCAO: Seu saldo (R$ %.2f) ja excede o novo limite de credito!\n", saldo_atual);
        }

        printf("-------------------------------------------\n\n");
    }

    return 0;
}
