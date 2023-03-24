//3.Write a C program to find sum of all odd numbers from 1 to n using for loop. How to find sum of all odd numbers in a given range in C programming. Logic to find sum of odd numbers in a given range using loop in C programming.
#include<stdio.h>
void main()
{
	int a,i,sum=0;
	printf("Enter the limit:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%2!=0)
		{
			sum+=i;
		}
	}
	printf("The sum of %d odd number is %d",a,sum);
	getch();
	
	
}
