#include <stdio.h>
#include <string.h>
int main()
{
	char word[6]="naman";
	int n=strlen(word)-1;

	for(int i=0;i<=n/2;i++)
	{
		if(word[i]!=word[n-i])
			{
				printf("Not a palindrome\n");
		return 0;
	}
	}
	printf("Is a palindrome\n");
	
}