#include <stdio.h>
void read(int a[100][100],int r,int c);
int find_sum(int a[100][100],int r,int c);
void disp(int);
void main()
{
int a[100][100],r,c,s;
printf("Enter the row size\n");
scanf("%d",&r);
printf("Enter the column size\n");
scanf("%d",&c);
printf("Enter the array element\n");
read(a,r,c);
s=find_sum(a,r,c);
disp(s);
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

int find_sum(int a[100][100],int r,int c)
{
	int sum=0;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			sum=sum+a[i][j];
		return sum;
}

void disp(int s)
{
	printf("%d\n",s);
}