#include <stdio.h>

int main(void) {
    int fahr;
    float celsius;
    
    printf("Digite a temperatura em Fahrenheit: ");
    if (scanf("%d", &fahr) == 1) { // Verifica se a leitura foi bem-sucedida
        
        celsius = 5.0 / 9.0 * (fahr - 32);
        
        printf("\nRESULTADO DA CONVERSAO:\n");
        printf("----------------------------\n");
        printf("FAHRENHEIT: %10d\n", fahr);
        printf("CELSIUS:    %+10.3f\n", celsius);
        printf("----------------------------\n");
    } else {
        printf("Erro: Por favor, insira um valor numerico inteiro.\n");
    }
    
    return 0;
}
