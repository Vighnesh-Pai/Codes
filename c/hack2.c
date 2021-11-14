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
list *del(list *l,int pos);

int main()
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
      times=n/k;
      while(times--)
      {
        l=del(l,pos);
        pos=pos+k;
        n--;
      }
    }

    if(k==-1)
    {
      disp(l);
    }

    else if(k<-1)
    printf("Invalid Input\n");
  }
    return 0;
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

list *del(list *l,int pos)
{
  list *l1=l,*l2;
  for(int i=1;i<pos-1;i++)
  l1=l1->next;

  l2=l1->next;

  l1->next=l2->next;



  return l;
}
