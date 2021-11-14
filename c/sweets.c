#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,x;
		scanf("%d %d",&n,&x);
		int a[100];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int sum=0;
		for(int i=0;i<n;i++)
			sum=sum+a[i];
		if(sum%x!=0 && n!=1)
			printf("-1\n");
		else
			printf("%d\n",sum/x);
		           
		        
		        
		        
	}
	return 0;
}
