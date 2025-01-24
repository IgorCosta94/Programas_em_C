#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
	int numero[ 20 ]={0};
	
	int c1, unico;

	srand(time(NULL));
	
	for(int a=0; a<20; a++){
		c1=1+rand()%20;
		unico=1;
	
		for(int b = 0; b<a;b++){
			if(c1 == numero[b]){
				unico=0;
				break;
			}
		}
	
		if(unico){
			numero[a]=c1;
		}
		
	}

	printf("\n\nSem duplicatas: ");
	for(int a = 0; a < 20; a++){
		
		numero[a]!=0 ? printf("%d ", numero[a]) : printf("");
		if(a==10) printf("\n");
		
	}
	
	return 0;
	 
}
