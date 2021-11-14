#include <stdio.h>
void swap(int* aptr,int* bptr);
void main()
{
	int a,b,*pa,*pb,pa=&a,pb=&b;
	scanf("%d %d",&a,&b);
	swap(pa,pb);
	printf("%d\n %d\n",a,b);
}

void swap(int *aptr,int *bptr)
{
	int tmp;
	tmp=*aptr;
	*aptr=*bptr
	*bptr=*tmp;
	return;
}