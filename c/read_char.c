#include <stdio.h>
void main()
{
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))
	{
		ch=getc(fp);
		printf("\n%c",ch);
	}

}
