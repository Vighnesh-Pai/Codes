#include "stdio.h"
int sum(int,int);
main()
{
	int a,b;
	int s;
	float avg;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
	avg=s/2.0;
	printf("The sum =%d\n",s);
	printf("The average =%f\n",avg);
}

int sum(int a,int b)
{
	return a+b;
}