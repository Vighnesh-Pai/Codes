#include "stdio.h"
void main()
{
  printf("Enter you sex and work hour\n");
  char ch;
  float hr,wage;
  scanf("%f%*c%c",&hr,&ch);
  if(hr<6)
  {
    if(ch=='m')
    wage=200;
    if(ch=='f')
    wage=250;
  }
  if(hr>6)
  wage=200+(hr-6)*60;

  printf("Your wage is %f \n",wage);
}
