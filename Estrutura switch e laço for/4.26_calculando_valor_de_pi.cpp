#include<stdio.h>

int main(void){
	int a, b, c;
	float e = 0.0;

	

		for(a=1, b = 1, c=3 ; a <= 458 ; a++, b+=4, c+=4){
			e = ((4.0/b)-(4.0/c))+e;
			printf("Valor do Termo %d e igua a: %.3f\n", a, e);
		}


//printf("\n\n%.2f\n", e);
	return 0;
}
