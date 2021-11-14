#include "stdio.h"
void main()
{
        int ft=-1,st=1;
        int n,sum=0;
        printf("Enter the number to check\n");
        scanf("%d",&n);

        while(n)
        {
                sum=ft+st;


                if(sum==n)
                {
                        printf("Yes the term is in the series\n");
                        break;
                }
                if(sum>n)
                {
                        printf("The term doesn't exist in the series\n");
                        break;
                }

                ft=st;
                st=sum;
        }

}
