#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
	char sen[100];
	scanf("%[^\n]s",&sen);
    int n=strlen(sen);
    int c=0,v=0,d=0;

    for(int i=0;i<n;i++)
    {
    	if(sen[i]=='a'||sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u')
    		v++;
    	else if(sen[i]!=' ')
    		c++;
    	else 
    		d++;
    }
    printf("%d\n%d\n%d",v,c,d);
}