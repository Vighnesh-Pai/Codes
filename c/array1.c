#include "stdio.h"
void read(int x[100],int);
void display(int x[100],int);
void main()
{
	int x[100],n;
	scanf("%d",&n);
	read(x,n);
	display(x,n);
}

void read(int x[100],int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&x[i]);
	return;
}

void display(int x[100],int n)
{
	for(int i=n-1;i>=0;i--)
		printf("%d\n",x[i]);
}