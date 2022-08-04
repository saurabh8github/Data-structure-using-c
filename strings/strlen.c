#include<stdio.h>
#include<string.h>
int main(){
		char s[400];
		printf("Enter a string:");
		gets(s);
		printf("the length of string is %d",strlen(s));
		return 0;
}