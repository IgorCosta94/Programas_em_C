#include<stdio.h>

int main(void)
{
	long int a, b=1;
	
	for(a = 1; a<=5; a++)
	{
		b*=a;
	}
	
	printf("%d",b);
	
	return 0;
}
