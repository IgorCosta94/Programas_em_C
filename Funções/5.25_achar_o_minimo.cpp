#include<stdio.h>
float minimo(float a, float b, float c);

int main(void)
{
	float x, y, z;
	
	printf("Digite tres numero de ponto flutuante: ");
	scanf("%f%f%f", &x, &y, &z);
	
	printf("%.2f", minimo(x,y,z));
	
	return 0;
}
float minimo(float a, float b, float c)
{
	
	if(a<b and a<c) return a;
	if(b<a and b<c) return b;
	if(c<a and c<b) return c;
}
