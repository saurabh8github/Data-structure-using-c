/*swapping the value of two variable using third variable*/
#include<stdio.h>                                          //headerfile and preprosecor
int main(){
int n1,n2,temp;                                            //initializing three variable
printf("enter first number");					    //taking input from user 
scanf("%d",&n1);
printf("enter second number:");
scanf("%d",&n2);
printf("number befor swap is :%d%d",n1,n2);
                                                           //logic for swapping
temp=n1;
n1=n2;
n2=temp;

printf("the number after swaped is %d%d:",n1,n2);
return 0;

}