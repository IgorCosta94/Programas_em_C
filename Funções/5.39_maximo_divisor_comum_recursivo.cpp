#include<stdio.h>

int mdc(int x, int y, int z);

int main(void){
	int a= 36 , b=66, c;	
	if(a>=b) c = a;
	if(b>=a) c = b;
	
	printf("%d", mdc(a, b, c));
	
	return 0;	
}

int mdc(int x, int y, int z){
	if(y==0) return x;
	
	if(x % z == 0 and y % z == 0 ) return z;
	
	return mdc(x, y, z-1);
	
}
