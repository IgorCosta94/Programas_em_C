#include <stdio.h>

#define TAMANHO 10

int main(void) {
    int lista_numeros[TAMANHO] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int iteracao, indice, auxiliar_troca;

    printf("Dados na ordem original:\n");
    for (indice = 0; indice < TAMANHO; indice++) {
        printf("%4d", lista_numeros[indice]);
    }

    
    for (iteracao = 0; iteracao < TAMANHO - 1; iteracao++) {
        
        for (indice = 0; indice < TAMANHO - 1 - iteracao; indice++) {
            
            if (lista_numeros[indice] > lista_numeros[indice + 1]) {
                auxiliar_troca = lista_numeros[indice];
                lista_numeros[indice] = lista_numeros[indice + 1];
                lista_numeros[indice + 1] = auxiliar_troca;
            }
        }
    }

    printf("\n\nDados em ordem crescente:\n");
    for (indice = 0; indice < TAMANHO; indice++) {
        printf("%4d", lista_numeros[indice]);
    }

    printf("\n");

    return 0;
}
