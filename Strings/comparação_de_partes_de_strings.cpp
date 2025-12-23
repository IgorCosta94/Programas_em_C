#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100] = "C casa";
    char b[100] = "C carro";


    printf("strncmp: %d\n", strncmp(a, b, 5)); 


    printf("memcmp: %d\n", memcmp(a, b, 4));

    return 0;
}
