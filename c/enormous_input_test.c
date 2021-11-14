#include "stdio.h"
int main()
{
  int n,k,num,count=0;
  scanf("%d%d",&n,&k);
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&num);
    if(num%k==0)
    count++;
  }
  printf("%d",count);
  return 0;
}
