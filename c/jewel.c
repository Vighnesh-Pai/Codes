#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s1[1001],s2[1001];
		scanf("%s",&s1);
		scanf("%s",&s2);
		int n=strlen(s1);
		int m=strlen(s2);
		int count=0;

		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				if(s2[i]==s1[j])
				{
					count++;
					break;
				}

		printf("%d\n",count);
		
        }
	return 0;
}
