#include<stdio.h>

int main(void)
{
	int produto, quantidade; 
	float total = 0.0;
	
	do{
		printf("Informe o numero do produto: ");
		scanf("%d", &produto);
		
		printf("Informe a quantidade vendida do produto: ");
		scanf("%d", &quantidade);
		
		switch(produto){
			case 1:
				total = total + (2.98 * quantidade);
				break;
				
			case 2:
				total = total + (4.50 * quantidade);
				break;
				
			
			case 3:
				total = total + (9.98 * quantidade);
				break;
				
			case 4:
				total = total + (4.49 * quantidade);
				break;
				
			case 5:
				total = total + (6.87 * quantidade);
				break;
			
			default:
				printf("\nERRO!!! NUMERO DO PRODUTO INFORMADO ESTA INCORRETO\n");
				printf("Digite o numero do produto correto\n");
				break;
 		}
	}while(produto != -1);
	
	printf("O total de produtos vendidos foi de: %.2f", total);
	
	return 0;
}
