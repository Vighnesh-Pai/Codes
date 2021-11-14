/*Program to find the maximum valued element of the array*/
#include "stdio.h"
void read(int x[100],int);
void display(int x[100],int);
void swap(int x[100],int,int);
void main()
{
	int x[100],n,n1,n2;
	scanf("%d",&n);
	read(x,n);
	printf("Enter the position of the values you wish to swap\n");
	scanf("%d%d",&n1,&n2);
	swap(x,n1,n2);
	display(x,n);
}

void read(int x[100],int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&x[i]);
	return;
}

void swap(int x[100],int n1,int n2)
{
	int b=x[n1-1];
	int c=x[n2-1];

	x[n1-1]=c;
	x[n2-1]=b;

	return;
}

void display(int x[100],int n)
{
	for(int i=0;i<n;i++)
		printf("%d\n",x[i]);
}