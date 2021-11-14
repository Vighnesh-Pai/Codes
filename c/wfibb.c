#include <stdio.h>
#include <string.h>
void main()
{
	int n;
	char c1[100]="a";
	char c2[100]="b";
	char temp[100]=" ";
	scanf("%d",&n);
	

	for(int i=0;i<n;i++)
	{
		
		
		printf("%s%s\n",c1,c2);
		
		
		strcpy(temp,strcat(c1,c2));
		
        strcpy(c1,c2);
		
        strcpy(c2,temp);
		
	}
}

