#include <stdio.h>
void read(int *p,int n);
void disp(int *p,int n);
void sort(int *p,int n);
void main()
{
	int ar[100],n,*p;
	scanf("%d",&n);
	p=ar;
	read(p,n);
	sort(p,n);
	disp(p,n);
	
}

void read(int *p,int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",p+i);
}

void disp(int *p,int n)
{
	for(int i=0;i<n;i++)
		printf("%d",*(p+i));
}

void sort(int *p,int n)
{
	int swap;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(*(p+i)>*(p+1+i))
			{
				swap=*(p+i);
				*(p+i)=*(p+1+i);
				*(p+1+i)=swap;
			}
		}
	}
	return;
}