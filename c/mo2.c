#include "stdio.h"
void sos(int);
int sod(int);
int main()
{
	long long int i=1;
	while(i++)
	{
		if(sod(i)==100)
		{
			if(sod(2*i)==110)
				{
					printf("%d\n",i);
				    sos(i);
				}
		}
    }

}

int sod(int n)
{
	long long int sum=0;
	while(n)
	{
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}

void sos(int n)
{
	long long int sum=0;
	while(n)
	{
		sum=sum+(n%10)*(n%10);
		n=n/10;
	}
	printf("%d\n",sum);
}
