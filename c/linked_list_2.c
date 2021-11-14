#include <stdio.h>
#include <stdlib.h>
typedef struct stud6
{
  int data;
  struct stud *next;
}list;

list *create(void);
list *insertbeg(list *l,int x);
void disp(list *t);
list *insertend(list *l,int x);
list *insertpos(list *l,int x,int pos);
list *rev(list *l);


void main()
{
  int ch,x,pos,count=0;
  list *l;
  l=NULL;
  printf("Enter your choice:\n1:insert at the beginning\n2:insert at the end\n3:insert at a given position\n4:display the list\n5:reverse the list\n");

  while(1)
  {
  scanf("%d",&ch);
  switch(ch)
    {
      case 1:
      scanf("%d",&x);
      l=insertbeg(l,x);
      count++;
      break;

      case 4:
      disp(l);
      break;

      case 2:
      scanf("%d",&x);
      l=insertend(l,x);
      count++;
      break;

      case 3:
      scanf("%d",&x);
      scanf("%d",&pos);

      if(pos==1)
      l=insertbeg(l,x);

      else if(pos>count-1 || pos<=0)
      printf("Invalid input\n");

      else
      l=insertpos(l,x,pos);
      count++;
      break;

      case 5:
      rev(l);

      default:
      exit(0);
    }
  }
}

list *create(void)
{
  list *l;
  l=(list*)malloc(sizeof(l));
  l->next=NULL;
  return l;
}

list *rev(list *l)
{
  list *prev,*cur;

  while(l!=NULL)
  {
  prev=l;
  l=l->next;
  cur=l;
  prev->next=NULL;
  cur->next=prev;
  }
  return l;
}

list *insertbeg(list *l,int x)
{

  list *t;
  t=create();
  t->data=x;
  if(l==NULL)
  l=t;
  else
  {
  t->next=l;
  l=t;
  }

  return l;
}

list *insertend(list *l,int x)
{

  list *t,*l1=l;
  t=create();
  t->data=x;
  if(l==NULL)
  l=t;
  else
  {
    while(l1->next!=NULL)
    l1=l1->next;
    l1->next=t;
  }
  return l;
}

list *insertpos(list *l,int x,int pos)
{

  list *t,*l1=l;
  t=create();
  t->data=x;
  if(l==NULL)
  l=t;

  else
  {

    for(int i=1;i<pos-1;i++)
    l1=l1->next;
    t->next=l1->next;
    l1->next=t;
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
