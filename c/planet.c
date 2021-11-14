#include <stdio.h>
#include <string.h>
typedef struct
{
  char name[10];
  int rad;
}p;

void sort(p p1[8]);

void main()
{
  p p1[8];
  int i=0;
  FILE *fp,*fp2;
  fp=fopen("planets.txt","r");
  fp2=fopen("output.txt","w");

  while(!feof(fp))
  {
    fscanf(fp,"%s%d",p1[i].name,&p1[i].rad);
    i++;
  }

  sort(p1);

  for(int i=0;i<8;i++)
  {
    fprintf(fp2,"%s %d\n",p1[i].name,p1[i].rad);
  }
  fclose(fp);
  fclose(fp2);
}

void sort(p p1[8])
{
  int temp;
  char temp2[10];
  for(int i=0;i<8-1;i++)
  {
    for(int j=0;j<8-1-i;j++)
    {
      if(p1[j].rad>p1[j+1].rad)
      {
        temp=p1[j].rad;
        strcpy(temp2,p1[j].name);
        p1[j].rad=p1[j+1].rad;
        strcpy(p1[j].name,p1[j+1].name);
        p1[j+1].rad=temp;
        strcpy(p1[j+1].name,temp2);
      }
    }
  }
  return;
}
