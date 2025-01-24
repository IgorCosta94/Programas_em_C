#include<stdio.h> 
#include<ctype.h> 
#include<string.h> 
#include<stdlib.h> 
#include<time.h> 
int main(void){ 
char frase[]= "fui para lagarto sergipe"; 
char s1[50]={0}; 
char *d; 
char first;
int len;
d= strtok(frase," "); 
while(d != NULL){ 
strcpy(s1,d); 
first = s1[0];
len=strlen(s1);
for(int i= 0 ; i< len ;i++){
	s1[i]=s1[i+1];
}
s1[len-1]=first;
 
strcat(s1,"ei "); 
printf("%s", s1);
d=strtok(NULL," "); 

 
} 
printf("\n");
 return 0; }
