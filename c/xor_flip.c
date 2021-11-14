#include <stdio.h>
void print(int mat[4][4]);
void main()
{

	int mat[4][4]={
		{1,1,0,0},
		{1,0,0,1},
		{0,1,1,1},
		{1,0,1,0}
	};

        int i,j;
	for(i=0;i<4;i++)
		for(j=0;j<2;j++)
		{
		mat[i][j]=(mat[i][3-j])^1;
		mat[i][3-j]=(mat[i][j])^1;
		}	
	
	print(mat);
}

void print(int mat[4][4])
{
	for(int i=0;i<4;i++)
	{	for(int j=0;j<4;j++)
			printf("%d ",mat[i][j]);
			printf("\n");
	}
}
