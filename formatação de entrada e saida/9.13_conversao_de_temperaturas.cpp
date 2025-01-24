#include<stdio.h>

int main(void){
	int fahr;
	float celsius;
	
	scanf("%d", &fahr);
	
	celsius = 5.0/9.0*(fahr-32);
	
	printf("FAHRENHEIT:%10d\nCELSIUS:%+10.3f",fahr,celsius);
	
	
	return 0;
}
