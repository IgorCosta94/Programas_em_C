#include<stdio.h>
#include<string.h>

int main(void){
	char a[100];
	char b[100];
	fgets(a,100,stdin);
	fgets(b,100,stdin);
	printf("%d\n",strncmp(a,b,5));
	printf("%d\n",memcmp(a,b,4));
	
	return 0;
}
