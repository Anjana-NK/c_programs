/* Write programs to evaluate the following functions to 0.0001% accuracy.
(a) sinx = x-x³/3! + x^5/5! - x^7/7! + ...
(b) cosx=1-x²/2! + x^4/4! - x^6/6! +
(c) SUM=1+(1/2)² + (1/3)3 + (1/4)4+ ...*/
#include <stdio.h>
#include <math.h>
int fact(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

float sinx(float x)
{
    float term, sum=0;
    int n = 1,sign = 1;
    while(1)
    {
        term=pow(x,n)/fact(n);
        if (fabs(term<0.0000001))
            break;
        sum += sign * term;
        sign = -sign;
        n+=2;
    }
    return sum;
}

float cosx(float x)
{
    float term, sum=1;
    int n = 2,sign = 1;
    while(1)
    {
        term=pow(x,n)/fact(n);
        if (fabs(term<0.000001))
            break;
        sum += sign * term;
        sign = -sign;
        n+=2;
    }
    return sum;
}
float series(int n)
{
    float sum=0;
    for(int i=1;i<=n;i++)
        sum+=pow(1.0/i,i);
    return sum;
}
int main()
{
    float x ,n;
    printf("Enter value of x: ");
    scanf("%f",&x);
    printf("sin(%f) = %f\n", x, sinx(x));
    printf("cos(%f) = %f\n", x, cosx(x));
    printf("Enter value of n: ");
    scanf("%f",&n);
    printf("SUM = %f\n", series(n));
    return 0;
}
