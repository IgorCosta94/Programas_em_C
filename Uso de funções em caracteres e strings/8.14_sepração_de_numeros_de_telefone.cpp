#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void telefone(char *nptr);
void separacao(char *sptr);

int main(void){

	char numero[]="(41) 1234-5678";
	char telefone[20]="";
	char dd[20]="";
	char *sptr;
	
	sptr = strtok(numero,"()");
	strcat(dd,sptr);
	
	sptr = strtok(NULL," -");
	while(sptr != NULL){
		strcat(telefone,sptr);
		sptr = strtok(NULL," -");
	}
	
	printf("Codigo de area: %d\n", atoi(dd));
	printf("Telefone: %ld", atol(telefone));
	return 0;
}

