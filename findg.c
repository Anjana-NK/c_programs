#include<stdio.h>
#define pi 3.14
int main()
{
    float t,l,g;
    printf("Enter the length of the pendulum: ");
    scanf("%f",&l);
    printf("Enter the time period of the pendulum: ");
    scanf("%f",&t);
    g=(4*pi*pi*l)/(t*t);
    printf("The acceleration due to gravity is: %f m/s^2\n",g);
}