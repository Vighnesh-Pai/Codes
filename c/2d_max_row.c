#include <stdio.h>
void read(int a[100][100],int r,int c);
void minmax(int a[100][100],int r,int c);
void main()
{
int a[100][100],r,c;
printf("Enter the row size\n");
scanf("%d",&r);
printf("Enter the column size\n");
scanf("%d",&c);
printf("Enter the array element\n");
read(a,r,c);
minmax(a,r,c);
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

void minmax(int a[100][100],int r,int c)
{
	int max,min;
	for(int i=0;i<r;i++)
{
	max=a[i][0];min=a[i][0];
	for(int j=0;j<c;j++)
	{
		if(a[i][j]>max)
			max=a[i][j];
		else if(a[i][j]<min)
			min=a[i][j];
	}
	printf("\n%d\n%d\n",max,min);
}
}


