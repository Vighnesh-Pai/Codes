//REPORT CARD//
#include <stdio.h>
typedef struct student
{
  int m1;
  int m2;
  int m3;
  float avg;
  int sum;
}std;

void read(std s[100],int n);
void add(std s[100],int n);
int avg(std s[100],int n);
void search(std s1[100],int avg,int);

void main()
{
  std s[100];
  int n;
  printf("Enter the number of students\n");
  scanf("%d",&n);
  read(s,n);
  add(s,n);
  int class_avg=avg(s,n);
  search(s,class_avg,n);
}

void read(std s[100],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("Student no. = %d\nEnter marks 1\n",i+1);
    scanf("%d",&s[i].m1);
    printf("Student no. = %d\nEnter marks 2\n",i+1);
    scanf("%d",&s[i].m2);
    printf("Student no. = %d\nEnter marks 3\n",i+1);
    scanf("%d",&s[i].m3);
  }
  return;
}

void add(std s[100],int n)
{
  for(int i=0;i<n;i++)
  s[i].sum=s[i].m1+s[i].m2+s[i].m3;
  return;
}

int avg(std s[100],int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
  s[i].avg=s[i].sum/3;

  for(int i=0;i<n;i++)
  sum=sum+s[i].avg;

  int class_avg=sum/n;
  printf("Class nAverage is %d\n",class_avg);

  return class_avg;
}

void search(std s1[100],int avg,int n)
{
  for(int i=0;i<n;i++)
   if(s1[i].avg>avg)
   {
     printf("\n*****\nStudent is above average\n");
    printf("\nStudent no. = %d\nSum = %d\nAverage = %f\n\n\n",n,s1[i].sum,s1[i].avg);
   }

   for(int i=0;i<n;i++)
    if(s1[i].avg==avg)
    {
      printf("\n*****\nStudent is average\n");
     printf("\nStudent no. = %d\nSum = %d\nAverage = %f\n\n\n",n,s1[i].sum,s1[i].avg);
    }

    for(int i=0;i<n;i++)
     if(s1[i].avg<avg)
     {
       printf("\n*****\nStudent is below average\n");
      printf("\nStudent no. = %d\nSum = %d\nAverage = %f\n\n\n",n,s1[i].sum,s1[i].avg);
     }

}
