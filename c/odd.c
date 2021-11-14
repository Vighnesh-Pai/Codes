#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct competition
{
  char ev_name[30];
  char part_name[30];
  char country[30];
  char place[30];
  int medals;
}c;

void max_min(c c1[10],int);
void disp(int a,int b,c c[10]);

void main()
{
  c *c1;int n;
  scanf("%d",&n);
  c1=(c*)malloc(sizeof(c)*n);
  FILE *p1,*p2;
  int i=0;char evn[30];

  p1=fopen("cp.txt","r");
  p2=fopen("out.txt","w");

  while (!feof(p1))
  {
    fscanf(p1,"%s%s%s%s%d",c1[i].ev_name,c1[i].part_name,c1[i].country,c1[i].place,&c1[i].medals);
    i++;
  }

  printf("Enter the event name\n");
  scanf("%s",evn);

  for(int i=0;i<n;i++)
  {
    if(strcmp(c1[i].ev_name,evn)==0)
    {
      fprintf(p2,"%s %s %s %s %d\n",c1[i].ev_name,c1[i].part_name,c1[i].country,c1[i].place,c1[i].medals);
    }
  }

  max_min(c1,n);
}

void max_min(c c1[10],int n)
{
  int max=-1,min=100000,index,index2;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(strcmp(c1[i].country,c1[j].country)==0)
      {
        c1[i].medals=c1[i].medals+c1[j].medals;
      }
    }
  }

  for(int i=0;i<n;i++)
  {
    if(c1[i].medals>max)
    {
    max=c1[i].medals;
    index=i;
    }
  }

  for(int i=0;i<n;i++)
  {
    if(c1[i].medals<min)
    {
    min=c1[i].medals;
    index2=i;
    }
  }

  disp(index,index2,c1);
}

void disp(int a,int b,c c1[10])
 {
  printf("Max medals country=%s %d\n",c1[a].country,c1[a].medals);
  printf("Min medals country=%s %d\n",c1[b].country,c1[b].medals);
 }
