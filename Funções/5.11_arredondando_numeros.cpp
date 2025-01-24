#include <stdio.h>
#include <math.h>

int arred_inteiro( float m );
float arred_decimos( float m );
float arred_centesimos( float m );
float arred_milesimos( float m );

int main(void)
{
	int n;
		
	scanf("%d", &n);
	
	printf("Inteiro: %d\n", arred_inteiro( n ) );
	printf("Decimos: %f\n", arred_decimos( n ) );
	printf("Centesimos: %f\n", arred_centesimos( n ) );
	printf("Milesumos: %f\n", arred_milesimos( n ) );
	
	return 0;
}


int arred_inteiro( float m ){
	
	return floor( m * 10 +5 ) / 1;
}

float arred_decimos( float m ){
	float y=floor( m * 10 + 5 ) / 10;
	return y;
}

float arred_centesimos( float m ){
	
	return floor( m * 100 + .5 ) / 100;
}

float arred_milesimos( float m ){
	
	return floor( m * 1000 + .5 ) / 1000;
}
