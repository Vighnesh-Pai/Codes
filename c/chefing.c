#include <stdio.h>
#include <string.h>
int main()
{
  int t,n;
  scanf("%d",&t);
  while(t--)
  {
    char ar[1000][201];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%s",ar[i]);
    int low=strlen(ar[0]),index=0;

    for(int i=0;i<n;i++)
    {
      if(low>strlen(ar[i]))
      {
        low=strlen(ar[i]);
        index=i;
      }
    }

    int c3=0,c1,c2;
    for(int i=0;i<low;i++)
    {c2=0;
      for(int j=0;j<n;j++)
      {
        for(int k=0;k<strlen(ar[i]);k++)
        { c1=0;
          if(ar[j][k]==ar[index][i]){
          c1++;break;}
        }if(c1>0)c2++;
      }if(c2>=n)c3++;
    }
  printf("%d\n",c3);
    }
    return 0;
}
