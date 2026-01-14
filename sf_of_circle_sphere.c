#include<stdio.h>
void main()
{
    float r,R,a,p,v,pi=3.14;
    printf("enter radius of circle");
    scanf("%f",&r);
    a=pi*r*r;
    p=2*pi*r;
    printf("area of circle is %f \n and perimeter is %f \n",a,p);
    printf("enter radius of sphere");
    scanf("%f",&R);
    v=(4/3)*pi*R*R*R;
    printf("volume of sphere is %f",v);
}