#include<stdio.h>
int reverse(int);
int sum(int);
int reverse(int n)
{
	int rem, rev=0;
	while (n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	return rev;
}
int sum(int num)
{
	int rem,s=0;
	while (num!=0)
	{
		rem=num%10;
		s=s+rem;
		num=num/10;
	}
	return s;
}
int main()
{
	int reversenum,digitsum,n,num;
	printf("enter a number to find reverse ");
	scanf("%d",&n);
	reversenum=reverse(n);
	printf("reversed number is %d",reversenum);
	printf("enter a number to find sum of its digits ");
	scanf("%d",&num);
	digitsum=sum(num);
	printf("sum of digits of number is %d",digitsum);
	return 0;
}
	
	
