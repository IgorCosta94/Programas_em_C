#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int c;
	int numero=0;
	char d[50];
	
	for(c = 1 ; c <= 4 ; c++){
		scanf("%s", d);
		
		numero+=atoi(d);
	}
	printf("\n%d\n",numero);
	return 0;
}
