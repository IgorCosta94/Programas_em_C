#include<stdio.h>

int main(void)
{
    int lado, contador = 1, contador_2 = 1, contador_3=1;
    
    printf("Informe o lado de um quadrado:");
    scanf("%d", &lado);
    
    while(contador <= lado)
    {
        if(contador == 1 || contador == lado){
        
            while(contador_2 <= lado){
                printf("*");
                ++contador_2;
            }   
        }
        else {
            while(contador_3 <= lado){
                if(contador_3 == 1) printf("*");
                else if(contador_3 == lado) printf("*");
                else printf(" ");
                ++contador_3;
            }
        }
            
        printf("\n");
    
        contador_3 = 1;
        ++contador;
        contador_2 = 1;
        
    }
    return 0;
}

