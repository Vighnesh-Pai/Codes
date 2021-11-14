#include <stdio.h>
void disp(int a1[100],int n);
void read(int a1[100],int a2[100],int n,int m);
void replace(int a1[100],int a2[100],int n,int m);

void main()
{
    int a1[100],a2[100],n,m;
    printf("enter the size of the array and the size of key element array\n");
    scanf("%d%d",&n,&m);
    read(a1,a2,n,m);
    replace(a1,a2,n,m);
    disp(a1,n);
}

void read(int a1[100],int a2[100],int n,int m)
{
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a1[i]);

    printf("Enter the elements of the key array\n");
    for(int i=0;i<m;i++)
        scanf("%d",&a2[i]);
        return;
}

void replace(int a1[100],int a2[100],int n,int m)
{
    int count=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
        if(a1[i]==a2[j])
        {
            a1[i]=-1;
            count++;
        }
    }
    if(count!=m || m>n)
        printf("Error\n");
    else
    {
        printf("Search Successful\n");
    return;
    }
}

void disp(int a1[100],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a1[i]);
}

