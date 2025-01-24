#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(void){
	const char *texto="a";
	char pesquisa[50];
	int i=1, contador=0;
	const char *searcheptr=NULL;
	fgets(pesquisa,50,stdin);
	pesquisa[strlen(pesquisa)-1]='\0';
	searcheptr=strchr(pesquisa,'a');
	
	while(searcheptr!=NULL){
		contador++;	
		searcheptr=strchr(searcheptr + 1, 'a');
	}
	
	printf("%d\n",contador);	

	return 0;
}

