#include "stdio.h"
long int fact(int,int);
void main()
{
  long int n,f,r;
  printf("Enter the n and r\n");
  scanf("%ld%ld",&n,&r);
    f=fact(n,r);
    printf("%ld\n",f);
}

long int fact(int n,int r)
{
  int fact1=1;
  for(int i=1;i<=n;i++)
  fact1=fact1*i;

  int fact2=1;
  for(int j=1;j<=n-r;j++)
  fact2=fact2*j;

  int fact3=1;
  for(int k=1;k<=r;k++)
  fact3=fact3*k;
   
   return ((fact1/fact2)/fact3);
  
}
