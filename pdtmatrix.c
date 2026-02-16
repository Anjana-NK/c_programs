#include<stdio.h>
int main()
{
	int m,n,p,q,a[100][100],b[100][100],c[100][100],i,j,k;
	printf("enter rows and coloum of first matrix");
	scanf("%d%d",&m,&n);
	printf("enter rows and coloumn of second matrix");
	scanf("%d%d",&p,&q);
	if(n==p){
		printf("enter elements to first matrix");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter elements to second matrix");
		for(i=0;i<p;i++){
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<m;i++){ // for row of first matrix
			for(j=0;j<q;j++) // for column of second matrix
			{
				c[i][j]=0; // initialize the element of product matrix
				for( k=0;k<n;k++) // for column of first matrix and row of second matrix extraccting each element 
				{
					c[i][j]+=a[i][k]*b[k][j]; // multiplying and adding to the product matrix
				}
			}
		}
		printf("product of two matrices is\n");
		for(i=0;i<m;i++){
			for(j=0;j<q;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		} 
    
    }
return 0;
}