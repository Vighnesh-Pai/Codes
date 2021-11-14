#include <stdio.h>
int main()
{
  int t,n,m;
  scanf("%d",&t);
  while(t--)
  {
    int k=0;
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        c[k]=a[i]+b[j];
        k++;
      }
    }
  }
}
