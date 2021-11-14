#include <stdio.h>
int main()
{
	int ar[6][6];

	for(int i=0;i<6;i++)
		for(int j=0;j<6;j++)
			scanf("%d",&ar[i][j]);

	int sum1,sum2,sum3,pattern_sum[16],k=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			sum1=ar[i][j]+ar[i][j+1]+ar[i][j+2];
			sum2=ar[i+1][j+1];
			sum3=ar[i+2][j]+ar[i+2][j+1]+ar[i+2][j+2];

			pattern_sum[k]=sum1+sum2+sum3;k++;
		}
	}

	int max=pattern_sum[0];
	for(int i=0;i<16;i++)
	{
		if(pattern_sum[i]>max)
			max=pattern_sum[i];
	}

	
	printf("%d\n",max);
	return 0;
}
