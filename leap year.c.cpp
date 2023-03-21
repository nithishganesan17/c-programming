// Write a program to find given year is leap year or not.
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter a year:");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("%d is a leap year",a);
	}
	else
	{
		printf("%d is not a leap year",a);
	}	
}
