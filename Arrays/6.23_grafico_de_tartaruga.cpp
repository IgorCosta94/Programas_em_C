#include <stdio.h>
#define SIZE 50
#define DINE 50

void mudanca(int b[][DINE]);
int troca(int a[][DINE]);

int main(void) {
    int floor[SIZE][DINE] = { {0} };
	
	mudanca(floor);

    return 0;
}

void mudanca(int b[][DINE]){
	    for(int a = 0; a < 20; a++) {
        
           b[a][0] =1;
        }
      
    for(int a = 0; a < 20; a++) {
        
           b[0][a] =1;
        }
      
     for(int a=0; a<21;a++){
    	b[a][20]=1;
	}
      
    for(int a=0; a<20;a++){
    	b[20][a]=1;
	}
	
	troca(b);

}

int troca(int a[][DINE]){
	for(int m=0; m<SIZE;m++){
		for(int n=0;n<DINE;n++){
			if(a[m][n] == 1){
				printf("**");
			}
			if(a[m][n] == 0){
				printf("  ");
			}
		}
		printf("\n");
	}
	
}
	
	

