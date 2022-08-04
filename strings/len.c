#include<stdio.h>
int len(char str[]){
 int c=0;
while(str[c]!='\0'){
	c++;
}
return c;
}
int main(){
int c =0;

char str[300];
printf("Enter a string:");
gets(str);
printf("the length of the string by  user define function len is %d",len(str));

}