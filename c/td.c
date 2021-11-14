#include <stdio.h>
int ifsubset(int a1[100],int a2[100],int,int);
void main()
{
	int t,a1[100],a2[100],a3[100],a4[100],n1,n2,n3,n4,d1,d2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n1);
		for(int i=0;i<n1;i++)
			scanf("%d",&a1[i]);
		
		scanf("%d",&n2);
		for(int i=0;i<n2;i++)
			scanf("%d",&a2[i]);
                
		scanf("%d",&n3);
		for(int i=0;i<n3;i++)
			scanf("%d",&a3[i]);
                
		scanf("%d",&n4);
		for(int i=0;i<n4;i++)
			scanf("%d",&a4[i]);
		
	     d1=ifsubset(a1,a3,n1,n3);
	     d2=ifsubset(a2,a4,n2,n4);

	     if(d1==1&&d2==1)
		     printf("yes\n");
	     else
		     printf("no\n");
	}
}

int ifsubset(int a1[100],int a2[100],int n1,int n2)
{
	int count=0;
	if(n2>n1)
		return 0;
	else
	{
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
			{
				if(a1[i]==a2[j])
					count++;
			}
		}
	}
	if(count==n2)
		return 1;
	else
		return 0;
}
