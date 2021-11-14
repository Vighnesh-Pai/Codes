#include "stdio.h"
void main()
{
  printf("Enter the number\n");
  float sum=0,fact=1;
  int i=1,n;
  scanf("%d",&n);

  while(n>=i)
  {
    fact=fact*i;
    sum=sum+(1/fact);
    i++;
  }
  printf("The sum is %f",sum);
}
