#include<stdio.h>

int main(void)
{
	int a = 0, b = 0, c =0 ;

	
	do{
		scanf("%d", &a);
		if(a==9999){
			break;
		}
		
		c++;
		b += a;
		
	}while(a!=9999);
	
	printf("Media: %d", (b) / (c) );
	return 0;
}
