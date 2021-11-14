#include <stdio.h>
int main()
{
	int n,r,r2;
	scanf("%d%d",&n,&r);
	
	while(n--)
	{
		scanf("%d",&r2);
		if(r2>=r)
			printf("Good boi\n");
		else
			printf("Bad boi\n");
	}

	return 0;
}
