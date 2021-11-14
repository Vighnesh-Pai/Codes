#include <stdio.h>
typedef struct
{
  char name[30];
  int m1;
  int m2;
  int m3;
}MKS;

void display(MKS *p);
void read(MKS *p);

void main()
{
  MKS m,*p;
  p=&m;
  read(p);
  display(p);
}

void display(MKS *p)
{
  scanf("%s%d%d%d",p->m1,&p->m2,&p->m3);
}

void read(MKS *p)
{
  printf("\n%s\n%d\n%d\n%d",p->m1,p->m2,p->m3);
}
