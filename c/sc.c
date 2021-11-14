#include "stdio.h"
int sum(int,int),sub(int,int),mul(int,int),div(int,int),mod(int,int);

void main()
{
	int a,b,ch,n1,n2,n3,n4,n5;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	
	printf("Enter the operation you want to perform\n");
	
	printf("1.addition\n");
	printf("2.substraction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	printf("5.modular\n");
    scanf("%d",&ch);

    switch(ch)
    {
    	case 1:
    	n1=sum(a,b);
    	printf("Addition is =%d\n",n1);
    	break;

    	case 2:
    	n2=sub(a,b);
    	printf("Substraction is =%d\n",n2);
    	break;

    	case 3:
    	n3=mul(a,b);
    	printf("Multiplication is =%d\n",n3);
    	break;

    	case 4:
    	n4=div(a,b);
    	printf("Division is =%f\n",n4);
    	break;

    	case 5:
    	n5=mod(a,b);
    	printf("Modular is =%d\n",n5);

    	default:
    	printf("Invalid Input\n");
    }
}

int sum(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	if(b!=0)
	return a/b;
}

int mod(int a,int b)
{
	if(b!=0)
	return a%b;
}