#include <stdio.h>
typedef struct
{
  int m1;
  int m2;
  int m3;
}MKS;

void display(MKS *p);
void add(MKS *p1,MKS *p2,MKS *p3);
void read(MKS *p);

int main()
{
  MKS m1,m2,m3,*p1,*p2,*p3;
  p1=&m1;
  p2=&m2;
  p3=&m3;
  read(p1);
  read(p2);
  add(p1,p2,p3);
  display(p3);
  return 0;
}

void add(MKS *p1,MKS *p2,MKS *p3)
{
  p3->m1=p1->m1 + p2->m1;
  p3->m2=p1->m2 + p2->m2;
  p3->m3=p1->m3 + p2->m3;
  return;
}

void read(MKS *p)
{
  scanf("%d%d%d",&p->m1,&p->m2,&p->m3);
  return;
}

void display(MKS *p)
{
  printf("\n%d\n%d\n%d\n",p->m1,p->m2,p->m3);
  return;
}
