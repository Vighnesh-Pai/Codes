#include <stdio.h>
#include <math.h>
int main()
{
	int n,t;
	scanf("%d",&t);
	while(t--)
	{
		int k=0,sum=0;
		scanf("%d",&n);
		while(pow(5,(k+1))<=n)
			k++;
		for(int i=1;i<=k;i++)
			sum=sum+n/pow(5,i);
		printf("%d\n",sum);
	}
	return 0;
}