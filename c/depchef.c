#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);

  while(t--)
  {
    int n,a[100],b[100],d[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    scanf("%d",&d[i]);
    int j=0;

    for(int i=0;i<n;i++)
    {
      if(i==0)
      {
        if(d[0]>a[1]+a[n-1])
        {
        b[j]=d[0];
        j++;
        }
      }

      else if(i==n-1)
      {
        if(d[n-1]>a[0]+a[n-2])
        {
        b[j]=d[n-1];
        j++;
        }
      }
      else
      {
      if(d[i]>a[i-1]+a[i+1])
      {
        b[j]=d[i];
        j++;
      }
      }

    }

    int max=b[0];

    if(j==0)
    printf("-1\n");
    else
    {

    for(int i=0;i<j;i++)
    {
      if(b[i]>max)
      max=b[i];
    }
    printf("%d\n",max);
   }
  }
return 0;}
