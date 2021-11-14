#include<stdio.h>
void main()
{

	float x,y,d;

	scanf("%f%f",&x,&y);
	if((int)x%5!=0 || (x+0.50)>y)
  printf("%f\n",y);
  else
	{
		y=y-(x+0.50);
		printf("%f \n",y);
	}

}
