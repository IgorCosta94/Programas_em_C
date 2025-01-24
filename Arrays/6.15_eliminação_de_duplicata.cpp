#include<stdio.h>
#define SIZE 1

int main(void)
{
	int numero[ SIZE ];
	
	int a=1, x = 0, d=0;
	
	while( a <= 20){
		for( x= 0; x <= SIZE; x++){
		
			printf("Digite 20 numeros entre 10 e 100.\nEle sera impresso caso seja unico. : ");
			scanf("%d", &numero[x]);
			//printf("\n O numero %d e unico ate o momento\n", numero[x]);
		}
		for(int c = 0; c<SIZE;c++){
		
			if(numero[ d ] != numero[ d + 1]){	
				printf("\n O numero %d e unico ate o momento\n", numero[d]);
			}
		}
		a++;
	}
	
	return 0;
}
