#include<stdio.h>
int main()
{
	int m,n,a[100][100],i,j;
	int sumu=0,sumd=0,suml=0;
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
		printf("diagonal elements\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j){
					printf("%d\t",a[i][j]);
					sumd+=a[i][j];
					}
				else{
					printf("\t");
				}
			}
			printf("\n");
		}
		printf("upper triangle\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i<=j){
					printf("%d\t",a[i][j]);
					sumu+=a[i][j];
					}
				else{
					printf("\t");
				}
			}
			printf("\n");
		}
		printf("lower triangle\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i>=j){
					printf("%d\t",a[i][j]);
					suml+=a[i][j];
					}
				else{
					printf("\t");
				}
			}
			printf("\n");
		}
		printf("sum of diagonal elements is %d\n",sumd);
		printf("sum of upper triangle elements is %d\n",sumu);
		printf("sum of lower triangle elements is %d\n",suml);
		
	}
	else{
		printf("it is not a square matrix");
	}
	return 0;
}
