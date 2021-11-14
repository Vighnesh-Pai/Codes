#include <stdio.h>
#include <string.h>
typedef struct stud
{
  char name[30];
  char USN[13];
  char division;
  int class,roll;
}std;

void display(std s1);

int main()
{
  std s1;
  gets(s1.name);
  gets(s1.USN);
  scanf("%c",&s1.division);
  scanf("%d%d",&s1.class,&s1.roll);

  display(s1);
  return 0;
}

void display(std s1)
{
  puts(s1.name);
  puts(s1.USN);
  printf("%c\n",s1.division);
  printf("%d\n%d\n",s1.class,s1.roll);

  return;
}
