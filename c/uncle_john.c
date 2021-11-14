#include <stdio.h>
void bsort(int ar[100],int n);
int main()
{
	int t,n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int ar[100];
		for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
		scanf("%d",&k);
		int temp=ar[k-1];
		bsort(ar,n);
		for(int i=0;i<n;i++)
		    if(ar[i]==temp)
				printf("%d\n",i+1);
    }
    return 0;
}


void bsort(int ar[100],int n)
{
	int swap;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
			swap=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=swap;
		    }
		}
	}
	return;
}