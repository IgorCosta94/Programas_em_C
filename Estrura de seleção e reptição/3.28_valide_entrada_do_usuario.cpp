#include <stdio.h>

int main(void)
{
	int aprovados = 0, reprovados = 0, alunos = 1 , resultado;
	
	while( alunos <= 10 )
	{
		printf("Forneca resultado ( 1=aprovado, 2=reprovado): ");
		scanf("%d", &resultado);
		
		if( resultado == 1 || resultado ==2){
			if(resultado == 1)
			{
				aprovados+=1;
			}
			else{
			
				reprovados+=1;
			}
			alunos+=1;
		
		}
		else{
			printf("Informe um valor valido\n");
		}
		
	}
	printf("Aprovados %d\n", aprovados);
	printf("Reprovados %d\n", reprovados);
	if(aprovados>8)printf("Bônus ao instrutor");
	return 0;
}
