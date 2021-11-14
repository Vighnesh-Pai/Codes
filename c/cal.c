#include <stdio.h>
void add(int n1,int n2,int *r1);
void sub(int n1,int n2,int *r2);
void mul(int n1,int n2,int *r3);
void div(int n1,int n2,int *r4);

void main()
{
	int n1,n2,r1,r2,r3,r4;
	scanf("%d%d",&n1,&n2);
	add(n1,n2,&r1);
	sub(n1,n2,&r2);
	mul(n1,n2,&r3);
	div(n1,n2,&r4);

	printf("addition=%d\nsubstraction=%d\nmultiplication=%d\ndivision=%d\n",r1,r2,r3,r4);
}

void add(int n1,int n2,int *r1)
{
	*r1=n1+n2;
	return;
}

void sub(int n1,int n2,int *r2)
{
	*r2=n1-n2;
	return;
}

void mul(int n1,int n2,int *r3)
{
	*r3=n1*n2;
	return;
}

void div(int n1,int n2,int *r4)
{
	*r4=n1/n2;
	return;
}

