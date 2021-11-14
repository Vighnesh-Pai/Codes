#include <stdio.h>
int main()
{
  int t,n,a,b,temp;
  scanf("%d",&t);

  while(t--)
  {
    int n1=0,n2=0;
    scanf("%d%d%d",&n,&a,&b);

    while(n--)
    {
      scanf("%d",&temp);
      if(temp%a == 0)
      n1++;
      else if(temp%b == 0)
      n2++;
     }

     if(n1>n2)
     printf("BOB\n");
     else
     printf("ALICE\n");
  }

  return 0;
}
