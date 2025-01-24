#include<stdio.h>
#include<ctype.h>

void tratamento(char c);

int main(void){
	tratamento(getchar());
	
	return 0;
}

void tratamento(char c){
	printf("%c %s digito\n", c ,isdigit(c)? "e um": "nao e um");
	printf("%c %s letra\n" , c ,isalpha(c)? "e uma": "nao e uma");
	printf("%c %s digito ou uma letra\n", c ,isalnum(c)? "e um": "nao e um");
	printf("%c %s digito hexadecimal\n", c ,isxdigit(c)? "e um": "nao e um");
	printf("%c %s letra minuscula\n", c ,islower(c)? "e uma": "nao e uma");
	printf("%c %s letra maiuscula\n", c ,isupper(c)? "e uma": "nao e uma");
	printf("tolower: %c\n",tolower(c));
	printf("toupper: %c\n",toupper(c));
	printf("Isspace:%d\n",isspace(c));
	printf("iscntrl:%d\n",iscntrl(c));
	printf("ispunct:%d\n",ispunct(c));
	printf("isprint:%d\n",isprint(c));
	printf("isgraph:%d\n",isgraph(c));
}
