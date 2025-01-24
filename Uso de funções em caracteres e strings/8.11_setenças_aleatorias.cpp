#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	char frase[1000]={' '};
	const char *artigo[6]={"a","o","um","uma","algum","alguma"};
	const char *substantivo[5]={"menino","menina","cao","cidade","carro"};
	const char *verbo[5]={"dirigiu","saltou","correu","caminhou","saltou"};
	const char *preposicao[5]={"para","de","sobre","sob","em"};
	int a,c;
	srand(time(NULL));
	

	for(int b = 1; b <= 20 ; b++){
		a=1 + rand() % 5;
		c=1 + rand() % 4;
		
		strcat(frase,artigo[a]);
		strcat(frase," ");
		strcat(frase,substantivo[c]);
		strcat(frase," ");
		strcat(frase,verbo[c]);
		strcat(frase," ");
		strcat(frase,preposicao[c]);
		strcat(frase," ");
		strcat(frase,artigo[a]);
		strcat(frase," ");
		strcat(frase,substantivo[c]);
		strcat(frase," ");
		strcat(frase,"\n");
		

		
	}

	printf("%s", frase);

	
	return 0;
}
