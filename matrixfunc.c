#include<stdio.h>
void input(int, int ,int [][]);
void sub(int , int , int[][], int[],int[][]);
void display(int , int , int [][]);
void input(int r , int c, int mat[r][c])
{
	int i,j;
	while (i<r)
	{
		while(j<c)
		{
			scanf("%d",&mat[i][j]);
			j++;
		}
		i++;
	}
}
void sub(int r, int c , int A[][], int B[][],int mat[][])
{
	int i,j;
	while (i<r)
	{
		while(j<c)
		{
			mat[i][j]=a[i][j]-B[i][j]
			j++;
		}
		i++;
	}
}
void display(int r, int c, int mat[][])
{
	int i,j;
	while (i<r)
	{
		while(j<c)
		{
			printf("%d",mat[i][j]);
			j++;
		}
		i++;
	}
}
int main()
{
	int r,c;
	printf("enter no of rows and coloumns");
	scanf("%d%d",&r,&c);
	int A[r][c],B[r][c],mat[r][c];
	printf("matrix A");
	input(r,c,A);
	printf("matrix B");
	input(r,c,B);
	sub(r,c,A,B,mat);
	printf("result")
	display(r,c,mat)
	return 0;
}
