#include <stdio.h>
void main()
{
        float m;
        printf("Enter the marks obtained\n");
        scanf("%f",&m);

        switch (m)
         {
          case m>90:
          printf("S\n");
          break;

          case m>80 && m<90:
          printf("A\n");
          break;

          default:
          printf("Generation N\n");
          break;
        }
}
