#include<stdio.h>
void sum(int,int);
void area();
void vote(int);
int main()
{
	int a, b, age;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	sum(a,b);
	printf("enter age");
	scanf("%d",&age);
	vote(age);
	area();
}
void sum(int a , int b )
{
	int c;
	c=a+b;
	printf("sum id %d",c);
	area();
}
void vote(int age)
{
	if(age>=18)
	{
		printf("eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
}

