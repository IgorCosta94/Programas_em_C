#include<stdio.h>

int segundos(int a, int b, int c);

int main(void){
	
	int h,m,s;
	
	printf("inform a hora os minutos e os segundao(hh mm ss): ");
	scanf("%d%d%d", &h, &m, &s);
	
	segundos(h,m,s);
	
	return 0;

}

int segundos(int a, int b, int c){
	
	return printf("%d",(12 * 3600 -( (a*3600) + (b*60) + c))); 
}
