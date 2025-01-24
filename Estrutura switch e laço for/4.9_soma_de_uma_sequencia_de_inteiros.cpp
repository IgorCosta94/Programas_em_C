#include<stdio.h>

int main(void){
	int a, b, c, d=0;
	
	printf("Digite 5 valores. O primeiro valor indica a quantidade de valores a serem inseridos: ");
	scanf("%d", &a);
	
	for(b = 1; b <= a; b++){
		printf("Digite os valores: ");
		scanf("%d", &c);
		
		d += c;
	}
	
	printf("Soma: %d", d);
	
	return 0;
}
