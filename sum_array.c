#include<stdio.h>
int a[100],sum=0,i=0,n;
int *p=&a[0];
int main()
{
    printf("enter number of elements in array: \n");
    scanf("%d",&n);
    printf("enter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=*p;
        p++;
    }
    printf("sum of array elements is: %d",sum);
}