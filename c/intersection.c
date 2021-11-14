#include <stdio.h>
void read(int a[100],int b[100],int,int);
void inter(int a[100],int b[100],int,int);
void main()
{
	int a[100],n,b[100],m;
	scanf("%d%d",&n,&m);
	read(a,b,n,m);
	inter(a,b,n,m);
}

void read(int a[100],int b[100],int n,int m)
{
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	return;
}
void inter(int a[100],int b[100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			{
				if(a[i]==b[j])
			    printf("%d\n",a[i]);
		    }
	}
}