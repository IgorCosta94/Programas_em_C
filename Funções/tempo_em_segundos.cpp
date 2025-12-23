#include <stdio.h>

int calcular_total_segundos(int horas, int minutos, int segundos);

int main(void) {
    int h_usuario, m_usuario, s_usuario;
    int resultado_segundos;

    printf("--- Conversor de Horario para Segundos ---\n");
    printf("Informe a hora, os minutos e os segundos (ex: 10 30 15): ");
    
    if (scanf("%d %d %d", &h_usuario, &m_usuario, &s_usuario) != 3) {
        printf("Erro: Formato de entrada invalido.\n");
        return 1;
    }

    if (h_usuario < 0 || h_usuario > 23 || m_usuario < 0 || m_usuario > 59 || s_usuario < 0 || s_usuario > 59) {
        printf("Erro: Horario fornecido e invalido.\n");
        return 1;
    }

    resultado_segundos = calcular_total_segundos(h_usuario, m_usuario, s_usuario);

    int marco_meio_dia = 12 * 3600;
    int diferenca = marco_meio_dia - resultado_segundos;

    printf("\nTotal de segundos desde a meia-noite: % d\n", resultado_segundos);
    printf("Diferenca para as 12h: % d segundos\n", diferenca);

    return 0;
}

int calcular_total_segundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos;
}
