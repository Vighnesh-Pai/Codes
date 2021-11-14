#include "stdio.h"
#include "math.h"
void isprime(int);
void rev(int);
void main()
{
	printf("Enter the number\n");
	int n;
	scanf("%d",&n);
	isprime(n);
}
void isprime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==2)
		printf("The number isn't prime\n);
	   else
	{	printf("The number is prime\n;
       rev(n);
   }
}

   void rev(int n)
   {
   	int num=n,pal=0,p;
   	while(n)
   	{
   		pal=pal+pow(n%10,p);
   		p++;
   		n=n/10;
   	}

    if(pal==num)
    	printf("The number is palindrome\n);
    else
    	printf("The number isn't palindrome\n);
   	
   
}