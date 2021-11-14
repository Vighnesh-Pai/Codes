#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      long long int k,n,count=0,a,b,big,small,c;
    scanf("%lld%lld%lld%lld",&n,&a,&b,&k);

    if(a>b)
    {
    big=a;
    small=b;
    }
    else
    {
    small=a;
    big=b;
    }

    if(a==b)
    {
      count=0;
    }

    else
    {

    if(big%small==0)
    {
      count=n/a+n/b-2*n/big;
    }



    else
    {
      c=big%small;
      count=n/a+n/b-2*n/((big*small)/c);
    }
    }

    if(count>=k)
    printf("Win\n");
    else
    printf("Lose\n");

  }
  return 0;
}
