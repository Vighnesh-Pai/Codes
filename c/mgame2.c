#include <stdio.h>
int main()
{
  int t,p,n;
  scanf("%d",&t);
  while(t--)
  {
    int max=-1,max1=-1,max2=-1,max3=-1,count3=0;
    scanf("%d%d",&n,&p);

    for(int i=1;i<=p;i++)
    {
      for(int j=1;j<=p;j++)
      {
        for(int k=1;k<=p;k++)
        {
          if((((n%i)%j)%k)%n >max)
          max=(((n%i)%j)%k)%n;
        }
      }
    }


    for(int i=1;i<=p;i++)
    {
      for(int j=1;j<=p;j++)
      {
        for(int k=1;k<=p;k++)
        {
          if((((n%i)%j)%k)%n==max)
          count3++;
        }

      }

    }

    printf("%d\n",count3);
  }
  return 0;
}
