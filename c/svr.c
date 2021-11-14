#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char name[10];
   int marks;
  char course[10];
}svr;

typedef struct node
{
  svr data;
  struct node *next;
}list;

list *search(list *l,char c[10]);
list *create(void);
list *insertbeg(list *l,svr x);


void main()
{

  list *l;
  svr s;
  int count=0;
  char c[10];
  int thres=40,ch;

  while (1)
 {
   printf("\n1.Enroll for a course\n");
   printf("2.Details of students in a course\n");
   printf("3.Total number of students enrolled\n");

   scanf("%d",&ch);

   switch(ch)
   {
     case 1:
     printf("Enter name\n");
     scanf("%s",s.name);

     printf("Enter course\n");
     scanf("%s",s.course);

     printf("Enter marks\n");
     scanf("%d",&s.marks);

     if(s.marks>=thres)
     {
       l=insertbeg(l,s);
       count++;
       printf("successfully enrolled\n");
     }

     else
     {
       printf("Student not eligible\n");
     }

     break;

     case 2:
     printf("Enter course\n");
     scanf("%s",c);
     l=search(l,c);
     break;

     case 3:
     printf("%d\n",count);
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

list *insertbeg(list *l,svr x)
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

list *search(list *l,char c[10])
{
  list *l1=l;
  while(l1!=NULL)
  {
    if(strcmp((l1->data).course,c)==0)
    {
      printf("\n%s\n",(l1->data).name);
      printf("%s\n",c);
      printf("%d\n",(l1->data).marks);
    }
    l1=l1->next;
}
return l;
}
