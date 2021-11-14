#include <stdio.h>
#include <stdlib.h>
int check(int,int,int,int *ar);
int indexf(int,int *ar,int);
int main()
{
int t,n,n1,n2;
scanf("%d",&t);
  while(t--)
  {
    
    scanf("%d",&n);
    int sum=0,ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);

    for(int i = 0; i < n; i++) 
  { 
    if(ar[abs(ar[i])] > 0) 
      ar[abs(ar[i])] = -ar[abs(ar[i])]; 
    else
    {
    n1=indexf(abs(ar[i]),ar,n);
    n2=indexf(ar[i],ar,n);
    sum=sum+check(n1,n2,n,ar); 
    } 
  }          
    if(sum>0)
       printf("Truly Happy\n");
       else
       printf("Poor Chef\n");    
    }
    return 0;
  }
    
    

    int check(int i1,int i2,int n,int *ar)
    {
      int count=0,count1=0;
    for(int k=0;k<n;k++)
    {
      if(i1==ar[k])
      count++;
      if(i2==ar[k])
      count1++;
    }

    if((count1>0) && (count>0) && (i1!=i2))
    return 1;
  else
    return 0;
    

    }

    int indexf(int k,int *ar,int n)
    {
      for(int i=0;i<n;i++)
      {
        if(ar[i]==k)
          return i+1;
      }
    }

