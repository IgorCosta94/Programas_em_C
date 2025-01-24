#include<stdio.h>

int main(void)
{
	int a,b;
	
	for(a = 1 ; a <= 4; a++){
		if(a == 1){
			for(b = 1 ; b <= 10 ; b++){
				switch (b){
					case 1:
						printf("*\n");
						break;
					case 2:
						printf("**\n");
						break;
					case 3:
						printf("***\n");
						break;
					case 4:
						printf("****\n");
						break;
					case 5:
						printf("*****\n");
						break;
					case 6:
						printf("******\n");
						break;
					case 7:
						printf("*******\n");
						break;
					case 8:
						printf("********\n");
						break;
					case 9:
						printf("*********\n");
						break;
					case 10:
						printf("**********\n");
						break;
				}	
			}
		}
		if(a == 2){
			printf("\n");
			for(b = 1 ; b <= 10 ; b++){
				switch (b){
					case 1:
						printf("**********\n");
						break;
					case 2:
						printf("*********\n");
						break;
					case 3:
						printf("********\n");
						break;
					case 4:
						printf("*******\n");
						break;
					case 5:
						printf("******\n");
						break;
					case 6:
						printf("*****\n");
						break;
					case 7:
						printf("****\n");
						break;
					case 8:
						printf("***\n");
						break;
					case 9:
						printf("**\n");
						break;
					case 10:
						printf("*\n");
						break;
				}	
			}
		}
		if(a == 3){
			printf("\n");
			for(b = 1 ; b <= 10 ; b++){
				switch (b){
					case 1:
						printf("**********\n");
						break;
					case 2:
						printf(" *********\n");
						break;
					case 3:
						printf("  ********\n");
						break;
					case 4:
						printf("   *******\n");
						break;
					case 5:
						printf("    ******\n");
						break;
					case 6:
						printf("     *****\n");
						break;
					case 7:
						printf("      ****\n");
						break;
					case 8:
						printf("       ***\n");
						break;
					case 9:
						printf("        **\n");
						break;
					case 10:
						printf("         *\n");
						break;
				}	
			}
		}
		if(a == 4){
			printf("\n");
			for(b = 1 ; b <= 10 ; b++){
				switch (b){
					case 1:
						printf("         *\n");
						break;
					case 2:
						printf("        **\n");
						break;
					case 3:
						printf("       ***\n");
						break;
					case 4: 
						printf("      ****\n");
						break;
					case 5:
						printf("     *****\n");
						break;
					case 6:
						printf("    ******\n");
						break;
					case 7:
						printf("   *******\n");
						break;
					case 8:
						printf("  ********\n");
						break;
					case 9:
						printf(" *********\n");
						break;
					case 10:
						printf("**********\n");
						break;
				}	
			}
		}
	}
	
	return 0;
}
