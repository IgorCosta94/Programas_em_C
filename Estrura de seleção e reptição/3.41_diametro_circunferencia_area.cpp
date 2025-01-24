#include <stdio.h>

int main(void)
{
	float raio; float pi=3.14159;
	int x=4, y=5;
	printf("Digite o raio do circulo:");
	scanf("%f", &raio);
	
	printf("Diametro:%.2f\nCircunferencia:%.2f\nArea:%.2f\n", 2*raio, 2*pi*raio, pi*(raio*raio));
	
	printf("%d",++x+y);
	
	return 0;
}

