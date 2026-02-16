#include<stdio.h>
int main() {
    int n, num[100], i,j;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("Elements in the array are: ");
    for(i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(num[j]>num[j+1]){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    printf("\nSorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    return 0;
}