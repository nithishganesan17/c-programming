//Write a program to print a person is eligible for voting or not. If not find how many year left to vote.
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter your age:");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("%d is eligible for voting",a);
	}
	else
	{
		printf("%d is not eligible for voting \n%d is left you to become eligible for voting",a,18-a);
		
	}
}
