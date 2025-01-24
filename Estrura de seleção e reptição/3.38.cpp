#include <stdio.h>

int main(void){
	int contador=0;
	
	while(contador <= 100){
		
	 if(contador%10==0)printf("\n");
	 if(contador%10!=0)printf("*");
		++contador;
	}
	return 0;
	
}
