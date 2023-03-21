//Write a program to print multiplication table of given number.
#include<stdio.h>
#include<conio.h>
main()
{
	int i,a,b;
	printf("Enter which table want to print:");
	scanf("%d",&a);
	printf("Enter a limit for that:");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		printf("%d * %d = %d\n",a,i,a*i);
	}
}
