#include <stdio.h>
int main()
{
	int ar[100],u[100];
	for(int i=0;i<100;i++)
	{
		scanf("%d",&ar[i]);
		if(ar[i]==42)
			break;
		else
		printf("%d\n",ar[i]);
}
return 0;
}