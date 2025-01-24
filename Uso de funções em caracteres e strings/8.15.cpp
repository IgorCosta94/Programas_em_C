#include<stdio.h>
#include<string.h>
void reverse( char *sptr);

int main(void){
	char setence[80];
	
	printf("digite uma linha de texto:\n");
	
	fgets(setence, 80, stdin);
	
	printf("\nA linha impressa na ordem inversa e\n");
	
	reverse(setence);
	
	return 0;
}

void reverse( char *sptr){
	char *dd;
	const char *ordem[20]={""};
	int contador=0;
	dd=strtok(sptr," ");
	
	while(dd != NULL){
		//printf("%s\n",dd);
		ordem[contador++]=dd;
		dd=strtok(NULL," ");
		contador++;
	}
	
	for(int a=contador; a>= 0;a--){
		if(ordem[a]!=NULL)printf("%s ", ordem[a]);
	}
}
