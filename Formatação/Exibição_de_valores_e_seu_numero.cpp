#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    
    int numeros[10];
    int caracteres_impressos;
    int acumulador = 0;
    
    printf("--- Simulacao de Retorno do printf ---\n\n");

    for (int i = 0; i < 10; i++) {
        // Gera um numero entre 1 e 1000
        numeros[i] = 1 + rand() % 1000;
        
        printf("Numero %d: ", i + 1);
        
        caracteres_impressos = printf("%d", numeros[i]);
        
        acumulador += caracteres_impressos;
        
        printf(" | Caracteres nesta impressao: %d | Total: %d\n", 
                caracteres_impressos, acumulador);
    }
    
    printf("\nTotal final de caracteres numericos: %d\n", acumulador);
    
    return 0;   
}
