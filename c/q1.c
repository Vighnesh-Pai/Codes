#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char name[30];
  int book;
}library;

typedef struct node
{
  library data;
  struct node *next;
}list;

void disp(list *l,char naam[30]);
list *create(void);
list *begin(list *l,library y);
list *insertpos(list *l,library y,int pos);

void main()
{
  int ch,p;
  list *t;
  library l;
  char naam[30];
  printf("enter your choice\n");
  printf("1.Enter the book details\n");
  printf("2.add given book at a given position\n");
  printf("3.Display all the books with same name\n");


  while(1){
      scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    printf("Enter book name and number\n");
    scanf("%s",l.name);
    scanf("%d",&l.book);
    t=begin(t,l);
    break;

    case 2:
    printf("Enter book name and number\n");
    gets(l.name);
    scanf("%d",&l.book);
    printf("type the position\n");
    scanf("%d",&p);
    t=insertpos(t,l,p);
    break;

    case 3:
    printf("Enter the book name\n");
    scanf("%s",naam);
    disp(t,naam);
    break;

  }}
}

list *create(void)
{
  list *l;
  l=(list*)malloc(sizeof(l));
  l->next=NULL;
  return l;
}

list *begin(list *l,library y)
{

  list *t;
  t=create();
  t->data=y;
  if(l==NULL)
  l=t;
  else
  {
  t->next=l;
  l=t;
  }

  return l;
}

list *insertpos(list *l,library y,int pos)
{

  list *t,*l1=l;
  t=create();
  t->data=y;
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

void disp(list *l,char naam[30])
{
  list *l1=l;
  int count=0;
  while(l1!=NULL)
  {
    printf("%d\n",(l->data).book);
    l=l->next;
  }

  
}
