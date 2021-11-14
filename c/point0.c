#include <stdio.h>
void read(int *p,int n);
void calc(int *p,int n);
void main()
{
	int ar[100],n,*p;
	scanf("%d",&n);
	p=ar;
	read(p,n);
	calc(p,n);
}

void read(int *p,int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",p+i);
	return;
}

void calc(int *p,int n)
{
	for(int i=0;i<n;i++)
	{ 
		int sum=0;
		for(int j=i;j<n;j++)
		sum=sum+*(p+j);

	    if(sum==0)
	    	printf("shit exists\n");
	}
}