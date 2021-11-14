#include "stdio.h"
void fib(int);

void main()
{
  int n;
  printf("Enter the terms to be printed\n");
  scanf("%d",&n);
  fib(n);
}

void fib(int n)
{
  int ft=-1,st=1;
  int count=0,sum=0;
  while(n>=count)
  {
    sum=ft+st;
    printf("%d\t",sum);
    ft=st;
    st=sum;
    count++;
  }

}
