#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("Digite dois numeros inteiros:");
	scanf("%d%d", &x, &y);
	
	printf("Soma:%d\nProduto:%d\nDiferenca:%d\n", x + y, x * y, x - y );
	
	if(y != 0) printf("Quociente:%d\nResto:%d\n", x / y, x % y);
	
	return 0;
}
