//program to enter the work of student in four subjects with total average and aggregate
#include<stdio.h>
#include<conio.h>
int a,b,c,d,total,average;
int main()
{
	printf("enter the python mark:");
	scanf("%d",&a);
	printf("enter the c program mark;");
	scanf("%d",&b);
	printf("enter the maths mark:");
	scanf("%d",&c);
	printf("enter the physics mark:");
	scanf("%d",&d);
	total=a+b+c+d;
	average=total/4;
	if (average>75)
	{
		printf("\ntotal : %d ",total);
		printf("\navearage :%d", average);
		printf("\ndistinction");
	}
	else if (average>=60 && average <75)
	{
		printf("\ntotal : %d ",total);
		printf("\navearage :%d", average);
		printf("\nfirst distinction");
	}
	else if (average>=50 && average <60)
	{
		printf("\ntotal : %d ",total);
		printf("\navearage :%d", average);
		printf("\nsecond distinction");
	}
	else if (average>=40)
	{
		printf("\ntotal : %d ",total);
		printf("\navearage :%d", average);
		printf("\nthird distinction");
	}
}
