#include<stdio.h>

int main(void){
	char c;
	printf("\''\n");
	printf("\"\n");
	printf("\?\n");
	printf("\\\n");
	printf("\a\n");
	printf("\b%s\n","asadada");
	printf("\r\n");
	printf("\t\n","asadada");
	scanf("%c",&c);
	return 0;
}
