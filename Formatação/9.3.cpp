#include <stdio.h>
#include <string.h>

int main(void) {
    // a) Inteiro sem sinal, alinhado à esquerda (15 chars), precisão 8
    printf("a) [%-15.8u]\n", 400000);

    // b) Ler hexadecimal (Ex: digitar FF)
    int hex;
    printf("b) Digite um hex: ");
    scanf("%x", &hex);

    // c) Imprimir 200 com e sem sinal
    printf("c) Sem sinal: %u | Com sinal: %+d\n", 200, 200);

    // d) Imprimir 100 em hex com 0x (Usa-se o '#' para o prefixo)
    printf("d) %#x\n", 100);

    // e) Ler até encontrar 'p'
    char s_e[50];
    printf("e) Digite algo (para no 'p'): ");
    scanf(" %[^p]", s_e); 
    printf("Resultado: %s\n", s_e);

    // f) 1.234 em campo de 9 com zeros iniciais
    printf("f) %09.3f\n", 1.234);

    // g, i) Ler horário (hh:mm:ss) descartando os separadores
    int h, m, s;
    printf("g) Digite hora (hh:mm:ss): ");
    scanf("%d%*c%d%*c%d", &h, &m, &s); // %*c lê o caractere (:) mas não o armazena
    printf("Hora: %d | Min: %d | Seg: %d\n", h, m, s);

    // h) Ler string entre aspas e remover as aspas
    char s_h[50];
    printf("h) Digite uma frase entre \"aspas\": ");
    scanf(" \"%[^\"]\"", s_h); // O espaço antes de \" limpa o buffer
    printf("String limpa: %s\n", s_h);

    return 0;
}
