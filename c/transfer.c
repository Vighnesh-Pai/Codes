#include <stdio.h>
void main()
{
  char ch;
  FILE *fp,*fp2;
  fp=fopen("out.txt","r");
  fp2=fopen("int.txt","w");
  while(!feof(fp))
  {
    ch=getc(fp);
    putc(ch,fp2);
  }
  fclose(fp);
  fclose(fp2);
}
