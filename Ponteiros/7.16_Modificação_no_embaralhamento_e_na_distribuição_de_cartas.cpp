#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void embaralhar(int wbaralho[][13]);

/**************************************************************************************************************************************************************************************/
int main(void)
{
    const char *naipe[4] = {"Copas","Ouros","Paus","Espadas"};
    
    const char *face[13] = {"As","Dois","Tres","Quatro",
                            "Cinco","Seis","Sete","Oito",
                            "Nove","Dez","Valete","Dama","Rei"};

    int baralho[4][13] = {{1,2,3,4,5,6,7,8,9,10,11,12,13},
						  {14,15,16,17,18,19,20,21,22,23,24,25,26},
						  {27,28,29,30,31,32,33,34,35,36,37,38,39},
						  {40,41,42,43,44,45,46,47,48,49,50,51,52}};
       
    srand(time(0));
    
    embaralhar(baralho);
    
	return 0;
}
/**************************************************************************************************************************************************************************************/
void embaralhar(int wbaralho[][13]){
    int linha, coluna;
    int c, d, carta;

    for(linha = 0; linha < 4; linha++){
    	for(coluna = 0; coluna < 13; coluna++){
            c = rand() % 4;
            d = rand() % 13;
			carta = wbaralho[linha][coluna];
        	wbaralho[linha][coluna] = wbaralho[c][d];
			wbaralho[c][d] = carta;
    	}
	}
	printf("     0      1      2      3      4      5      6      7      8      9     10     11     12\n");
	printf("    ________________________________________________________________________________________\n");
	for(linha = 0; linha < 4; linha++){
		
		printf("%d", linha);
    	for(coluna = 0; coluna < 13; coluna++){
            printf("%5d |", wbaralho[linha][coluna]);
			 
    	}
    	if(coluna == 13)printf("\n");
	}
}
/***************************************************************************************************************************************************************************************/
