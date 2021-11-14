//Program to perform 4 ATM operations
#include <stdio.h>
void main()
{
        int op; float amt_left,cd,cw;
        printf("Enter the operation you want to perform:-\n");
        printf("Enter 1 for balance enquiry\nEnter 2 for cash withdrawal\nEnter 3 for cast deposit\n");

        scanf("%d",&op);


        switch(op)
        {
        case 1:
                printf("Available account balance is Rs.15000\n");
                break;



        case 2:
                printf("Enter the amount of money you want to withdraw\n");
                scanf("%f",&cw);

                if(cw<=15000)
                {
                        printf("Your amount has been withdrawed\n");
                        amt_left=15000-cw;
                        printf("The available amount in your bank account = %f",amt_left);
                }
                else
                        printf("Insufficient balance\n");
                break;



        case 3:
                printf("Enter the amount of money you want to deposit\n");
                scanf("%f",&cd);
                amt_left=15000+cd;
                printf("The available amount in your bank account = %f",amt_left);
                break;

        default:
                printf("Invalid input.Please try again\n");
        }

}
