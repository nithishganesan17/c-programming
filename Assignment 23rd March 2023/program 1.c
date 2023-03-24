//1. Write a C program to input three numbers from user and find maximum between three numbers using conditional/ternary operator ?:. How to find maximum between three numbers using conditional operator.
#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("Enter Third Number:");
	scanf("%d",&c);
	max = (a>b) ? (b>c? a:b) : (b > c ? b : c);
	printf("The Maximum between three number is %d",max);
	getch();
}
