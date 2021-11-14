#include <stdio.h>
void bsort(int ar[5000],int);
int main()
{
	int t,n,ar[5000];
	scanf("%d%d",&t,&n);
	while(t--)
	{
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	bsort(ar,n);
	int temp,diff=ar[1]-ar[0];
	for(int i=1;i<n-1;i++)
	{
		temp=ar[i+1]-ar[i];
		if(temp<diff)
			diff=temp;
	}
	printf("%d\n",diff);
    }
	return 0;
}

void bsort(int ar[5000],int n)
{
	int swap;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(ar[j]>ar[j+1])
			{
			swap=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=swap;
		    }
		}
	}
}
