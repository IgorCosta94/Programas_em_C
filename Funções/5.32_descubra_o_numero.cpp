#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

int ehInteiro(const char *entrada);
int jogar(int valor);
void resultado(int jogada, int contadortentativa);

int main(void) {
    int valor, jogada = 0, contadortentativa = 0;
    char entrada[50];

    srand(time(NULL));
    valor = 1 + rand() % 1000;
	
	jogar(valor);
	
    return 0;
}

int jogar(int valor){
	int jogada = 0, contadortentativa = 0;
    char entrada[50];
	
	printf("Eu tenho um numero entre 1 e 1000\n");
    printf("Voce consegue descobrir qual e?\n\n");

    while (jogada != valor) {
        printf("Digite sua tentativa: ");
        scanf("%s", entrada);

        if (!ehInteiro(entrada)) {
            printf("Entrada invalida! Por favor, digite apenas numeros inteiros.\n\n");
            continue;
        }

        jogada = atoi(entrada);

        if (jogada < valor)
            printf("\nMuito baixo. Tente novamente.\n");
        else if (jogada > valor)
            printf("\nMuito alto. Tente novamente.\n");

        printf("\n");
        contadortentativa++;
    }
	
	resultado(jogada,contadortentativa);
}

void resultado(int jogada, int contadortentativa){
	if (contadortentativa <= 10)
        printf("Ou voce conhece o segredo ou teve sorte!!!\nAHAH! Voce conhece o segredo! %d tentativas\n\n", contadortentativa);
    else
        printf("Voce deveria se sair melhor!!! %d tentativas\n\n", contadortentativa);

    printf("Excelente!! Voce descobriu o numero!!\n");
}

//Verifica o número digitado
int ehInteiro(const char *entrada){
    int i = 0;

    if (entrada[0] == '-') {
        i = 1;
    }
    
    for (; entrada[i] != '\0'; i++) {
        if (!isdigit(entrada[i])) {
            return 0;
        }
    }
    return 1; 
}

