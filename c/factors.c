#include <stdio.h>
void main()
{
  int a=1;
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  while(n>=a)
  {
    if(n%a==0)
    printf("Factors are %d\n",a);
    a++;
  }
}
