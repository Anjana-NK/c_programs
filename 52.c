#include<stdio.h>
int main() {
    int i, count = 0, sum=0;
    for(i=101; i<=200; i++){
        if(i%7==0){
            count+=1;
            sum+=i;
        }
    }
    printf("Count: %d\nSum: %d\n", count, sum);
}