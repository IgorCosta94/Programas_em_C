#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ordenacao( int b[], int tam);

int main(void)
{
	
	int dado1[7]={0};
	int dado2[7]={0};
	int lancamento1, lancamento2, contador, soma;
	srand(time(NULL));

	for(contador=1; contador <= 36000; contador++){
		lancamento1 = 1 + rand() % 6;
		lancamento2 = 1 + rand() % 6;
		soma= lancamento1	+ lancamento2;
	
	 	++dado1[lancamento1];
	 	++dado2[lancamento2];
		
	}
	
	ordenacao(dado1, 13);
	
	printf("    [1]  [2]  [3]  [4]  [5]  [6]\n");
	
	for(int a = 1; a < 7; a++){
		printf("[%d]",a);
		for(int c = 1; c< 7; c++){
		
			printf("%d ", dado1[a]+dado2[c]);
		}
		printf("\n");
	}

	return 0;
}


void ordenacao( int b[], int tam){
	int cont, arm, arm2;
	
	for(int cont = 1; cont < tam; cont++){
		for(int j = 1; j< tam-1;j++){
		
			if(b[j] > b[j+1] ){
				arm=b[j];
				b[j]=b[j+1];
				b[j+1]=arm;
			}	
		}
	}
}

