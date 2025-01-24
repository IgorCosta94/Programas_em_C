#include<stdio.h>

int main(void){
	int a;
	int *aptr;
	
	a = 7;
	aptr = &a;
	
	printf("O endereço de a e %p"
		"\nO valor de aptr e %p\n", &a, aptr);
	
	
	printf("O valor  de a e %d"
		"\nO valor de aptr e %d\n", a, *aptr);
		
	printf("\n\nMostrando que * e & são complementos um "
		"do outro\n&*aptr = %p"
		"\n *&aptr = %p\n", &*aptr, *&aptr);

	return 0;
}
