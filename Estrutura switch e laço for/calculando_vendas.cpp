#include <stdio.h>

int main(void) {
    int codigo_produto, quantidade_vendida;
    float valor_total_vendas = 0.0;

    printf("--- Sistema de Calculo de Vendas Diarias ---\n");
    printf("Produtos disponiveis: 1, 2, 3, 4, 5 (Digite -1 no codigo para encerrar)\n\n");

    while (1) {
        printf("Informe o numero do produto: ");
        scanf("%d", &codigo_produto);

        if (codigo_produto == -1) {
            break;
        }

        printf("Informe a quantidade vendida: ");
        scanf("%d", &quantidade_vendida);

        switch (codigo_produto) {
            case 1:
                valor_total_vendas += 2.98 * quantidade_vendida;
                break;
            case 2:
                valor_total_vendas += 4.50 * quantidade_vendida;
                break;
            case 3:
                valor_total_vendas += 9.98 * quantidade_vendida;
                break;
            case 4:
                valor_total_vendas += 4.49 * quantidade_vendida;
                break;
            case 5:
                valor_total_vendas += 6.87 * quantidade_vendida;
                break;
            default:
                printf("\n[AVISO]: Codigo %d invalido. Tente novamente.\n", codigo_produto);
                break;
        }
        printf("Total acumulado ate agora: R$ %.2f\n\n", valor_total_vendas);
    }

    printf("\n--- RELATORIO FINAL ---\n");
    printf("O valor total de todas as vendas foi de: R$ %.2f\n", valor_total_vendas);
    printf("Sistema encerrado com sucesso.\n");

    return 0;
}
