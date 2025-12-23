#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[] = "fui para lagarto sergipe";
    char s1[50]; 
    char *d;
    char first;
    int len;

    // strtok divide a frase em "tokens" baseados no espaço
    d = strtok(frase, " "); 

    printf("Frase original: %s\n", "fui para lagarto sergipe");
    printf("Em Pig Latin:   ");

    while (d != NULL) {
        len = strlen(d);
        
        // Copiamos a palavra a partir do segundo caractere
        // Ex: "fui" -> "ui"
        strcpy(s1, d + 1); 
        
        // Armazenamos o primeiro caractere
        first = d[0];
        
        // Adicionamos o primeiro caractere ao final
        // Ex: "ui" + "f" = "uif"
        int current_len = strlen(s1);
        s1[current_len] = first;
        s1[current_len + 1] = '\0'; // Finalizador de string

        // Adicionamos o sufixo "ei" e um espaço
        strcat(s1, "ei "); 
        
        printf("%s", s1);

        // Busca o próximo token
        d = strtok(NULL, " "); 
    }

    printf("\n");
    return 0;
}