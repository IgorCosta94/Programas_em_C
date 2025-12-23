#include <stdio.h>

#define SIZE 10

int main(void) {
    float values[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    
    float *nptr = values; 
    int i;

    printf("1. Array subscript notation:\n");
    for (i = 0; i < SIZE; i++) {
        printf("values[%d] = %.1f\n", i, values[i]);
    }

    

    printf("\n2. Pointer/offset notation (using pointer):\n");
    for (i = 0; i < SIZE; i++) {
        printf("*(nptr + %d) = %.1f\n", i, *(nptr + i));
    }

    printf("\n3. Pointer/offset notation (using array name):\n");
    for (i = 0; i < SIZE; i++) {
        printf("*(values + %d) = %.1f\n", i, *(values + i));
    }

    printf("\n4. Pointer subscript notation:\n");
    for (i = 0; i < SIZE; i++) {
        printf("nptr[%d] = %.1f\n", i, nptr[i]);
    }

    printf("\nEndereco do elemento 5: %p\n", (void *)&nptr[5]);

    return 0;
}