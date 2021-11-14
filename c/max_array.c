#include <stdio.h>
void findmax(int n);
void main()
{
	int a[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		

	findmax(a[i]);
}
}

void findmax(int n)
{
	int d,big=0;
	while(n)
	{
		d=n%10;
		if(d>big)
			big=d;
		n=n/10;
	}
	printf("%d\n",big);
	return;
}