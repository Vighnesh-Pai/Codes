#include <stdio.h>
int cnt(unsigned int n)
{
       unsigned	count=0;

	while(n)
	{
		if(n&1==1)
      count++;
		n>>=1;
	}
	printf("%d",count);
}
void main()
{
	int n;
	scanf("%d",&n);
	cnt(n);
}
