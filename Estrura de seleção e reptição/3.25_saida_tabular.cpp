#include <stdio.h>

int main(void)
{
	int N = 1;
	printf("N\t\t10*N\t\t100*N\t\t1000*N\n\n");
	while(N <= 10 )
	{
		printf("%d\t\t%d\t\t%d\t\t%d\n", N, 10*N, 100*N, 1000*N);
		
		++N;
	}
	
	return 0;
}
