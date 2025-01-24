#include<stdio.h>
#include<string.h>

int main(void){
	char a[100];
	char b[100];
	fgets(a,100,stdin);
	fgets(b,100,stdin);
	printf("%d",strcmp(a,b));
	
	return 0;
}
