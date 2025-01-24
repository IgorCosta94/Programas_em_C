#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void embaralhar(int wbaralho[][13]);
void distribuir(const int wbaralho[][13], const char *wFace[],const char *wNaipe[]);
void resultado( const char *ma[], const char *ma2[], const char *x, const char *y);
void decidir(int a, int b,const char *p, const char *q);
void ordenar(const char *ma[], const char *ma2[]);
void decidir2(const char *ma[],const char *ma2[], int flush,int flush2);
void embaralhar2(int wbaralho[][13], int contador);
void distribuir2(const int wbaralho[][13], const char *wFace[],const char *wNaipe[],const char *nova[]);
void resultado2( const char *ma[], const char *ma2[], const char *x, const char *y);

/**************************************************************************************************************************************************************************************/
int main(void)
{
    const char *naipe[4] = {"Copas","Ouros","Paus","Espadas"};
    
    const char *face[13] = {"As","Dois","Tres","Quatro",
                            "Cinco","Seis","Sete","Oito",
                            "Nove","Dez","Valete","Dama","Rei"};

    int baralho[4][13] = {0};
    const char *mao[7] = {0}; 
    const char *mao2[12] = {0};  
    
    srand(time(NULL));
    
    embaralhar(baralho);
    distribuir(baralho, face, naipe);
    
	return 0;
}
/**************************************************************************************************************************************************************************************/
void embaralhar(int wbaralho[][13]){
    int linha;
    int coluna;
    int carta;

    for(carta = 1; carta <= 10; carta++){
        do{
            linha = rand() % 4;
            coluna = rand() % 13;
        }while(wbaralho[linha][coluna] != 0);
        wbaralho[linha][coluna] = carta; 
    }
}
/**************************************************************************************************************************************************************************************/
void distribuir(const int wbaralho[][13], const char *wFace[],
                const char *wNaipe[])
{
    int carta;
    int linha;
    int coluna;
    
	const char *n=NULL;
	const char *n2=NULL;
	
    const char *mao[7] =   {0}; 
    const char *mao2[12] = {0};  
    const char *miau[7]  = {0};
    const char *miau2[12]= {0};
	
    for(carta = 1; carta <= 5; carta++){
        for(linha = 0; linha <= 3; linha++){  
            for(coluna = 0; coluna <= 12; coluna++){  
                if(wbaralho[linha][coluna] == carta){
                    mao[carta] = wFace[coluna];
                    miau[carta] = wNaipe[linha];
                    printf("%s %s||", wFace[coluna], wNaipe[linha]);
                    n=wFace[coluna];   
                }
            }
        }
    }
    
    printf("\n\n");
    for(carta = 6; carta <= 10; carta++){
        for(linha = 0; linha <= 3; linha++){  
            for(coluna = 0; coluna <= 12; coluna++){  
                if(wbaralho[linha][coluna] == carta){
                    mao2[carta] = wFace[coluna];
                    miau2[carta] = wNaipe[linha];
                    printf("%s %s ||", wFace[coluna], wNaipe[linha]);
                    n2=wFace[coluna];
                }
            }
        }
    }
    
    resultado(mao,mao2,n,n2);

}
/**************************************************************************************************************************************************************************************/
void ordenar(const char *ma[], const char *ma2[]){
	const char *x;
	const char *y;
	
	int flush=0;
	int flush2=0;
	
	for(int a=1; a<6;a++){
		for(int b=a+1; b<7;b++){
			if( ma[a] > ma[b]){
				x=ma[a];
				ma[a]=ma[b];
				ma[b]=x;
			}
		}
	}
	
	
	for(int v=2;v<6;v++){
		if(ma[v]==ma[v+1]){
			flush=1;
		}
		else{
			flush=0;
		}
	}
	
	for(int a=6; a<10;a++){
		for(int b=a+1; b<11;b++){
			if( ma2[a] > ma2[b]){
				y=ma2[a];
				ma2[a]=ma2[b];
				ma2[b]=y;
			}
		}
	}
	

	for(int v=6;v<10;v++){
		if(ma2[v] == ma2[v+1]){
			flush2=1;
		}
		else{
			flush2=0;
		}
	}
    decidir2(ma,ma2,flush,flush2);
}

/**************************************************************************************************************************************************************************************/

void resultado( const char *ma[], const char *ma2[], const char *x, const char *y){
	
	 const char *naipe[4] = {"Copas","Ouros","Paus","Espadas"};
    
    const char *face[13] = {"As","Dois","Tres","Quatro",
                            "Cinco","Seis","Sete","Oito",
                            "Nove","Dez","Valete","Dama","Rei"};
    
    int linha;
    int coluna;
    int carta;
	
	int contador = 0;
	int contador2 = 0;
	int alta1=15, alta2=16;
	int numero[1]={0};
	int numero2[1]={0};
	
	int baralho2[4][13] = {0};
	
	const char *nova[5] = {0};

	printf("\n    MAO 1   \n");
    for(int i = 1; i <5 ; i++){  
    	for(int j = i+1; j < 6; j++){
    		if(ma[i] == ma[j]){
				printf("\nPar de %s", ma[i]);
				contador++;
				x=ma[i];
				nova[i]=ma[i];
			}
    	}
	
    	for(carta = 1; carta <= contador-5; carta++){
        	do{
            	linha = rand() % 4;
            	coluna = rand() % 13;
        	}while(baralho2[linha][coluna] != 0);
        	baralho2[linha][coluna] = carta; 
    	}
	}
	
	printf("\n    MAO 2   \n");
    for(int i = 6; i <10 ; i++){  
    	for(int j = i+1; j < 11; j++){
    		if(ma2[i] == ma2[j]){
				printf("\nPar de %s", ma2[i]);
				contador2++;
				y=ma2[i];
			}
    	}
	}
	switch(contador2){
		case 1 :
			printf("\nPAR\n");
			break;
			
		case 2 :
			printf("\nDOIS PARES\n");
			break;
		
		case 3 :
			printf("\nTRINCA\n");
			break;
			
		case 4 :
			printf("\nQUADRA\n");
			break;
	}

	embaralhar2(baralho2,contador);
	distribuir2(baralho2, face, naipe,nova);
}

/***************************************************************************************************************************************************************************************/

void embaralhar2(int wbaralho2[][13], int contador){
    int linha;
    int coluna;
    int carta;

    for(carta = 1; carta <= contador-5; carta++){
        do{
            linha = rand() % 4;
            coluna = rand() % 13;
        }while(wbaralho2[linha][coluna] != 0);
        wbaralho2[linha][coluna] = carta; 
    }
}

/****************************************************************************************************************************************************************************************/

void distribuir2(const int wbaralho[][13], const char *wFace[],
                const char *wNaipe[],const char *nova[])
{
    int carta;
    int linha;
    int coluna;
    
	const char *n=NULL;
	const char *n2=NULL;
	
    const char *mao[7] =   {0}; 
    const char *mao2[12] = {0};  
    const char *miau[7]  = {0};
    const char *miau2[12] ={0};
	
    for(carta = 1; carta <= 5; carta++){
        for(linha = 0; linha <= 3; linha++){  
            for(coluna = 0; coluna <= 12; coluna++){  
                if(wbaralho[linha][coluna] == carta){
                    nova[carta] = wFace[coluna];
                    miau[carta] = wNaipe[linha];
                    printf("%s %s||", wFace[coluna], wNaipe[linha]);
                    n=wFace[coluna];   
                }
            }
        }
    }
    
    printf("\n\n");
    for(carta = 6; carta <= 10; carta++){
        for(linha = 0; linha <= 3; linha++){  
            for(coluna = 0; coluna <= 12; coluna++){  
                if(wbaralho[linha][coluna] == carta){
                    mao2[carta] = wFace[coluna];
                    miau2[carta] = wNaipe[linha];
                    printf("%s %s ||", wFace[coluna], wNaipe[linha]);
                    n2=wFace[coluna];
                }
            }
        }
    }
    
    resultado2(nova,mao2,n,n2);

}
/***************************************************************************************************************************************************************************************/
  
void resultado2( const char *ma[], const char *ma2[], const char *x, const char *y){
	
	int contador = 0;
	int contador2 = 0;
	int alta1=15, alta2=16;
	int numero[1]={0};
	int numero2[1]={0};


	printf("\n    MAO 1   \n");
    for(int i = 1; i <5 ; i++){  
    	for(int j = i+1; j < 6; j++){
    		if(ma[i] == ma[j]){
			//	printf("\nPar de %s", ma[i]);
				contador++;
				x=ma[i];
			}
    	}
	}
	switch(contador){
		case 1 :
			printf("\nPAR\n");
			break;
			
		case 2 :
			printf("\nDOIS PARES\n");
			break;
		
		case 3 :
			printf("\nTRINCA\n");
			break;
			
		case 4 :
			printf("\nQUADRA\n");
			break;
	}

	printf("\n    MAO 2   \n");
    for(int i = 6; i <10 ; i++){  
    	for(int j = i+1; j < 11; j++){
    		if(ma2[i] == ma2[j]){
				printf("\nPar de %s", ma2[i]);
				contador2++;
				y=ma2[i];
			}
    	}
	}
	switch(contador2){
		case 1 :
			printf("\nPAR\n");
			break;
			
		case 2 :
			printf("\nDOIS PARES\n");
			break;
		
		case 3 :
			printf("\nTRINCA\n");
			break;
			
		case 4 :
			printf("\nQUADRA\n");
			break;
	}

	decidir(contador, contador2, x, y);
}

/**************************************************************************************************************************************************************************************/
void decidir(int a, int b, const char *p, const char *q){
	if(a!=b){
    	if (a >b ){
        	printf("\n\nA MAO VENCEDORA E A 1");
    	}	 
		if(b > a ){
        	printf("\n\nA MAO VENCEDORA E A 2");
    	}
	}
	if(a==b and a!=0 and b!=0){
    	if(p >q ){
        	printf("\n\nA MAO VENCEDORA E A 1");
    	}	 
		if(q > p ){
        	printf("\n\nA MAO VENCEDORA E A 2");
    	}
	}
	
}

void decidir2(const char *ma[],const char *ma2[], int flush,int flush2){

	if(flush == 1){
		//printf("\nMAO[1]: ");
		for(int v=6;v<7;v++){
			printf(" %s", ma[v]);
		}
	
	}

	if(flush2 == 1){
		//printf("\nMAO[2]:");
		for(int v=2;v<1;v++){
			printf(" %s", ma2[v]);
		}
	
	}
}

