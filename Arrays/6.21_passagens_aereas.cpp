#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 11

void assentos( int lugares[], int tam, int a);
void exibir(int pol, int sec );

int main(void){
	int voos[SIZE] = { 0 };
	
	int selecao;
	
	printf("Favor digitar 1 para primeira classe\n\nFavor digitar 2 para classe econimica\n");
	scanf("%d", &selecao);
	
	while(selecao == 1 || selecao == 2){
	
		assentos(voos, SIZE, selecao);
		
		printf("\nFavor digitar 1 para primeira classe\n\nFavor digitar 2 para classe econimica\n");
		scanf("%d", &selecao);
		
	}
	return 0;
}

void assentos( int lugares[], int tam, int a){
	static int cont=1, cont2 = 7, b=1, c=6;
	
	if( a == 1 and cont <= 6){
		lugares[ cont ] = b;
		
		exibir(b, a );
		
		++cont;
		++b;
	}
	if( a == 1 and cont >= 6){
		
		printf("\nA primeira classe nao possui mais assentos, deseja assentos na classe economica ? 2 para sim e 1 para nao: ");
		scanf("%d", &a);
	}

	if( a == 2 and  (cont2 > 6 and cont2 <= 12)){
	
			lugares[ cont2 ] = c;
			
			exibir(c, a );
			
			++cont2;
			++c;
		
	}
	if(a == 2 and  cont2 >= 12){
		
		printf("\nA classe economica nao possui mais assentos, deseja assentos na primeira classe? 1 para sim e 2 para nao: ");
		scanf("%d", &a);
	}

}

void exibir(int pol, int sec ){
	printf("\n////BILHETE DE EMBARQUE////\nNumero do assento: %d   Seccao: %d\n", pol, sec);
}



























