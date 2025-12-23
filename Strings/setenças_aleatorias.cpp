#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const char *artigo[] = {"o", "a", "um", "uma", "algum", "alguma"};
    const char *substantivo[] = {"menino", "menina", "cao", "cidade", "carro"};
    const char *verbo[] = {"dirigiu", "saltou", "correu", "caminhou", "bateu"};
    const char *preposicao[] = {"para", "de", "sobre", "sob", "em"};
    
    char frase[100]; // Buffer para uma única frase por vez
    int a, s, v, p, a2, s2;

    srand(time(NULL));

    for (int i = 1; i <= 20; i++) {
        // Sorteio de índices para cada parte da sentença
        a  = rand() % 6; // Artigo
        s  = rand() % 5; // Substantivo
        v  = rand() % 5; // Verbo
        p  = rand() % 5; // Preposição
        a2 = rand() % 6; // Segundo artigo
        s2 = rand() % 5; // Segundo substantivo

        // Montando a frase no buffer
        sprintf(frase, "%s %s %s %s %s %s.", 
                artigo[a], substantivo[s], verbo[v], 
                preposicao[p], artigo[a2], substantivo[s2]);

        // Transformando a primeira letra em maiúscula
        frase[0] = toupper(frase[0]);

        printf("%02d: %s\n", i, frase);
    }

    return 0;
}