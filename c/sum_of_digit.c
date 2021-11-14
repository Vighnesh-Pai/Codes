#include "stdio.h"
int main()
{
  int T,N;
  scanf("%d",&T);
  for(int i=1;i<=T;i++)
  {
    int sum=0;
    scanf("%d",&N);
    while(N>0)
    {
      sum=sum+(N%10);
      N=N/10;
    }
    printf("%d\n",sum);
  }
  return 0;
}
