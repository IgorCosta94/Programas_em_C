#include<stdio.h>

int main(void)
{
	int a,b, c, d,e;
	
	scanf("%d", &a);
	
	for(b=1; b<=a; b++){
		scanf("%d", &c);
		d = c;
		
		if(c<d){
			e=c;
		}
	}	
	printf("O menor e: %d", e);
	return 0;
}
