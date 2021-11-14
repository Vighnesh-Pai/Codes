#include "stdio.h"
void main()
{
        int ft=-1,st=1;
        int n,sum=0;
        printf("Enter the number upto which the series should be printed\n");
        scanf("%d",&n);

        while(n)
        {
                sum=ft+st;
                printf("%d ",sum);

                if(sum==n)
                        break;

                ft=st;
                st=sum;
        }

}
