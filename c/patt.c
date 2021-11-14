//TEAM HUNDUR
#include <stdio.h>

int z(int n);
int main()
{
    int i, space, rows, k=0, count = 0, count1 = 0,sum=0,zero=0;

    printf("Enter number of rows\n");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(space=1; space <= rows-i; ++space)
        {
            printf("  ");
            ++count;
        }

        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                printf("%d ", i+k);
                ++count;
								sum=sum+i+k;
								zero=zero+z(i+k);
            }
            else
            {
                ++count1;
                printf("%d ", (i+k-2*count1));
								sum=sum+i+k-2*count1;
								zero=zero+z(i+k-2*count1);
            }
            ++k;
        }
        count1 = count = k = 0;

        printf("\n");
    }
		printf("SUM = %d\n",sum);
		printf("no of zeros = %d\n",zero);
    return 0;
}

int z(int n)
{
	int count=0,d;

	while(n)
	{
		d=n%10;
		if(d==0)
		count++;
		n=n/10;
	}

	return count;
}
