//2. Write a C program to input a character and check whether the character is alphabet or not using Conditional/Ternary operator ?:. How to check alphabets using conditional operator in C programming.
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter Character:");
	scanf("%c",&ch);
	(ch >='A' && ch<='Z' || ch>='a' && ch<='z') ? printf("Given Character is Alphabet") : printf("Given Character is Not Alphabet");
	getch();
}
