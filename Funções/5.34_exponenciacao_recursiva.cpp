#include<stdio.h>

int recursiva(int x, int y);


int main(void){
	int base, expoente;
	
	printf("DIgite a base e o expoente para realizar o calculo: ");
	scanf("%d%d", &base, &expoente);
	
	printf("\n%d", recursiva( base, expoente ) );
	
	return 0;
}


int recursiva( int x, int y ){
	
	if( y == 1 ){
		return x;
	} 
	
	return x * recursiva( x, y-1 );
}
