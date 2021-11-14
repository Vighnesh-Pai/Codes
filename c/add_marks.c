#include <stdio.h>
#include <string.h>
typedef struct stud
{
  char name[30];
  int m1;
  int m2;
  int total;
}std;

std add(std s1);
std read(std s1);

int main()
{
  std s1;
  s1=read(s1);
  s1=add(s1);
  printf("\n%d\n%d\n%d\n",s1.m1,s1.m2,s1.total);
}

std read(std s1)
{
  gets(s1.name);
  scanf("%d%d",&s1.m1,&s1.m2);
  return s1;
}

std add(std s1)
{
  s1.total=s1.m1+s1.m2;
  return s1;
}
