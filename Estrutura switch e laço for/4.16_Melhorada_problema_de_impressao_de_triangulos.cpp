#include<stdio.h>

int main(void)
{
	int a,b, c, d, e, f;
	
	for(d = 1; d <= 4; d++){
		if(d == 1){
			for(a = 1 ; a <= 10; a++){
				for(c = 1 ; c <= a ; c++){
					printf("*");
				}
				printf("\n");	
			}
		}
		printf("\n");
		if(d == 2){
			for(a = 10 ; a >= 1; a--){
				for(c = 1 ; c <= a ; c++){
					printf("*");
				}
				printf("\n");	
			}
		}
		
		if(d == 3){
			for(a = 10, f = 1 ; a >= 1; a--, f++){
				for(e = 1; e <=f; e++){
					if(e==1) continue;
					printf(" ");
				}
				for(c = 1 ; c <= a ; c++){
						printf("*");
				}
				printf("  \n");	
			}
			
		}
		
		if(d == 4){
			for(a = 1, f = 1 ; a <= 10; a++, f++){
				for(e = 10; e >=f; e--){
					if(e==10) continue;
					printf(" ");
				}
				for(c = 1 ; c <= a ; c++){
						printf("*");
				}
				printf("  \n");	
			}
			
		}
	}
	return 0;
}
