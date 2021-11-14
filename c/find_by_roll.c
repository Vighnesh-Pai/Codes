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
  std s1[100];
  int roll;
  printf("Enter the roll number\n");
  scanf("%d",&roll);

  search(s1,roll);
  return 0;
}

void search(std s1[100],int roll)
{
  int c=0;
  for(int i=0;i<100;i++)
  {
    if(roll==s1[i].roll){
    display(s1[i]);break;
    c++;}
  }
  if(c==00)
  printf("Roll not found\n");
}

void display(std s1)
{
  puts(s1.name);
  puts(s1.USN);
  printf("%c\n",s1.division);
  printf("%d\n%d\n",s1.class,roll);

  return;
}
