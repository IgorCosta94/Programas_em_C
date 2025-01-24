 #include<stdio.h>
 
void celsius (void);
void fahrenheit (void);

int main(void){
	
	celsius();
	fahrenheit();
	
	return 0;
}

void fahrenheit (void)
{
	int calculo;
	printf("\nTEMPERATURA EQUIVALENTE FAHRENHEIT DE CELSIUS\n");
	for(int a = 0 ; a <= 100; a++){
		calculo = ((a * 9/5)+32);
		for(int b = 1 ; b <= calculo; b++){
			 printf("|");
	
		}
		printf("\n\n");
	}
}

void celsius (void)
{
	int calculo;
	printf("\nTEMPERATURA EQUIVALENTE CELSIUS DE FAHRENHEIT\n");
	for(int a = 32 ; a <= 212; a++){
		calculo = ((a -32)*5)/9;
		for(int b = 1 ; b <= calculo; b++){
			 printf("|");
	
		}
		printf("\n");
	}
}
