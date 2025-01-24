#include<stdio.h>

int main(void)
{
	int A = 3;
	
	printf("A\t\tA+2\t\tA+4\t\tA+6\n\n");
	
	while( A <= 15)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\n", A, A+2, A+4, A+6 );
		
		A += 3;
	}
	return 0;
}
