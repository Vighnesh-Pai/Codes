#include "stdio.h"
void main()
{
  int mat1[3][3]=
  {  {1,2,3}
    ,{4,5,6}
    ,{7,8,9}
  },check1,check2,sum1[3][3],sum2[3][3];

  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {

      sum1[i][j]=mat1[i][j]+mat1[i+1];
      sum2[i][j]=mat1[i][j]+mat1[i+1][j];

      check1=isprime(sum1[i][j]);
      check2=isprime(sum2[i][j]);

      printf("%d",check1);

    }
  }
}

int isprime(int n)
{
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    count++;
  }

  if(count==2)
  return 1;
  else
  return 0;
}
