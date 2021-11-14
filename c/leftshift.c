#include <stdio.h>
void main()
{
	int ar[6],br[6],d;
	for(int i=0;i<6;i++)
		scanf("%d",&ar[i]);
	scanf("%d",&d);

	for(int i=0;i<6-d;i++)
	{
		br[i+d]=ar[i];
		br[d-1-i]=ar[5-i];
	}
	for(int i=0;i<6;i++)
		printf("%d ",br[i]);
}

	
