#include <stdio.h>

int main(void) {
    int total_horas_trabalhadas;
    float valor_hora_normal, pagamento_bruto;

    while ( total_horas_trabalhadas != -1) {
        printf("Digite o numero de horas trabalhadas (-1 para encerrar): ");
        scanf("%d", &total_horas_trabalhadas);
		
        printf("Digite o valor do salario por hora (R$): ");
        scanf("%f", &valor_hora_normal);

        if (total_horas_trabalhadas <= 40) {
            pagamento_bruto = total_horas_trabalhadas * valor_hora_normal;
        } else {
            int horas_normais = 40;
            int horas_extras = total_horas_trabalhadas - 40;
            float valor_hora_extra = valor_hora_normal * 1.5;

            pagamento_bruto = (horas_normais * valor_hora_normal) + (horas_extras * valor_hora_extra);
        }

        printf("O salario bruto semanal e: R$ %.2f\n\n", pagamento_bruto);
    }

    printf("Sistema encerrado.\n");
    return 0;
}