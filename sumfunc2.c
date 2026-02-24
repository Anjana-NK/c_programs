#include<stdio.h>
void sum(int,int);
int main()
{
	int a,b;
	printf("enter numbers");
	scanf("%d%d",&a,&b);
	sum(a,b);
	//printf("%d %d",a,b);
	return 0;
}
void sum(int a, int b )
{
	int c ;
	c=a+b;
	printf("sum is %d",c);
	//printf("%d %d",a,b);
}
