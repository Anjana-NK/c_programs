#include<stdio.h>
int main()
{
	int m,n,a[100][100],i,j;
	printf("enter rows and coloum of matrix");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("enter elements to first matrix");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j){
					printf("%d",a[i][j]);
					}
			}
		}
	}
	else{
		printf("it is not a square matrix");
	}
	return 0;
}
