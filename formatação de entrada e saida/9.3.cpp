#include<stdio.h>
#include<string.h>
int main(void){
	
	//9.4 Escreva uma instrução printf ou scanf para cada um dos itens a seguir
	//a) Imprimir o inteiro sem sinal 400000 alinhado à esquerda em um campo de 15 digitos com 8 digitos
	//printf("%-15.8u\n",400000);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	
	//b) Ler um valor hexadecimal na variável hex
	//int hex;
	//scanf("%x", &hex);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//c)Imprimir 200 com e sem sinal
	/*printf("%u\n",200);
	printf("+%d\n",200);*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//d)Imprimir 100 em formato hexadecimal precedido po 0x
	//printf("%#X\n",100);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//e)Ler caracteres no array s até que a letra p seja encontrada.
	/*char s[10];
	scanf("%[pppp]",s);
	printf("%s",s);*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

	//f)Imprimir 1.234 em um campo de 9 digitos com zeros iniciais
	//printf("%014f\n",1.234);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

	//g)ler um horario e descartar as partes desnecessarias
	/*int hora, minuto, segundo;
	scanf("%d%*c%d%*c%d",&hora,&minuto,&segundo);
	printf("hora:%d Minuto:%d segundos:%d", hora,minuto,segundo);*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//h)ler uma string e eliminar as aspas.	
	/*char s[20];
	scanf(" \"%[^\"]\" ", s);
	printf("%s",s);*/
	
	//i)
	/*int h,m,s;
	scanf("%d%*c%d%*c%d",&h,&m,&s);
	printf("Hora:%d Minuto:%d Segundo:%d\n", h,m,s);*/
	
char s[12];        // Array para armazenar a string lida (ajustado para comportar até 10 caracteres e '\0')
    char cleaned[10];  // Array para armazenar a string sem aspas
    scanf(" \"%[^\"]\" ", s);  // Lê a string entre aspas

    // Copia o conteúdo ignorando as aspas
    strncpy(cleaned, s, sizeof(cleaned) - 1);
    cleaned[sizeof(cleaned) - 1] = '\0';  // Garante que a string será terminada

    printf("%s\n", cleaned);  // Exibe a string sem aspas


	return 0;
}

