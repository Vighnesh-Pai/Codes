#include <stdio.h>
typedef struct distance
{
  int feet;
  float inch;
}d;

d add(d d1,d d2);
d read();
void disp(d d3);

void main()
{
  d d1,d2,d3;
  d1=read();
  d2=read();
  d3=add(d1,d2);
  disp(d3);
}

d read()
{
  d d1;
  scanf("%d %f",&d1.feet,&d1.inch);
  return d1;
}

d add(d d1,d d2)
{
  d d3;
  d3.feet=d1.feet+d2.feet;
  d3.inch=d1.inch+d2.inch;

  if(d3.inch>=12)
  {
    d3.inch=d3.inch-12;
    d3.feet+=1;
  }
  return d3;
}

void disp(d d3)
{
  printf("Feet=%d\nInches=%f",d3.feet,d3.inch);
}
