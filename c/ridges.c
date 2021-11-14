#include<stdio.h>
long lcm(long,long);
int main()
{
  long x1,x2,y1,y2,l,y3,x3;
  int t,n;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%d",&n);
  x1=1,y1=2,x2=1,y2=4;
  for(int i=3;i<=n;i++)
  {
  y3=lcm(y1,y2);
  x3=(y3/y1)*x1 + (y3/y2)*x2;
  y3=y3*2;
  x1=x2;
  y1=y2;
  x2=x3;
  y2=y3;
}
if(n==1)
printf("1 2 ");
else if(n==2)
printf("1 4 ");
else
printf("%ld %ld ",x3,y3);
}
return 0;
}

long lcm(long n1,long n2)
{
    long i, gcd, lcm;
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    lcm = (n1*n2)/gcd;
    return lcm;
}

