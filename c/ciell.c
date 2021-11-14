#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char name[10];
   int ph;
  char email[10];
}contact;

typedef struct node
{
  contact data;
  struct node *next;
}list;

void disp(list *l);
list *create(void);
list *search(list *l,contact c, int no);
list *insert(list *l,contact data);

void main()
{
  int ch,p;
   int no;
  list *l;
  contact c;



  while(1)
  {
    printf("\nenter your choice\n");
    printf("1.Insert a contact\n");
    printf("2.display all the contacts\n");
    printf("3.search given number\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    printf("Enter name\n");
    scanf("%s",c.name);

    printf("Enter number\n");
    scanf("%d",&c.ph);

    printf("Enter email\n");
    scanf("%s",c.email);

    l=insert(l,c);
    break;

    case 2:
    disp(l);
    break;

    case 3:
    printf("enter the number you want to search\n");
    scanf("%d",&no);
    l=search(l,c,no);
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
  return t;
}

list *insert(list *l,contact data)
{
  list *t;
  t=create();
  t->data=data;
  if(l!=NULL)
  t->next=l;
  l=t;


  return l;

}

void disp(list *l)

{
  list *l1=l;
  while(l1!=NULL)
  {
    printf("\n%s ",(l1->data).name);
    printf("%d ",(l1->data).ph);
    printf("%s\n",(l1->data).email);
    l1=l1->next;
  }
}

list *search(list *l,contact c, int no)
{
  list *l1=l;
  int p;
  while(l1!=NULL)
  {
    if((l1->data).ph==no)
    {
      printf("%s\n",(l1->data).name);
      printf("%s\n",(l1->data).email);
      printf("%d\n",no);
      return l;

    }
    else
    {
      printf("Enter name\n");
      scanf("%s",c.name);

      printf("Enter email\n");
      scanf("%s",c.email);


      l=insert(l,c);
return l;

}l1=l1->next;
  }
}
