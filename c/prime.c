#include <stdio.h>
void main()
{
int n;
int count=0;
  printf("Enter the number you want to check\n");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
  {
    count++;
  }
  }
  if(count==2)
  printf("The number is Prime\n");
  else
  printf("The number isn't Prime\n");
}
