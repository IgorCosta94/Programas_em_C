#include <stdio.h>

int main(void)
{
	int raio; float pi=3.14159;
	
	printf("Digite o raio do circulo:");
	scanf("%d", &raio);
	
	printf("Diametro:%d\nCircunferencia:%f\nArea:%f\n", 2*raio, 2*pi*raio, pi*(raio*raio));
	
	return 0;
}

