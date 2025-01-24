#include<stdio.h>
#include<string.h>

int main(void){
	int y;
	char string[10];
	fgets(string,10,stdin);
	
	printf("%d\n",strlen(string));
	printf("%*s\n", strlen(string)*2, string);
	
	return 0;
}
