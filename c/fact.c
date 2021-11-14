#include "stdio.h"
long int fact(int);
void main()
{
	long int n,f;
	printf("Enter the number\n");
	scanf("%ld",&n);
    f=fact(n);
    printf("%ld\n",f);
}

long int fact(int n)
{
  int fact=1;
  for(int k=1;k<=n;k++)
  fact=fact*k;
  return fact;
}
