#include<stdio.h>
int main()
{
    int c;
    float a,b;
    printf("1.addition\n2.substraction\n3.multiplication\n4.division\n");
    printf("enter your choice");
    scanf("%d",&c);
    printf("enter two numbers");
    scanf("%f%f",&a,&b);
    switch (c)
    {
    case 1:
    {
        printf("sum is %f",a+b);
        break;
    }
    case 2:
    {
        printf("difference is %f",a-b);
        break;
    }
    case 3:
    {
        printf("product is %f",a*b);
        break;
    }
    case 4:
    {
        printf("quotient is %f",a/b);
        break;
    }
    default:
    {
        printf("invalid choice");
    }
    }
    return 0;

}