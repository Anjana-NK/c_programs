#include<stdio.h>
void main(){
    float l,b,p,area;
    printf("enter length and breadth of rectangle");
    scanf("%f%f",&l,&b);
    area=l*b;
    p=2*(l+b);
    printf("area of rectangle is %f",area);
    printf("perimeter of rectangle is %f",p);
}
