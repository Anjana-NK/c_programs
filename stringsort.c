#include<stdio.h>
int main(){
    char a[100],temp;
    int i,j;
    printf("enter a string: ");
    scanf("%99[^\n]",a);
    for(i=0;a[i]!='\0';i++){
        for(j=i+1;a[j]!='\0';j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted string is: %s",a);
}