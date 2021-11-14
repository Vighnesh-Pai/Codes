#include <stdio.h>
int main()
{
	int y;
	printf("1\n");
	fflush(stdout);
	scanf("%d",&y);
	if(y==2)
		printf("3");
	else
		printf("2");
	return 0;
}
