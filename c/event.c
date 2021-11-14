#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int findindex(char s1[100]);
void main()
{
	int t,n1,n2,days,i1,i2;
	char s1[100],s2[100];
	scanf("%d",&t);
	while(t--)
	{
		int per=1;
		int count=0,count1=0;
		scanf ("%s %s %d %d",&s1,&s2,&n1,&n2);
		

		i1=findindex(s1);
		i2=findindex(s2);
		if(i1-i2<=0)
		days=abs(i1-i2)+1;
	else
        days=7-(abs(i1-i2)-1);
   

    if(n1<=days && days<=n2)
    	count++;
    for(int f=1;f<=n2;f++)
    if(n1<=days+7*f && days+7*f<=n2)
    {
    	count1++;
    	per=f;
    }

    if(count>0 && count1>0)
    	printf("many\n");
    else if(count>0 && count1==0)
    	printf("%d\n",days);
    else if(count==0&&count1>0)
    	printf("%d\n",days+7*per);
    else
    	printf("impossible\n");


	}
}

int findindex(char s1[100])
{
	int n;
	if (strcmp(s1, "monday") == 0)
    n=1;
    else if (strcmp(s1, "tuesday") == 0)
    n=2;
    else if (strcmp(s1, "wednesday") == 0)
    n=3;
    else if (strcmp(s1, "thursday") == 0)
    n=4;
    else if (strcmp(s1, "friday") == 0)
    n=5;
    else if (strcmp(s1, "saturday") == 0)
    n=6;
    else if (strcmp(s1, "sunday") == 0)
    n=7;

    return n;

}