#include <stdio.h>
void main()
{
  int t=9;
  for(int i=0;i<=t;i++)
  {
    for(int n=0;t/2+n+1<=t;n++)
    {
      printf("%d-%d\n",n,t/2+n+1);
    }
  }
}
