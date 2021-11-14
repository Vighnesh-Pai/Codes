#include "stdio.h"
void main()
{
        printf("Enter units consumed\n");
        float unit,charge;
        scanf("%f",&unit);

        if(unit<=50)
                charge=unit*0.5;

        if(unit>50 && unit<=150)
                charge=25+(unit-50)*0.75;

        if(unit>150 && unit<=250)
                charge=100+(unit-150)*1.20;

        if(unit>250)
                charge=220+(unit-250)*1.50;

        printf("Total charge =%f\n",charge);



}
