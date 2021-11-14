#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,a[200000],b[200000],line=0;
  scanf("%d %d",&n,&m);

  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);

  for(int i=0;i<m;i++)
  scanf("%d",&b[i]);

    unordered_set<long long int> s;
    for (int i=0; i<n; i++)
    {
      for(int j=0;j<m;j++)
      {
        if (s.find(a[i]+b[j])==s.end())
        {
            s.insert(a[i]+b[j]);
            printf("%d %d\n",i,j);
            line++;
            if(line==n+m-1)
            return 0;
        }
      }
    }
  }
