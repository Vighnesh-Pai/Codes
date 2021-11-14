#include "stdio.h"
int main()
{
  int T;
  float n;
  scanf("%d",&T);

  for(int i=1;i<=T;i++)
  {
    int count=0;
    scanf("%f",&n);
    while(n>0)
    {
      if((int)n%10==4)
      count++;
      n=n/10;
    }
    printf("%d\n",count);
  }
  return 0;
}
