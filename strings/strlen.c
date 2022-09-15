#include<stdio.h>
#include<string.h>
int main(){
		char s[400]; //String declared 
		printf("Enter a string:");//taking input 
		gets(s); 
                //Printing the length of the string 
		printf("the length of string is %d",strlen(s));
		return 0;
}
