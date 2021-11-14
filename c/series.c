#include "stdio.h"
void main()
{
        printf("Enter the number\n");

        int n;
        float i=1,sum=0;

        scanf("%d",&n);
        while(n>=i)
        {
                sum=sum+(1/i);
                i++;
        }
        printf("Sum=%f",sum);
}
