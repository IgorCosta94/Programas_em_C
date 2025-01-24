#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void corrida( char *vpch_T, char *vpch_L, char *movimento_T, char *movimento_L);

int main (void){
	char movimento_T[80]={"0"};
	char movimento_L[80]={"0"};
	
	
	
	char *vpch_T =  &movimento_T[1];
	char *vpch_L =  &movimento_L[1];
	
	corrida(vpch_T,vpch_L, movimento_T,movimento_L);
	
	return 0;	
}

void corrida( char *vpch_T, char *vpch_L,  char *movimento_T, char *movimento_L){

	int contador, mov_tartaruga, mov_lebre;
	
	srand(time(NULL));
	
	for( contador=1; vpch_T <= &movimento_T[70] || vpch_L<= &movimento_L[70]; ){
		;;
		mov_tartaruga = 1 + rand() % 10;
		mov_lebre = 1 + rand() % 10;
		
		if(mov_tartaruga >= 1 and mov_tartaruga <=5 ){
			vpch_T += 3;
			*vpch_T = 'T';
			if(vpch_T >= &movimento_T[70]){
				printf("A tartaruga vence\n");
				break;	
			}
		}
		
		if(mov_tartaruga >= 6 and mov_tartaruga <=7 ){
			vpch_T -= 6;
			*vpch_T = 'T';
			if(vpch_T >= &movimento_T[70]){
				printf("A tartaruga vence\n");
				break;	
			}
		}
		
		if(mov_tartaruga >= 8 and mov_tartaruga <=10 ){
			vpch_T += 1;
			*vpch_T = 'T';
			if(vpch_T >= &movimento_T[70]){
				printf("A tartaruga vence\n");
				break;	
			}
		}

		if(mov_lebre >= 1 and mov_lebre <=5 ){
			*vpch_L = 'L';
			if(vpch_L>= &movimento_L[70])
			{
				printf("A Lebre vence\n");
				break;	
			}
			
		}
		
		if(mov_lebre >= 6 and mov_lebre <=7 ){
			vpch_L += 9;
			*vpch_L = 'L';
				if(vpch_L>= &movimento_L[70])
			{
				printf("A Lebre vence\n");
				break;	
			}
			
		}
		
		if(mov_lebre >= 8 and mov_lebre <=10 ){
			vpch_L -= 5;
			*vpch_L = 'L';
				if(vpch_L>= &movimento_L[70])
			{
				printf("A Lebre vence\n");
				break;	
			}
			
		}		
		
	}

}
