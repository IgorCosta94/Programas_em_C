#include<stdio.h>

int main(void){
	int a,b,c;
	printf("informe tres valores inteiros:");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a + b > c){
		
		if(a + c > b){
	
			if( b + c > a){
			
				if( a > b){
					if( a > c){
						if(b*b + c*c == a*a){
							printf("Esses valores determinam o lado de um triangulo retangulo");
						}
					}
				}
					 if( b > a){
						if(b > c){
							if(a*a+c*c==b*b){
								printf("Esses valores determinam o lado de um triangulo retangulo");
							}
						}
					}
					 if(c>a){
							if(c>b){
								if(a*a+b*b==c*c){
									printf("Esses valores determinam o lado de um triangulo retangulo");
								}
							}
						}
					
				
			}
		}
	}
	return 0;
	
}
