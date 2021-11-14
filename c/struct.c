#include <stdio.h>
#include <string.h>
typedef struct stud
{
  char name[30];
  char USN[13];
  char division;
  int class,roll;
}std;

void display(char name[30],char USN[13],char division,int class,int roll);

int main()
{
  std s1;
  gets(s1.name);
  gets(s1.USN);
  scanf("%c",&s1.division);
  scanf("%d%d",&s1.class,&s1.roll);

  display(s1.name,s1.USN,s1.division,s1.class,s1.roll);
  return 0;
}

void display(char name[30],char USN[13],char division,int class,int roll)
{
  puts(name);
  puts(USN);
  printf("%c\n",division);
  printf("%d\n%d\n",class,roll);

  return;
}
