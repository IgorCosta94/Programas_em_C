#include<stdio.h>

int perfect(void);

int main(void){
	perfect();

	return 0;
}

int perfect(void){

	for(int a= 1; a<= 1000; a++){
		int soma=0;
		for(int b = 1; b<= 1000; b++){
			soma += b;
			//printf("%d + ", b);
			if(soma == a and b!= a ){
				printf(" = %d , ESSE NUMERO E UM NUMERO PERFEITO \n", a);
			}
		}
	}
}
