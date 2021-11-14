#include <stdio.h>
void max_min(int n1,int n2,int *max,int *min);
void main()
{
	int n1,n2,max,min;
	scanf("%d%d",&n1,&n2);
	max_min(n1,n2,&max,&min);
	printf("max=%d\nmin=%d\n",max,min);
}

void max_min(int n1,int n2,int *max,int *min)
{
	if(n1>n2)
	{
		*max=n1;
		*min=n2;
	}
	else
	{
		*max=n2;
		*min=n1;
	}

	return;
}

