#include <stdio.h>

// Function to find largest using nested if
int findLargest(int a, int b, int c)
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

// Function to find smallest using if–else if
int findSmallest(int a, int b, int c)
{
    if(a < b && a < c)
        return a;
    else if(b < c)
        return b;
    else
        return c;
}

// Function to calculate average and assign V using conditional operator
int calculateV(int a, int b, int c, float *avg)
{
    *avg = (a + b + c) / 3.0;
    int V = (*avg >= 50) ? 1 : 0;
    return V;
}

int main()
{
    int m1, m2, m3;
    float average;
    int largest, smallest, V;

    printf("Enter marks of three subjects (out of 100): ");
    scanf("%d %d %d", &m1, &m2, &m3);

    largest = findLargest(m1, m2, m3);
    smallest = findSmallest(m1, m2, m3);
    V = calculateV(m1, m2, m3, &average);

    printf("\nLargest Mark = %d", largest);
    printf("\nSmallest Mark = %d", smallest);
    printf("\nAverage = %.2f", average);
    printf("\nValue of V = %d", V);

    return 0;
}
