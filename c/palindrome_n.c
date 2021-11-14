#include "stdio.h"
void main()
{
	printf("enter the number\n");
	int n;
	scanf("%d",&n);
int sum=0;
	while(n>0)
		{
			sum=sum+(n%10);
			n=n/10;
		}
		printf("Sum of the digit is %d\n",sum);

}