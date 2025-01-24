#include<stdio.h>
#define SIZE 8
#define DINE 8

void inicializar( int c[][DINE]);
int exibir(int c[][DINE]);
void movimento(int c[][DINE],  int d[], int e[]);

int main(void){
	
	int tabuleiro[8][8];
	int horizontal[8]={ 2,  1, -1, -2, -2 , -1 ,1 ,2};
	int vertical[8]={  -1, -2, -2, -1,  1 , 2 , 2 ,1};
	
	inicializar(tabuleiro);
	movimento(tabuleiro,vertical, horizontal );
	exibir(tabuleiro);
	
	
	return 0;
}


void inicializar( int c[][DINE]){

	for(int a = 0 ; a < SIZE; a++){
	
		for(int b = 0; b < DINE; b++){
			
			c[a][b]= 0;
		}
	}
	
}


void movimento(int c[][DINE], int d[], int e[]){
	int linha=3, coluna=4, moverNumber;
	
	for(int a = 1; a <= 64; a++){
	
		printf("Digite a linha e a coluna da posicao atual do cavalo: ");
		scanf("%d%d", &linha,&coluna);
		
		if( (linha >=0 and linha <= 7) and (coluna >=0 and coluna <= 7) ){
			c[linha][coluna]=a;
			exibir(c);
		}
		else{
			a--;
		}
	}
}


int exibir(int c[][DINE]){
	
	printf("   [0][1][2][3][4][5][6][7]\n");
	for(int a = 0 ; a < SIZE; a++){
		printf("[%d]",a);
		for(int b = 0; b < DINE; b++){
			
			printf(" %d ", c[a][b]);
		}
		printf("\n");
	}
}

