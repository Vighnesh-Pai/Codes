#include <stdio.h>
void read(int ar[100],int n);
void calc(int ar[100],int n,int *max,int *min);
void main()
{
	int max,min,ar[100],n=5;
	read(ar,n);
	calc(ar,n,&max,&min);
	printf("%d-%d\n",max,min);
}

void calc(int ar[100],int n,int *max,int *min)
{
	*max=ar[0],*min=ar[0];
	for(int i=0;i<n;i++)
	{
		if(*max<*(ar+i))
			*max=*(ar+i);

		if(*min>*(ar+i))
			*min=*(ar+i);
	}

	return;
}

void read(int ar[100],int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",ar+i);
	return;
}