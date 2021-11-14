#include <stdio.h>
typedef struct distance
{
  int feet;
  float inch;
}d;

void read(d D[10]);
void add(d D[10],d d3[10]);
void disp(d d3[10]);

void main()
{
  d D[10],sum[10];
  read(D);
  add(D,sum);
  disp(D);
}

void read(d D[10])
{
  for(int i=0;i<10;i++)
  scanf("%d %f",&D[i].feet,&D[i].inch);
  return;
}

 void add(d D[10],d d3[10])
{
  d d3[10];
  d3[0].feet=0;
  d3[0].inch=0;
  for(int i=0;i<10;i++)
  {
  d3[i].feet=D[i].feet+d3[i].feet;
  d3[i].inch=D[i].inch+d3[i].feet;

  if(d3[i].inch>=12)
  {
    d3[i].inch=d3[i].inch-12;
    d3[i].feet+=1;
  }}
  return;
}

void disp(d d3[10])
{
  for(int i=0;i<10;i++)
  printf("Feet=%d\nInches=%f",d3[i].feet,d3[i].inch);
}
