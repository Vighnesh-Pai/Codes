#include <stdio.h>
int main()
{
	int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		int j=0;
		scanf("%d%d",&n,&m);
		int ar[1000],br[1000],cr[1000];
		for(int i=0;i<n;i++)
			ar[i]=i+1;
		for(int i=0;i<m;i++)
			scanf("%d",&br[i]);

		for(int i=0;i<n;i++)
		{
			int count=0;
			for(int j=0;j<m;j++)
			{
				if(ar[i]==br[j])
				{
					count++;
					break;
				}
			}
			if(count==0)
			{
				cr[j]=ar[i];
				j++;
			}
		}
		for(int i=0;i<n-m;i+=2)
		printf("%d ",cr[i]);
	    printf("\n");
		for(int i=0;i<n-m-1;i+=2)
		printf("%d ",cr[i+1]);
	    printf(" \n");
		if(n-m-1==0)
		printf(" \n");	
	}
	return 0;
}