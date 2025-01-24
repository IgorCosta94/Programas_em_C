#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip(void);

int main(void){
	
	int valor, contador_cara = 0, contador_coroa = 0;
	srand(time(NULL));
	
	for(int a = 1 ; a <= 100; a++){
	
		valor = flip();
		
		if( valor == 0){
			printf("Cara\n\n");
			contador_cara++;	
		}
		if( valor == 1){
			printf("Caroa\n\n");
			contador_coroa++;	
		}
	}
	printf("Quantidade de moedas que deram cara: %d\n", &contador_cara);
	printf("Quantidade de moedas que deram coroa: %d\n", &contador_coroa);
	
	return 0;
}

int flip(void){

	
	return  0 + rand() % 2;
	
}
