#include "stdio.h"
void main()
{
        int n,sum=0,i=1;
        printf("Enter the number you want to check\n");
        scanf("%d",&n);

        while(n>=i)
        {
                if(n%i==0)
                        sum=sum+i;

                i++;
        }
        if(2*n==sum)
                printf("The number is a magic number\n");
        else
                printf("The number isn't a magic number\n");
}
