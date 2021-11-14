#include <stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	while(n)
	{
		if(n&1==1)
			printf("1 ");
		else
			printf("0 ");
		n>>=1;
	}
}
