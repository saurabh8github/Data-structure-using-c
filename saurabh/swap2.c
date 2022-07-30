#include<stdio.h>						//headrfile and preprocesor
int main(){
                                                           //declaring two variables
int n1,n2;
printf("enter first number");					    //taking input from user 
scanf("%d",&n1);
printf("enter second number:");
scanf("%d",&n2);
printf("number befor swap is :%d%d",n1,n2);
									   //logic for swapping
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("number after swap is :%d%d",n1,n2);
return 0;
}