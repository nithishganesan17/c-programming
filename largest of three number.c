//wite a program to find  largest of three numbers.
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("A is largest number");
	}
	else if(b>c)
	{
		printf("B is largest number");
	}
	else
	{
		printf("C is largest number");
	}
}
