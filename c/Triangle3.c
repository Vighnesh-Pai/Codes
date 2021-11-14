#include <stdio.h>
void main()
{
  for(int i=4;i>=1;i--)
  {
    for(int n=1;n<=i;n++)
    printf(" ");
    for(int j=4;j>=i;j--)
    printf("*");
    printf("\n");
  }
}
