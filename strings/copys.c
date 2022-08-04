
#include<stdio.h>
void copy(char s1[],char s2[]){int i=0;
s2[i]=s1[i];
if(s1[i]=='\0')
{return;}

}
int main(){ 
	char s1[300],s2[300];
printf("enter a string:\n");
gets(s2);
//printf("enter second sring:");
//gets(cop);
copy(s1,s2);
//printf("entered string is :%s\n",in);
printf("stirng  %s  is copied in :%s",s1);

return 0;


}