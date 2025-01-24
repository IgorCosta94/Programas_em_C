#include<stdio.h>

int invertendo(int x);

int main(void)
{
	int x;
	
	printf("Digite um numero entre 1 e 32767: ");
	scanf("%d", &x);
	
	invertendo(x);
	
	return 0;
}

int invertendo(int x){
	
	if(x>=1 and x<=9) return x;
	
	if(x >= 10 and x <= 99){
		return printf("%d  %d", x % 10, x / 10);
	}
	
	if(x >= 100 and x <= 999){
		int y = x % 100;
		return printf("%d  %d  %d", y % 10, y / 10, x / 100);
	}
	
	if( x >= 1000 and x <= 9999){
		int y = x % 1000;
		int w= x % 100;
		int z= x % 100;
		return printf("%d  %d  %d  %d", w % 10, w / 10, y / 100, x / 1000);
	}
	
	if( x >= 10000 and x <= 32767){
		int y =  x % 10000;
		int w= y % 1000;
		int z= w % 100;

		return printf("%d  %d  %d  %d  %d", z % 10, z / 10, w / 100, y / 1000, x / 10000);
	}
}
