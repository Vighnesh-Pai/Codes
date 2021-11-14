#include <stdio.h>
typedef struct
{
  char name[30];
  char div;
  int roll;
  int m1,m2,m3;
  float avg;
  int sum;
}s;

void read(s *p1);
void add(s *p1);
void avg(s *p1);
void disp(s *p1);

void main()
{
  s s1,*p1;
  p1=&s1;
  read(p1);
  add(p1);
  avg(p1);
  disp(p1);
}

void read(s *p1)
{
  gets(p1->name);
  scanf("%c%d%d%d%d",&p1->div,&p1->roll,&p1->m1,&p1->m2,&p1->m3);
  return;
}

void add(s *p1)
{
  p1->sum=p1->m1+p1->m2+p1->m3;
  return;
}

void avg(s *p1)
{
  p1->avg=p1->sum/3;
  return;
}

void disp(s *p1)
{
  puts(p1->name);
  printf("\n%c\n%d\n%d\n%d\n%d\n%d\n%f\n",p1->div,p1->roll,p1->m1,p1->m2,p1->m3,p1->sum,p1->avg);
}
