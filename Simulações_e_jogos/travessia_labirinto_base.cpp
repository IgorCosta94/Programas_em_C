#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 12

void imprime_labirinto(char maze[TAM][TAM]);
void percorre_labirinto(char maze[TAM][TAM], int x, int y, int direcao);

int main(void) {
    char labirinto[TAM][TAM] = {
        {'#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#','.','.','.','#','.','.','.','.','.','.','#'},
        {'.','.','#','.','#','.','#','#','#','#','.','#'}, 
        {'#','#','#','.','#','.','.','.','.','#','.','#'},
        {'#','.','.','.','#','#','#','#','.','#','.','.'}, 
        {'#','#','#','.','#','#','.','#','.','#','.','#'},
        {'#','.','#','.','#','#','.','#','.','#','.','#'},
        {'#','#','#','.','#','#','.','#','.','#','.','#'},
        {'#','.','.','.','.','.','.','.','.','#','.','#'},
        {'#','#','#','#','#','#','#','#','#','#','.','#'},
        {'#','.','.','.','.','.','.','#','.','.','.','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#'}
    };

    printf("Iniciando a travessia do labirinto:\n\n");
    


    imprime_labirinto(labirinto);

    return 0;
}


void imprime_labirinto(char maze[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
    printf("\nTecle ENTER para o proximo passo...");
    getchar(); 
}