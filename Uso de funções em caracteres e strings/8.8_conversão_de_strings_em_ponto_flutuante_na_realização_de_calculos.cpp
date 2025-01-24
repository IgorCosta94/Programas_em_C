#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int c;
	float numero=0.0;
	char d[50];
	
	for(c = 1 ; c <= 4 ; c++){
		scanf("%s", d);
		
		numero+=atof(d);
	}
	printf("\n%f\n",numero);
	return 0;
}
