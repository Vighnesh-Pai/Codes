#include <stdio.h>
#include <string.h>
typedef struct complex
{
  int real;
  int img;
}add;

add sum(add c1,add c2);
void display(add c3);

int main()
{
  add c1,c2,c3;
  scanf("%d",&c1.real);
  scanf("%d",&c1.img);
  scanf("%d",&c2.real);
  scanf("%d",&c2.img);

  c3=sum(c1,c2);
  display(c3);
  return 0;
}

add sum(add c1,add c2)
{
  c1.real=c1.real+c2.real;
  c1.img=c1.img+c2.img;
  return c1;
}

void display(add c3)
{
  printf("\n%d\n%d\n",c3.real,c3.img);
  return;
}
