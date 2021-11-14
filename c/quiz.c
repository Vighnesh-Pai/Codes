#include <stdio.h>
void read(int a[100][100],int);
void check(int a[100][100],int);
void disp(int a[100][100],int);
void main()
{
	int n,a[100][100];
	scanf("%d",&n);
	read(a,n);
	check(a,n);
	disp(a,n);
}

void read(int a[100][100],int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	return;
}

void disp(int a[100][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
				printf("\n");
	}
}

void check(int a[100][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				printf("not a sym mat\n");
				return;
			}
		}}
	printf("is a sym mat\n");
	return;
}
