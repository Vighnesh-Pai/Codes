#include <stdio.h>
int dup(long *ar,long);
int check(long *ar,int,int,long);
int main()
{
int t;
long n;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
long ar[n];
for(int i=0;i<n;i++)
scanf("%d",&ar[i]);
dup(ar,n);
}}

int dup(long *ar,long n)
{
int sum=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<i;j++)
{
if(ar[i]==ar[j])
sum=sum+check(ar,i+1,j+1,n);
}}
if(sum>0)
printf("Truly Happy\n");
else
printf("Poor Chef\n");

return 0;
}

int check(long *ar,int n1,int n2,long n)
{
int count=0,count1=0;
for(int i=0;i<n;i++)
{
if(ar[i]==n1)
count++;
if(ar[i]==n2)
count1++;
}
if(count1>0 && count>0 && n1!=n2)
return 1;
else
return 0;
}
