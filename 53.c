#include <stdio.h>

int main() {
    float a, b, c, d, m, n;
    float x1, x2, den;

    printf("Enter the values of a, b, c, d, m, n: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);

    den=(a*d)-(c*b);
    x1=(m*d-b*n)/den;
    x2=(n*a-m*c)/den;

    printf("The solution is:\n");
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
    return 0;
}