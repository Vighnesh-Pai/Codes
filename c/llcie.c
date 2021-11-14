#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
}list;

void main()
{
  int ch,data;

  printf("Enter your selection\n");
  printf("1.Enter at begin\n");
  printf("2.Enter at the end\n");

  scanf("%d",&ch);

  switch(ch)
  {
    case 1:
    scanf("%d",&data);
    insert_beg(l,data);
    break;

    case 2:
    scanf("%d",&data);
    insert_end(l,data);
    break;

    case 3:
    scanf("%d",&data);

    break;

    case 4:
    scanf("%d",&data);
    break;

    case 5:
    scanf("%d",&data);
    break;

    case 6:
    scanf("%d",&data);
    break;

    default:
    exit(0);
    break;
  }


}

list *create(void)
{
  list *t;
  t=(list*)malloc(sizeof(t));
  t->next=NULL;
  return t;
}

list *insert_beg(list *l,int data)
{
  list *t;
  t=create();

  t->data=data;
  t->next=l;
  l=t;

  return l;
}

list *insert_end(list *l,int data)
{
  list *t,*l1=l;
  t=create();

  while(l1->next!=NULL)
  l1=l1->next;

  t->data=data;
  t->next=NULL;
  l->next=t;

  return l;
}

void disp(list *l)
{
  while(l->next!=NULL)
  {
    printf("%d ",l->data);
    l=l->next;
  }
}

list *insert_pos(list *l,int data,int pos)
{
  list *t,*l1=l;
  t=create();

  for(int i=1;i<=pos;i++)
  l1=l1->next;

  t->next=l->next;
  l->next=t;

  return l;
}

int count(list *l)
{
  int count=0;
  while(l->next!=NULL)
  count++;

  return count;
}

int search(list *l,int e)
{
  int pos=1;
  while(l->next!=NULL)
  {
    if(l->data==e)
    return pos;

    l=l->next;
    pos++;
  }
  printf("Element not found\n");
  return;
}

list *del_beg(list *l)
{
  l=l->next;
  return l;
}

void *del_end(list *l)
{
  while(l->next!=NULL)
  l=l->next;

  l->next=NULL;
}

void *del_pos(list *l,int pos)
{
  list *l1=l,*l2;
  for(int i=1;i<pos;i++)
  l1=l1->next;

  l2=l1->next;

  l1->next;
  l1->next=l2->next;

  free(l1);
  free(l2);

  return;
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
