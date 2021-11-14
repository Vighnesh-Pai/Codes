#include <stdio.h>
int main()
{
	int t,n,a[10000];
	scanf("%d",&t);
	while(t--)
	{
		int total=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
	        for(int i=0;i<n;i++)
		{
			int count=0;
			for(int j=0;j<i;j++)
				if(a[j]>a[i])
					count++;
			if(count==i)
				total++;
		}
		printf("%d\n",total);
	}

	return 0;
}	
