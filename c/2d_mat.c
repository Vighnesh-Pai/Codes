#include <stdio.h>
void read(int a[100][100],int r,int c);
void disp(int a[100][100],int r,int c);
void main()
{
int a[100][100],r,c;
printf("Enter the row size\n");
scanf("%d",&r);
printf("Enter the column size\n");
scanf("%d",&c);
printf("Enter the array element\n");
read(a,r,c);
disp(a,r,c);
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

void disp(int a[100][100],int r,int c)
{
	for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
		printf("%d ",a[i][j]);
	printf("\n");
}
}