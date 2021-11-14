#include <stdio.h>

typedef struct
{
  char name[30];
   int roll;
   int m1,m2,m3;
}stud;

void main()
{
  stud s[10];
  int i=0;
  char ch;
  FILE *fp,*fp2;
  fp=fopen("student_info.txt","r");
  fp2=fopen("out.txt","w");
  while(!feof(fp))
  {
    fscanf(fp,"%s%d%d%d%d",s[i].name,&s[i].roll,&s[i].m1,&s[i].m2,&s[i].m3);
    int sum=s[i].m1+s[i].m2+s[i].m3;
    float avg=(s[i].m1+s[i].m2+s[i].m3)/3;
    fprintf(fp2,"%s (%d) %d %d %d %d %f \n",s[i].name,s[i].roll,s[i].m1,s[i].m2,s[i].m3,sum,avg);

    i++;
  }
  fclose(fp);
  fclose(fp2);
}
