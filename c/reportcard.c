//REPORT CARD//
#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
  int m1;
  int m2;
  int m3;
  float avg;
  int sum;
}std;

void read(std *s,int n);
void add(std *s,int n);
void avg(std *s,int n);
void disp(std *s,int n);

void main()
{
  std *s;
  int n,x;
  printf("Enter the number of students\n");
  scanf("%d",&n);
  s=(std*)malloc(sizeof(std)*n);
  scanf("%d",&x);
  read(s,n);
  add(s,n);
  avg(s,n);
  search(s,n,x)
  disp(s,n);
}

std *search(std *s,int n,int x)
{
  for(int i=0;i<n;i++)
  {
    if(s+i->x==x)
    {
      return s;
    }
  }
  return NULL;
}

void read(std *s,int n)
{
  for(int i=0;i<n;i++)
  {
    printf("Student no. = %d\nEnter marks 1\n",i+1);
    scanf("%d",&s[i].m1);
    printf("Student no. = %d\nEnter marks 2\n",i+1);
    scanf("%d",&s[i].m2);
    printf("Student no. = %d\nEnter marks 3\n",i+1);
    scanf("%d",&s[i].m3);
  }
  return;
}

void add(std *s,int n)
{
  for(int i=0;i<n;i++)
  s[i].sum=s[i].m1+s[i].m2+s[i].m3;
  return;
}

void avg(std *s,int n)
{
  for(int i=0;i<n;i++)
  s[i].avg=s[i].sum/3;
  return;
}

void disp(std *s,int n)
{
  for(int i=0;i<n;i++)
  printf("Student no. = %d\nSum = %d\nAverage = %f\n\n\n",i,s[i].sum,s[i].avg);
}
