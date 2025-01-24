#include<stdio.h>
#include<ctype.h>

int main(void){
	char s[] = "BOM DIA MUNDO ";
	char s2[] = "grande galaxia";
	int c;
	for(c= 0 ;s[c] != '\0';c++){
		printf("%c",tolower(s[c]));
	}
	printf("\n");
	for(c= 0 ;s2[c] != '\0';c++){
		printf("%c",toupper(s2[c]));
	}
	
	return 0;
}
