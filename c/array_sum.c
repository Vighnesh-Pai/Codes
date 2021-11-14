//Program to calculate the sum of the elements of the array
#include "stdio.h"
void read(int x[100],int);
void display(int);
int sum(int x[100],int);
void main()
{
	int x[100],n;
	scanf("%d",&n);
	read(x,n);
	sum(x,n);
}

void read(int x[100],int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&x[i]);
	return;
}

int sum(int x[100],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
		s=s+x[i];
	display(s);
}

void display(int s)
{
	printf("%d\n",s);
}
