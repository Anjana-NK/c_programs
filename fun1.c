#include <stdio.h>

// 🔹 Function prototype
void area();

void sum(int a , int b )
{
    int c;
    c = a + b;
    printf("sum is %d\n", c);
    area();
}

void vote(int age)
{
    if(age >= 18)
    {
        printf("eligible for vote\n");
    }
    else
    {
        printf("not eligible for vote\n");
    }
}

void area()
{
    int r;
    float a;
    printf("enter radius: ");
    scanf("%d", &r);
    a = 3.14 * r * r;
    printf("area of circle is %f\n", a);
}

int main()
{
    int a, b, age;

    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);

    sum(a, b);

    printf("enter age: ");
    scanf("%d", &age);

    vote(age);

    area();

    return 0;
}