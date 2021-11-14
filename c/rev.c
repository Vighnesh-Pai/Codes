#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
}list;

void rev(list *l);
list *create(void);
list *beg(list *l,int x);
void disp(list *l);

void main()
{
  list *l;
  int x,ch;

  while(1)
  {
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      scanf("%d",&x);
      l=beg(l,x);
      break;

      case 2:
      disp(l);
      break;

      case 3:
      rev(l);
      break;
    }

  }
}

list *create(void)
{
  list *t;
  t=(list*)malloc(sizeof(t));
  t->next=NULL;
  return t;
}

list *beg(list *l,int x)
{
  list *t;
  t=create();
  if(l==NULL)
  l=t;
  else
  {
  t->data=x;
  t->next=l;
  l=t;
  }
  return l;
}

void disp(list *l)
{
if(l==NULL)
printf("Empty list\n");
else
{
  while(l!=NULL)
    {
      printf("\n%d\n",l->data);
      l=l->next;
    }
}}

void rev(list *l)
{
  list *l1=l,*prev=l,*cur;
  l1=l1->next;
  cur=l1;

  while(l1!=NULL)
  {
    cur->next=prev;
    l1=l1->next;
    prev=cur;
    cur=l1;
  }
  l=cur;

  disp(l);
}
