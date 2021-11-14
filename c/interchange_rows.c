#include <stdio.h>
void read(int a[100][100],int r,int c);
void exchange(int a[100][100],int r,int c,int n1,int n2);
void disp(int a[100][100],int r,int c);
void main()
{
int a[100][100],r,c,s,n1,n2;
printf("Enter the row size\n");
scanf("%d",&r);
printf("Enter the column size\n");
scanf("%d",&c);
printf("Enter the array element\n");
read(a,r,c);
printf("Enter the row numbers to exchange\n");
scanf("%d%d",&n1,&n2);
exchange(a,r,c,n1-1,n2-1);
disp(a,r,c);
}

void read(int a[100][100],int r,int c)
{
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
		
		scanf("%d",&a[i][j]);
	
	}
}
printf("\n");
return;
}

void exchange(int a[100][100],int r,int c,int n1,int n2)
{
	int r1[100];
	for(int i=0;i<c;i++)
	{
		r1[i]=a[n1][i];
		a[n1][i]=a[n2][i];
		a[n2][i]=r1[i];
	}
	return;
}

void disp(int a[100][100],int r,int c)
{
	for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
		printf("%d ",a[i][j]);
	printf("\n");
}
}