#include<stdio.h>
void main()
{
    int i,j,space;
    for(i=4;i>=1;--i)
    {
        for(space=0;space<4-i;++space)
            printf(" ");

        for(j=i;j<=2*i-1;++j)
            printf("*");

        for(j=0;j<i-1;++j)
            printf("*");

        printf("\n");
    }
  }
