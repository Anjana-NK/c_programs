// anjana nk dept of cs
#include<stdio.h>
#include<math.h>
void main(){
    int n,sum,a,b;
    printf("enter a two digit number");
    scanf("%d",&n);
    a=n%10;
    b=floor(n/10);
    sum=a+b;
    printf("sum of digits is %d",sum);
}