#include <stdio.h>
#include <stdlib.h>

typedef struct stud
{
  int data;
  struct stud *prev;
  struct stud *next;
}list;

list *create(void);
void disp_f(list *t);
void disp_b(list *t);
list *beg(list *l,int);
list *rare(list *l,int);
list *del1(list *l);
list *del2(list *l);
list *pos(list *l,int x,int pos);
list *del3(list *l,int pos);


void main()
{
  int ch,n,p;
  list *l;
  l=NULL;

  while(1)
  {
    printf("\n1.Insert at the beginning\n");
    printf("2.Insert at the end\n");
    printf("3.Disp from the start\n");
    printf("4.Disp from the end\n");
    printf("5.Delete first element\n");
    printf("6.Delete last element\n");
    printf("7.Insert at a given position\n");
    printf("8.Delete at a given position\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      printf("Enter the data\n");
      scanf("%d",&n);
      l=beg(l,n);
      break;

      case 2:
      printf("Enter the data\n");
      scanf("%d",&n);
      l=rare(l,n);
      break;

      case 3:
      disp_f(l);
      break;

      case 4:
      disp_b(l);
      break;

      case 5:
      l=del1(l);
      break;

      case 6:
      l=del2(l);
      break;

      case 7:
      printf("Enter the data\n");
      scanf("%d",&n);
      printf("Enter the position\n");
      scanf("%d",&p);
      l=pos(l,n,p);
      break;

      case 8:
      printf("Enter the position\n");
      scanf("%d",&p);
      l=del3(l,p);
      break;

      default:
      exit(0);
    }
  }
}

list *create(void)
{
  list *t;
  t=(list*)malloc(sizeof(t));
  t->next=NULL;
  t->prev=NULL;

  return t;
}

list *del1(list *l)
{
  list *l1=l;
  free(l1);
  l1=l1->next;
  l1->prev=NULL;

  return l1;

}

list *del2(list *l)
{
  list *l1=l;
  while(l1->next!=NULL)
  {
    l1=l1->next;
  }
  free(l1);
  l1=l1->prev;
  l1->next=NULL;

  return l;
}

list *del3(list *l,int pos)
{
  list *p=l,*c=p->next;

  if(pos==1)
  l=del1(l);

  else if(l->next==NULL)
  l=del2;

  else
  {

  for(int i=1;i<pos-1;i++)
  {
  p=p->next;
  c=p->next;
  }
  p->next=c->next;

  p=p->next;
  c=p->next;

  c->prev=p->prev;

  return l;

}
}

list *pos(list *l,int x,int pos)
{
  list *t,*l1=l;
  t=create();
  t->data=x;

  if(pos==1)
  l=beg(l,x);

  else
  {
    for(int i=1;i<pos-1;i++)
    l1=l1->next;

    t->next=l1->next;
    l1->next=t;
    t->prev=l1;

    t=t->next;
    t=t->next;

    l1->prev=t;
  }
  return l;
}

void disp_f(list *t)
{
  list *l=t;
  if(t==NULL)
  printf("Empty list\n");
  else
  {
    while(l!=NULL)
    {
      printf("%d ",l->data);
      l=l->next;
    }
  }
  return;
}

void disp_b(list *t)
{
  list *l=t;
  if(t==NULL)
  printf("Empty list\n");
  else
  {
    while(l->next!=NULL)
      l=l->next;
    while(l!=NULL)
    {
      printf("%d ",l->data);
      l=l->prev;
    }

  }
  return;
}

list *beg(list *l,int x)
{
  list *t;
  t=create();
  t->data=x;
  if(l!=NULL)
    {
  t->next=l;
  l->prev=t;
    }
  l=t;

  return l;
}

list *rare(list *l,int x)
{
  list *t,*l1=l;
  t=create();
  t->data=x;
  if(l!=NULL)
  {

  while(l1->next!=NULL)
  l1=l1->next;

  l1->next=t;
  t->prev=l1;
  }
  else
  {l=t;}

  return l;
}
