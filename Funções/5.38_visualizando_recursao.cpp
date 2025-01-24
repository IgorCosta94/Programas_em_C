#include<stdio.h>

int fatorial(int x);

int main(void){
	int y = 5;
	
	printf("%d ", fatorial(y));
	
	return 0;
}

int fatorial(int x){
	
	
	if(x==1) return x;
	
	printf("fatorial em recursao: %d  \n\n", x);
	
	return x * fatorial(x-1);
}
