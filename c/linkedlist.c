#include <stdio.h>
#include <stdlib.h>
typedef struct stud
{
  int data;
  struct stud *next;
}list;

list *create(void);
list *insertbeg(list *l,int x);
void disp(list *t);


void main()
{
  int ch,x;
  list *l;
  l=NULL;
  printf("Enter your choice:\n1:insert at the beginning\n2:display the list\n");

  while(1)
  {
  scanf("%d",&ch);
  switch(ch)
    {
      case 1:
      scanf("%d",&x);
      l=insertbeg(l,x);
      break;

      case 2:
      disp(l);
      break;

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

list *insertbeg(list *l,int x)
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
