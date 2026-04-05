#include<stdio.h>
int main()
{
	int m,n,a[100][100],i,j;
	printf("enter rows and coloum of matrix");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("enter elements to matrix");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("diagonal elements are:\n");

		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j){
					printf("%d\t",a[i][j]);
					}
			}
			printf("\n");
		}
		printf("upper triangular elements are:\n");
	    for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i<=j){
					printf("%d\t",a[i][j]);
					}
				else{
					printf("\t");
				}
			}
			printf("\n");
		}
		printf("lower triangular elements are:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i>=j){
					printf("%d\t",a[i][j]);
					}
				else{
					printf("\t");	
			}
			}
			printf("\n");
		}
	}
	else{
		printf("it is not a square matrix");
	}
	return 0;
}
