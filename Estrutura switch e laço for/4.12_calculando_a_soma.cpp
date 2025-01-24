#include<stdio.h>

int main(void)
{
	int a, b=0;
	
	for(a=2 ; a<=30 ; a+=2){
		b += a;
	}  
	
	printf("%d\n",b);
	
	return 0;
}
