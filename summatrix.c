#include<stdio.h>
int main(){
	int m,n,p,q,a[100][100],b[100][100],c[100][100],i,j;
	printf("enter rows and coloum of first matrix");
	scanf("%d%d",&m,&n);
	printf("enter rows and coloumn of second matrix");
	scanf("%d%d",&p,&q);
	if(m==p && n==q){
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
		for(i=0;i<m;i++){
			for(j=0;j<n;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		for(i=0;i<m;i++){
			for(j=0;j<n;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("matrix addition not possible");
	}
	return 0;
}
