#include "stdio.h"
int digitsum();
int add();
int main()
{
  int t,n,d;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d%d",&n,&d);
    int sum=add(n,d);
    int sum2=digitsum(n);

    if(sum < sum2 && sum < n)
  n=sum;
  else if(sum2 < n)
  n=sum2;

printf("%d\n",n);
}
}

int add(int n,int d)
{
  int sum=n+d;
  return sum;
}


int digitsum(int n)
{
  int sum=0;
  while(n>0)
  {
    sum=sum+(n%10);
    n=n/10;
  }
  return sum;
}
