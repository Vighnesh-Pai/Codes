#include <stdio.h>
void read(int a[100][100],int,int);
void exc(int a[100][100],int,int);
void disp(int a[100][100],int,int);
void main()
{
	int m,n,a[100][100];
	scanf("%d%d",&m,&n);

	read(a,m,n);
	exc(a,m,n);

}

void read(int a[100][100],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	return;
}

void exc(int a[100][100],int m,int n)
{
	int n1,n2,temp[100];
	scanf("%d%d",&n1,&n2);

	for(int i=0;i<n;i++)
	{
		temp[i]=a[n1][i];
		a[n1][i]=a[n2][i];
		a[n2][i]=temp[i];
	}
	disp(a,m,n);
}

void disp(int a[100][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}

	
