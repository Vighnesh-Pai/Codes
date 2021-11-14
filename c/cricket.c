#include <stdio.h>
#include <string.h>
typedef struct
{
  char name[30];
  int runs;
}c;

void read(c c1[5]);
void sort(c c1[5]);
void disp(c c1[5]);

void main()
{
  c c1[5];
  read(c1);
  sort(c1);
  disp(c1);
}

void read(c c1[5])
{
  for(int i=0;i<5;i++)
  {
    scanf("%s",c1[i].name);
    scanf("%d",&c1[i].runs);
  }
  return;
}

void sort(c c1[5])
{
  int temp;
  char temp2[30];
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      if(c1[j].runs>c1[j+1].runs)
      {
        temp=c1[j].runs;
        strcpy(temp2,c1[j].name);
        c1[j].runs=c1[j+1].runs;
        strcpy(c1[j].name,c1[j+1].name);
        c1[j+1].runs=temp;
        strcpy(c1[j+1].name,temp2);
      }
    }
  }
  return;
}

void disp(c c1[5])
{
  for(int i=0;i<5;i++)
  {
    puts(c1[i].name);
    printf("\n%d\n",c1[i].runs);
  }
}
