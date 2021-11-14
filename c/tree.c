#include <stdio.h> 
int isprime(int);
void combinationUtil(int arr[], int data[], int start, int end, 
					int index, int r); 
void printCombination(int arr[], int n, int r) 
{ 
int data[r]; 
combinationUtil(arr, data, 0, n-1, 0, r); 
} 
void combinationUtil(int arr[], int data[], int start, int end, 
					int index, int r) 
{ 
	int sum=0;
	if (index == r) 
	{ 
		for (int j=0; j<r; j++) 
			{
				sum=isprime(data[0])+isprime(data[1]);
			if(sum!=2)
			{
				printf("%d ", arr[j]);
			}
			}
		printf("\n"); 
		return; 
	} 
    for (int i=start; i<=end && end-i+1 >= r-index; i++) 
	{ 
		data[index] = arr[i]; 
		combinationUtil(arr, data, i+1, end, index+1, r); 
	} 
} 

int main() 
{ 
	int arr[1000],arr0[1000],n,t,r=2;
	scanf("%d",&n);
		for(int i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
                arr0[i]=i+1;
            }
			printCombination(arr, n, r); 
}

int isprime(int n)
{
	int count=0;
	for(int i=1;i<n;i++)
    {
		if(n%i==0)
			count++;
    }
    if(count==2)
    	return 1;
    else
    	return 0;
} 
