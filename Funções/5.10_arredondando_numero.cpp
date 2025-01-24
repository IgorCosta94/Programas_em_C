#include <stdio.h>
#include <math.h>

int main(void)
{
	float n, y;
	

	
	for(int x = 1; x <= 5; x++)
	{
		scanf("%f", &n);
		y = floor( n + .5); 
	
		printf("%.2f\n", y);
		
	}
	
	return 0;
}
