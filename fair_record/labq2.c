#include <stdio.h>

// function to find largest using nested if
int largest(int a, int b, int c)
{
    if(a > b)
    {
        if(a > c)
            return a;
        else
            return c;
    }
    else
    {
        if(b > c)
            return b;
        else
            return c;
    }
}

// function to find smallest using if-else if
int smallest(int a, int b, int c)
{
    if(a < b && a < c)
        return a;
    else if(b < a && b < c)
        return b;
    else
        return c;
}

// function to find average
float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int m1, m2, m3;
    int max, min, V;
    float avg;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    max = largest(m1, m2, m3);
    min = smallest(m1, m2, m3);
    avg = average(m1, m2, m3);

    V = (avg >= 50) ? 1 : 0;   // conditional operator

    printf("Largest mark = %d\n", max);
    printf("Smallest mark = %d\n", min);
    printf("Average = %.2f\n", avg);
    printf("Value of V = %d\n", V);

    return 0;
}