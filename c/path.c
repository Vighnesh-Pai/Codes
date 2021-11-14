#include "stdio.h"
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int sp,ep,n,x,sum=0,spp,epp;
		scanf("%d",&sp);
		scanf("%d",&ep);
		scanf("%d",&n);
		int path[n],rate[n-1];

		for(int i=0;i<n;i++)
		{
			path[i]=scanf("%d",&x);
			if(sp==x)
				spp=i;
			if(ep==x)
				epp=i;
		}

		for(int j=0;j<(n-1);j++)
		{
			scanf("%d",&x);
			rate[j]=x;
		}

	for(int k=spp;k<epp;k++)
	  sum=sum+rate[k];
          printf("%d\n",sum);
      

}
return 0;
}