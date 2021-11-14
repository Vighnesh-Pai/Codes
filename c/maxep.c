#include <stdio.h>
void chk(int n,int sum);
int main()
{
	int n,c,i,m=0;
	scanf("%d%d",&n,&c);

	chk(n,m);
	return 0;

}

void chk(int n,int sum)
{
	int x,i;
if(n!=2)
{
	
		printf("1 %d\n",n/2);
		fflush(stdout);

	        scanf("%d",&i);
	        if(i==1)
		{
			printf("2\n");
		    fflush(stdout);
			chk(n/2,0);
		}

		else
		{
			sum=sum+n/2;
			chk(n/2,sum);
		}
	


}

else
	{
		printf("1 %d\n",sum+1);
		fflush(stdout);
        scanf("%d",&x);
        if(x==1)
        	printf("3 %d\n",sum+1);
        else
        	printf("3 %d\n",sum+2);
        fflush(stdout);

	}
	return;

}

