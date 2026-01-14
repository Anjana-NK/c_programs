#include<stdio.h>
void main(){
    float l,b,h,v;
    printf("enter length, breadth and height of cuboid");
    scanf("%f%f%f",&l,&b,&h);
    v=l*b*h;
    printf("volume of cuboid is %f",v);
}