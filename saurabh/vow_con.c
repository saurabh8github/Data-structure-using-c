#include<stdio.h>
int main(){
printf("Enter a character:");
ch=getch();
switch{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("character is %c vowel",ch);
		 break;
		default:
		 printf("character is %c consonant",ch):

}
return 0;
}