#include <stdio.h>
void main()
{
	int ar[3][3],br[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&ar[i][j]);
        
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			br[i][j]=ar[j][i];
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			printf("%d ",br[i][j]);
		printf("\n");
	}
}
