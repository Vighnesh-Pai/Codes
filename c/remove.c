#include <stdio.h>
#include <string.h>
void main()
{
	char st[100];
	scanf("%[^\n]s",&st);
	char ch;
	scanf("%c",&ch);
	int n=strlen(st);
	int index;

	for(int i=0;i<n;i++)
		if(st[i]==ch)
			index=i;

		for(int i=index;i<n-1;i++)
		{
			st[i]=st[i+1];
		}

		puts(st);
}