#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,t;
	float agg;
	printf("Enter the marks in Python:");
	scanf("%d",&a);
	printf("Enter the marks in C programming:");
	scanf("%d",&b);
	printf("Enter the marks in Mathematics:");
	scanf("%d",&c);
	printf("Enter the marks in Physics:");
	scanf("%d",&d);
	t=a+b+c+d;
	printf("Total=%d",t);
	agg=t/4;
	printf("\nAggregate=%f",agg);
	if(agg>75)
	{
		printf("\nDISTINCTION");
	}
	else if(agg>=60 || agg<75)
	{
		printf("\nFIRST dIVISION ");
	}
	else if(agg>=50 || agg<60)
	{
		printf("\nSECOND DIVISION");
	}
	else if(agg>=40 || agg<50)
	{
		printf("\nTHIRD DIVISION");
	}
	else
	{
		printf("\nFAIL");
	}
	return 0;
}
