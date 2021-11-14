#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  int t,len,count;
  char word[101];
  scanf("%d\n",&t);
  while(t--)
  {
  gets(word);
  len=strlen(word)-3;
  count=0;
  for(int i=0;i<=len;i++)
  {
    if(word[i]==' ' || i==0)
    {
      if(word[i+1]=='n' || (i==0 && word[i]=='n'))
      {
        if(word[i+2]=='o' || (i==0 && word[i+1]=='o'))
        {
          if(word[i+3]=='t' || (i==0 && word[i+2]=='t'))
          {
            if(word[i+4]==' ' || word[i + 4] == '\0' || (i==0 && word[i+3]==' ') || (i==0 && word[i+3]=='\0'))
            {
              count=count+1;
              break;
            }
          }
        }
      }
    }
  }
  if(count==0)
  printf("regularly fancy\n");
  else
  printf("Real Fancy\n");
  }
  return 0;
}
