#include "stdio.h"
int main()
{
  int t,p1,p2,k;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {
    scanf("%d%d%d",&p1,&p2,&k);
    if(((p1+p2)/k)%2==0)
    printf("CHEF\n");
    else
    printf("COOK\n");
  }
  return 0;
}
