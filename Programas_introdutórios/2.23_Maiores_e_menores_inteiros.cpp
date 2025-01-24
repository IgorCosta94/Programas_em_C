#include <stdio.h>

int main(void)
{
	int a,b,c,d,e;
	
	printf("Digite 5 numeros:");
	scanf("%d%d%d%d%d&",&a, &b, &c, &d, &e);
	
	if(a  > b){
		if(a > c){
			if(a > d){
				if(a > e) printf("O maior e %d\n", a);
			}
		}
	}
	
	if(b  > a){
		if(b > c){
			if(b > d){
				if(b > e) printf("O maior e %d\n", b);
			}
		}
	}
	
	if(c  > a){
		if(c > b){
			if(c > d){
				if(c > e) printf("O maior e %d\n", c);
			}
		}
	}
	
	if(d  > a){
		if(d > b){
			if(d > c){
				if(d > e) printf("O maior e %d\n", d);
			}
		}
	}
	
	if(e  > a){
		if(e > b){
			if(e > c){
				if(e > d) printf("O maior e %d\n", e);
			}
		}
	}
	
	if(a  < b){
		if(a < c){
			if(a < d){
				if(a < e) printf("O menor e %d\n", a);
			}
		}
	}
	
	if(b  < a){
		if(b < c){
			if(b < d){
				if(b < e) printf("O menor e %d\n", b);
			}
		}
	}
	
	if(c  < a){
		if(c < b){
			if(c < d){
				if(c < e) printf("O menor e %d\n", c);
			}
		}
	}
	
	if(d  < a){
		if(d < b){
			if(d < c){
				if(d < e) printf("O menor e %d\n", d);
			}
		}
	}
	
	if(e  < a){
		if(e < b){
			if(e < c){
				if(e < d) printf("O menor e %d\n", e);
			}
		}
	}
	
	return 0;
}
