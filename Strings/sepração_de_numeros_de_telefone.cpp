#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char numero[] = "(41) 1234-5678";
    char dd[5] = "";          
    char telefone_str[15] = ""; 
    char *sptr;


    sptr = strtok(numero, "()");
    if (sptr != NULL) {
        strcpy(dd, sptr);
    }

  
    sptr = strtok(NULL, " -");
    while (sptr != NULL) {
        strcat(telefone_str, sptr);
        sptr = strtok(NULL, " -");
    }

    printf("String original: %s\n", "(41) 1234-5678");
    printf("Codigo de area (int): %d\n", atoi(dd));
    printf("Telefone (long):      %ld\n", atol(telefone_str));

    return 0;
}

