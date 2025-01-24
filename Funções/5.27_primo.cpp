#include<stdio.h>
#include<math.h>

int primo(void);

int main(void)
{
	primo();
	
		return 0;
}

int primo(void)
{
	int contador=0;
	for(int a=1; a<=10000;a++){
		contador=0;
		for(int b=1;b<=10000;b++){
		
			 if( (a%b) == 0 and (a%1) == 0 ) {
			 ++contador;	
			 }

		}
		if(contador == 2){
			 	printf("\n%d e primo\n", a);
		}
	}
}
