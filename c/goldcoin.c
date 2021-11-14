#include <stdio.h>
long long int distro(long long int);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,sum=0;
		scanf("%lld",&n);
		sum=distro(n);
		if(sum>=n)
			printf("%lld\n",sum);
		else
		printf("%lld\n",n);

	}
	return 0;
}

long long int distro(long long int n)
{
	long long int a[3];
	a[0]=n/2;
	a[1]=n/3;
	a[2]=n/4;

	for(int i=0;i<3;i++)
		if(a[i]!=0)
			distro(a[i]);
		return a[0]+a[1]+a[2];
}
