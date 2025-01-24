#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	
	for(int x = 1; x<=100;x++)
	{
	
		n=   ((2+ rand() % 8 )*2)+4;
	
		printf("%d\n\n", n);
	}
	return 0;
}
