#include <stdio.h>
void read(int a[100][100],int,int);
void findmin(int a[100][100],int r,int c);
void main()
{
	int r,c,a[100][100];
	scanf("%d%d",&r,&c);
	read(a,r,c);
	findmin(a,r,c);
	
}

void read(int a[100][100],int r,int c)
{
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	return;
}

void findmin(int a[100][100],int r,int c)
{
	for(int i=0;i<c;i++)
	{
		int min=a[0][i];
		for(int j=0;j<r;j++)
		{
			if(a[j][i]<min)
				min=a[j][i];
		}
		printf("%d\n",min);
	}
}