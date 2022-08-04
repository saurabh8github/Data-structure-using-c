#include<stdio.h>
int cmp(char s1[], char s2[]) {
for(;*s1!='\0'&&*s2 !='\0';s1++,s2++)
{
if(*s1>*s2) 
   return 1;
if(*s2>*s1)
   return -1;
}
if(*s1!='\0')
     return 1;
if(*s2!='\0')
     return -1;
}
int main(){
	char str1[]="raka";
            char str2[]="raka";
	int result;

printf("string campare 1=%d\n",cmp(str1,str2));
return 0;
}