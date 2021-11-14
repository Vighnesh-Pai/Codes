#include <stdio.h>
#include <math.h>
void main()
{
	int t,a,d,m,n,p,dis,cost;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&a);
		scanf("%d",&d);
		scanf("%d",&m);
		scanf("%d",&n);
		scanf("%d",&p);

		dis=sqrt(m*m+n*n);
		cost=dis*p;
		if((2*cost+d)<=a)
			printf("Possible\n");
		else
			printf("Impossible\n");


	}

}
