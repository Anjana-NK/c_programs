#include <stdio.h>
#include <math.h>

#define PI 3.14159   

// Function to calculate diameter
float diameter(float x1, float y1, float x2, float y2)
{
    float d2, d;
    d2 = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    d = sqrt(d2);
    return d;
}

// Function to calculate area
float area(float d)
{
    float r = d / 2.0;
    return PI * pow(r, 2);
}

// Function to calculate circumference
float perimeter(float d)
{
    float r = d / 2.0;
    return 2 * PI * r;
}

int main()
{
    float x1, y1, x2, y2, d, a, p;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    d = diameter(x1, y1, x2, y2);
    a = area(d);
    p = perimeter(d);

    printf("Diameter of the circle = %.2f\n", d);
    printf("Area of the circle = %.2f\n", a);
    printf("Circumference of the circle = %.2lf\n", p);

    return 0;
}