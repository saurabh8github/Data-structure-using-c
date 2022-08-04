//program to concatenate two string using built_in function
#include<stdio.h>
#include<string.h>
	int main() {
	char s1[100], s2[100];
	printf("enter the string s1:");
	gets(s1);
	printf("enter the string s2:");
	gets(s2);
	strcat(s1,s2);
	printf("the concatenated string is:%s",s1);
}
	