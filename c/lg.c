#include <stdio.h>
void gcd(int *g,int b,int);
void lcm(int *l,int b,int g);
void main()
{
	int a[5]={3,4,6,12,36},l=a[0],g=1;

	for(int i=0;i<4;i++)
	{
		gcd(&g,a[i+1],l);
	    lcm(&l,a[i+1],g);
	    printf("%d-%d\n",g,l);
	}

	
}

void gcd(int *g,int b,int l)
{
	for(int i=b;i<=l;i++)
		if(l%i==0 && b%i==0)
			*g=i;
		return;
}

void lcm(int *l,int b,int g)
{
	*l=(*l*b)/g;
	return;
}