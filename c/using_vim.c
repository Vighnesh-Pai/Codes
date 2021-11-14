#include "stdio.h"
void main()
{
	int n;
	printf("just enter a nubmer to start this journey");
	scanf("%d",&n);

	for(int i=0;i<=n;i++)
	{
		for(int k=i;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
		
	}
}
