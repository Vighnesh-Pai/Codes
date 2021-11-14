#include<stdio.h>
int main()
{
   int t,n,r,sum;
   scanf("%d",&t);
   while(t--)
   {
     sum=0;
     scanf("%d",&n);
     while(n>0)
     {
      r=n%10;
      sum=sum+r;
      n=n/10;
      }
      printf("%d\n",sum);
    }
}
