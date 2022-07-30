/*program to find the small and capital and recognize special symbol and digits entered by the user*/ 

#include<stdio.h>
int main(){char x;
       printf("enter a character:");
       scanf("%c",&x);
 	 if(x>='a'&&x<='z')			//for small letters
            printf("Small letter");		//for capital letters
 	 else if(x>='A'&&x<='Z')
		printf("capital letter");
       else if(x>='0'&&x<='9')		//for digits 
		printf(" digit");
       else
		printf("special symbol");	//for special symbols
       return 0;
}