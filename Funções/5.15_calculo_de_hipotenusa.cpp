#include<stdio.h>
#include<math.h>

double hipotenusa( double lado1, double lado2);

int main(void)
{
	int x, y;
	
	for(int a = 1; a <= 3; a++)
	{
		printf("Informe os dois lados do triangulo: ");
		scanf("%d%d", &x, &y);
		
		printf("\nA hipotenusa do %d triangulo e %.2f\n", a, hipotenusa( x, y));
		printf("\n");
	}
	return 0;
}


double hipotenusa(double lado1, double lado2)
{
	return sqrt( pow(lado1, 2) + pow(lado2, 2));
}
