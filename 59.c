#include<stdio.h>
int main(){
    int y;
    float x;
    printf("enter value of x:");
    scanf("%f",&x);
    //(a) using nested if statements
    if (x>=0){
        if(x>0){
            y=1;
        }
        else{
            y=0;
        }
    }
    else{
        y=-1;
    }
    printf("The value of y using nested if is:%d",y);

    //(b)else if 
    if (x>0){
            y=1;
        }
    else if(x==0){
            y=0;
        }
    else{
        y=-1;
    }
    printf("\nThe value of y using else if is:%d",y);
    
    //(c) using conditional operator
    y=(x>0)?1:((x==0)?0:-1);
    printf("\nThe value of y using conditional operator is:%d",y);
    return 0;
}