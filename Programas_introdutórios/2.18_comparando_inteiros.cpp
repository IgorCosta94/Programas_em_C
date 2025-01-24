#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("Digite dois numeros:");

	scanf("%d%d", &x, &y);
	
	if(x > y) printf("%d e maior que %d\n", x, y);
	if(x == y) printf("%d e igual a %d\n", x, y);
	if(y > x) printf("%d e maior que %d\n", y, x);
	if(y == x) printf("%d e igual a %d\n", y, x);
	
	return 0;
}
