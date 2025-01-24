#include<stdio.h>

int main(void)
{
	int _x ,y , z, resultado;
	
	printf("Digite Tres numeros inteiros:");
	scanf("%d%d%d", &_x, &y, &z);
	
	resultado = _x * y * z;
	
	printf("O resultado e %d", resultado);
	
	return 0; 	

}
