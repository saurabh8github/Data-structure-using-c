//program to concatenate two string using user defined function
#include<stdio.h>
#include<string.h>
void concate_str(char s1[],char s2[]){
	int i,j;
	i = strlen(s1);	
	for(j = 0 ;s2[j] !='\0';i++,j++){
	s1[i] = s2[j];
	}
	s1[i] ='\0';
}
	int main() {
	char s1[100], s2[100];
	printf("enter the string s1:");
	gets(s1);
	printf("enter the string s2:");
	gets(s2);
	concate_str(s1,s2);
	printf("the concatenated string is:%s",s1);
}
	