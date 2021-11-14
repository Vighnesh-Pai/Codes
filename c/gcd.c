#include <stdio.h>
void main()
{
	int n1,n2,gcd=1;
	scanf("%d%d",&n1,&n2);

	for(int i=n1;i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
			gcd=i;
	}
	printf("%d",gcd);
}
