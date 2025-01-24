#include<stdio.h>

int qualitypoints(void);

int main(void){
	
	printf("%d", qualitypoints() );
	
	return 0;
}


int qualitypoints(void){
	
	int media;
	
	
	for(int x = 1; x<=5;x++){
		printf("Informe a media do aluno(a): ");
		scanf("%d", &media);
		if( media >= 90 and media <= 100 ) return 4;
	
		if( media >= 80 and media <= 89 ) return 3;
	
		if( media >= 70 and media <= 79 ) return 2;
	
		if( media >= 60 and media <= 69 ) return 1;
	
		if( media < 60 ) return 0;
	
	
	}
}
