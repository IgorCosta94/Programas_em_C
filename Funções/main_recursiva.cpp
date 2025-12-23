#include <stdio.h>

void executar_ciclo_recursivo(void);

int main(void) {
   
    static int contador_chamadas = 0;
    const int LIMITE_SEGURANCA = 10; 

    printf("Ciclo atual: %d\n", contador_chamadas);

    if (contador_chamadas < LIMITE_SEGURANCA) {
        contador_chamadas++;
        executar_ciclo_recursivo();
    } else {
        printf("Limite de seguranca atingido. Encerrando para evitar erro de memoria.\n");
    }

    return 0;
}

void executar_ciclo_recursivo(void) {
    main();
}
