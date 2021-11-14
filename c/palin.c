#include <stdio.h>
void main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++)
	{int rem=0,rev=0;
		int j=i;
		while(j)
		{
			rem=j%10;
			rev=rev*10+rem;
			j=j/10;
		}
		if(rev==i)
			printf("%d\n",i);
	}
}
