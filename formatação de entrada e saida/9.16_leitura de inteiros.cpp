#include<stdio.h>

int main(void){
	int x;
	scanf("%d",&x);
	printf("D = %d\n",x);
	
	scanf("%i",&x);
	printf("I = %d\n",x);
	
	scanf("%o",&x);
	printf("O = %d\n",x);
	
	scanf("%u",&x);
	printf("U = %d\n",x);
	
	scanf("%x",&x);
	printf("X = %d\n",x);
	
	scanf("%hd",&x);
	printf("HD = %d\n",x);
	
	scanf("%ld",&x);
	printf("LD = %d\n",x);
	
	scanf("%e",&x);
	printf("E = %d\n",x);
	return 0;
}
