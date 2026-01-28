#include<stdio.h>
int main()
{
    float a,b,sum,pdt,diff,quot;
    int c;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    printf("which operation do you want to perform?\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d",&c);
    if (c==1)
    {
        sum=a+b;
        printf("The sum is: %f\n",sum);
    }
    else if (c==2)
    {
        diff=a-b;
        printf("The difference is: %f\n",diff);
    }
    else if (c==3)
    {
        pdt=a*b;
        printf("The product is: %f\n",pdt);
    }
    else if (c==4)
    {
        quot=a/b;
        printf("The quotient is: %f\n",quot);
    }
    else
    {
        printf("Invalid choice\n");
    }
}
