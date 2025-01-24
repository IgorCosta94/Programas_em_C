#include<stdio.h>
#define LINHA  5
#define COLUNA 4

int main(void){
	
	int sales[5][6] = {0};
	int codigo, produto, quantidade, soma=0;


	printf("Informe seu codigo:");
	scanf("%d", &codigo);
	
	while(codigo != -1){
		
		printf("Informe seu codigo do produto:");
		scanf("%d", &produto);
		
		printf("Informe quantidade do produto:");
		scanf("%d", &quantidade);
		
		sales[codigo][produto] = quantidade;
		
		printf("Informe seu codigo:");
		scanf("%d", &codigo);
	}
	
	printf("   [1]  [2]  [3]  [4]  [5]\n");
	for(int a = 1 ; a < 6 ; a++){
		//printf("[%d]",a);
		soma=0;
		for(int b=1;b<6;b++){
			soma += sales[a][b];
		//	printf(" %d   ", soma);
		}
		
		printf("\n\n O vendedor %d vendeu um total de %d",a, soma);
	}	

	return 0;
	
}

	
	
