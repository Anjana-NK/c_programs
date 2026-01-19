// Anjana nk dept of cs
#include<stdio.h>
#include <math.h>
int main(){
    double dr, sc, hc,eoq, tbo;
    printf("enter demand rate");
    scanf("%lf",&dr);
    printf("enter setup cost");
    scanf("%lf",&sc);
    printf("enter holding cost per item per unit tine");
    scanf("%lf",&hc);
    tbo=sqrt((2*sc)/(dr*hc));
    eoq=sqrt((2*dr*sc)/hc);
    printf("value of eoq is %lf and of tbo is %lf",eoq, tbo);
}