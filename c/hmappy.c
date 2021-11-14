#include <stdio.h>
int ques(int arr[100000],int n,int k);
int main()
{
	int n,q,k,x,j;
	scanf("%d %d %d",&n,&q,&k);
	int arr[100000];
	char arr2[300000];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
        scanf("%s",arr2);
    for(int i=0;i<q;i++)
    {
    	if(arr2[i]=='?')
    		printf("%d\n",ques(arr,n,k));
    	else
    		{
    		
    		x = arr[n-1]; 
   for (j = n-1; j > 0; j--) 
      arr[j] = arr[j-1]; 
   arr[0] = x; 
   f
	
    		
    		}
    }


}

int ques(int arr[100000],int n,int k)
{
	int count=0,c1=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
			{
				count++;
				if(count > c1)
					c1 = count;
			}
			else
			{
				count = 0;
			}
	}
	if(c1<=k)
		return c1;
	else
		return k;
}
