/*Program to find the maximum valued element of the array*/
#include "stdio.h"
void read(int x[100],int);
void display(int);
int max(int x[100],int);
void main()
{
	int x[100],n;
	scanf("%d",&n);
	read(x,n);
	max(x,n);
}

void read(int x[100],int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&x[i]);
	return;
}

int max(int x[100],int n)
{
	int s=x[0];
	for(int i=0;i<n;i++)
		{
			if(x[i]>s)
				s=x[i];
		}
	display(s);
}

void display(int s)
{
	printf("%d\n",s);
}