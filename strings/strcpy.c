#include<stdio.h>
#include<string.h>
int main(){
                 	char inputstring[200],copystring[200];
		printf("enter a string\n");
		gets(inputstring);
		strcpy(copystring,inputstring);
		printf("input string:%s\n",inputstring);
		printf("copy string:%s",copystring);
		
 		return 0;
}