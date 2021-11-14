#include <stdio.h>
void read(int a[100][100],int r,int c);
int findcount(int a[100][100],int r,int c);
void main()
{
int a[100][100],r,c,n,count;
printf("Enter the row size\n");
scanf("%d",&r);
printf("Enter the column size\n");
scanf("%d",&c);
printf("Enter the array element\n");
read(a,r,c);
n=(r*c)/2;
count=findcount(a,r,c);
if(count>n)
printf("This is a sparse matrix\n");
else
printf("This is not a sparse matrix\n");
}

void read(int a[100][100],int r,int c)
{
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
		scanf("%d",&a[i][j]);
}
return;
}

int findcount(int a[100][100],int r,int c)
{
	int count=0;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			if(a[i][j]==0)
				count++;
			return count;
}