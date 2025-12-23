#include <stdio.h>

int main(void) {
    int codigo_cargo, horas_trabalhadas, quantidade_produzida;
    float pagamento_final, valor_hora, total_vendas, valor_por_item;

    printf("--- Sistema de Folha de Pagamento ---\n");
    printf("Cargos: 1(Gerente), 2(Horista), 3(Comissionado), 4(Producao)\n");
    printf("Digite -1 no codigo para encerrar o programa.\n");

    do {
        printf("\nDigite o codigo do cargo: ");
        scanf("%d", &codigo_cargo);

        if (codigo_cargo == -1) break;

        switch (codigo_cargo) {
            case 1: 
                printf("Informe o salario semanal fixo do gerente: ");
                scanf("%f", &pagamento_final);
                printf("Pagamento do Gerente: R$ %.2f\n", pagamento_final);
                break;

            case 2: 
                printf("Informe o valor da hora trabalhada: ");
                scanf("%f", &valor_hora);
                printf("Informe a quantidade de horas trabalhadas: ");
                scanf("%d", &horas_trabalhadas);

                if (horas_trabalhadas <= 40) {
                    pagamento_final = horas_trabalhadas * valor_hora;
                } else {
                    pagamento_final = (40 * valor_hora) + ((horas_trabalhadas - 40) * valor_hora * 1.5);
                }
                printf("Pagamento do Horista: R$ %.2f\n", pagamento_final);
                break;

            case 3: 
                printf("Informe o valor total das vendas brutas: ");
                scanf("%f", &total_vendas);
                pagamento_final = 250.00 + (total_vendas * 0.057);
                printf("Pagamento do Comissionado: R$ %.2f\n", pagamento_final);
                break;

            case 4: 
                printf("Informe o valor por item produzido: ");
                scanf("%f", &valor_por_item);
                printf("Informe a quantidade de itens produzidos: ");
                scanf("%d", &quantidade_produzida);
                pagamento_final = valor_por_item * quantidade_produzida;
                printf("Pagamento por Producao: R$ %.2f\n", pagamento_final);
                break;

            default:
                printf("[ERRO] Codigo invalido! Digite um cargo de 1 a 4 ou -1 para sair.\n");
                break;
        }
    } while (codigo_cargo != -1);

    printf("\nProcessamento de folha encerrado.\n");
    return 0;
}
