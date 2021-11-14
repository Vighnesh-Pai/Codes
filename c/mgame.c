#include <stdio.h>
int main()
{
  int t,p,n;
  scanf("%d",&t);
  while(t--)
  {
    int max=-1,max1=-1,max2=-1,max3=-1,count1=0,count2=0,count3=0;
    scanf("%d%d",&n,&p);

    for(int i=1;i<=p;i++)
    if(n%i>max1)
      max1=n%i;

    for(int i=1;i<=p;i++)
    if(max1%i>max2)
        max2=max1%i;

    for(int i=1;i<=p;i++)
    if(max2%i>max3)
        max3=max2%i;

        max=max3%n;

    for(int i=1;i<=p;i++)
    {
      if(n%i==max1)
      count1++;

      if(max1%i==max2)
      count2++;

      if(max2%i==max3)
      count3++;
    }
    printf("%d%d%d%d\n",max1,max2,max3,max);
    printf("%d\n",count1*count2*count3);
  }
  return 0;
}
