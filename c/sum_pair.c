#include <stdio.h>
void read(int a[100],int);
void checksum(int a[100],int,int);
void main()
{
int a[100],n,sum;
scanf("%d",&n);
scanf("%d",&sum);
read(a,n);
checksum(a,n,sum);

}

void read(int a[100],int n)
{
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
return;
}

void checksum(int a[100],int n,int sum)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(a[i]+a[j]==sum)
printf("(%d,%d)",a[i],a[j]);
}}}
