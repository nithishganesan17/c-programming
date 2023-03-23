// write a program of class average 
#include<stdio.h>
#include<conio.h>
int a,b,c,d,total,average;
int main()
{
	printf("Enter the marks in python: ");
	scanf("%d",&a);
	printf("Enter the marks in c program: ");
	scanf("%d",&b);
	printf("Enter the marks in maths: ");
	scanf("%d",&c);
	printf("Enter the marks in physics: ");
	scanf("%d",&d);
	total = a+b+c+d;
	average = total/4;
	if (average>75)
	{
		printf("\nTotal : %d",total);
		printf("\nAverage : %d",average);
		printf("\nDistinction");
	}
	else if (average>=60 && average <75)
	{
		printf("\nTotal : %d",total);
		printf("\nAverage : %d",average);
		printf("\nFirst Distinction");
	}
	else if (average>=50 && average <60)
	{
		printf("\nTotal : %d",total);
		printf("\nAverage : %d",average);
		printf("\nSecond Distinction");
	}
	else if (average>=40 && average <50)
	{
		printf("\nTotal : %d",total);
		printf("\nAverage : %d",average);
		printf("\nThird Distinction");
	}
	else
	{
		printf("\nTotal : %d",total);
		printf("\nAverage : %d",average);
		printf("\nFail");
	}
}
