#include "stdio.h"
int main()
{

  int t,ar[200],n;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    scanf("%d",&n);
    ar[i]=n;
  }
  printf("\n");
  for(int j=0;j<t;j++)
  {
    int fact=1;
    for(int k=1;k<=ar[j];k++)
    fact=fact*k;
    printf("%d\n",fact);
  }
return 0;
}
