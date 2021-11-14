#include <stdio.h>
void read(int a[100],int b[100],int,int);
void merge(int a[100],int b[100],int,int);
void main()
{
	int a[100],n,b[100],m;
	scanf("%d&d",&n,&m);
	read(a,b,n,m);
	merge(a,b,n,m);
}

void read(int a[100],int b[100],int n,int m)
{
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
}

void merge(int a[100],int b[100],int n,int m)
{
	int u[100];
	for(int i=0;i<n;i++)
       u[i]=a[i];

       for(int i=0;i<m;i++)
       u[i+n]=b[i];  

       for(int i=0;i<n+m;i++)
       printf("%d ",u[i]);   
}