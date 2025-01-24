#include <stdio.h>

int main(void){
	int contador=1;
	
	while(contador <= 300000000){
		
		//if(100000000 % contador == 0) printf("%d e multiplo de 100.000.00\n", contador);
		++contador;
	}
	return 0;
	
}
