#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
}list;

list *create(void);
list *add(list *l,int x);
void disp(list *l);
list *del(list *l,int n,int k);

void main()
{
  list *l;
  int n,x,pos,times,k,m;

  scanf("%d",&n);
  m=n;

  while(m--)
  {
    scanf("%d",&x);
    l=add(l,x);
  }


  while(1)
  {
    scanf("%d",&k);
    pos=k;
    if(k!=-1)
    {
      l=del(l,n,k);
    }

    if(k==-1)
    {
      disp(l);
    }

    else if(k<-1)
    printf("Invalid Input\n");
  }
}

list *create(void)
{
  list *l;
  l=(list*)malloc(sizeof(l));
  l->next=NULL;
  return l;
}

list *add(list *l,int x)
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


void disp(list *l)
{
  list *l1=l;

  while(l1!=NULL)
    {
      printf("%d\n",l1->data);
      l1=l1->next;
    }
return;
}

list *del(list *l,int n,int k)
{
  list *l1=l,*l2;
for(int j=1;j<n;j++)
{
  l1=l1->next;
  l2=l1->next;
  if(j%k==0)
  {
  l1->next=l2->next;
  }

}



  return l;
}
