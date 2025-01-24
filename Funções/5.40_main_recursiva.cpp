#include<stdio.h>

int teste(void);

int main(void){
	static int count = 0;

	printf("%d\n",count++);
	teste();
	return 0;
}

int teste(void){
	
	main();
	
	return 1;
}
