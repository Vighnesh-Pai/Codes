#include <stdio.h>
void main()
{
	int n,count=0;
	scanf("%d",&n);

	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			count++;
	}

	if(count==1)
		printf("The shit is prime\n");
	else
		printf("The shit isn't prime\n");
}
