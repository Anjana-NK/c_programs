#include<stdio.h>
int main()
{
    int n1,n2,num1[100],num2[100],m[100],i,j,k=0;
    printf("Enter the number of elements in the first array: ");
    scanf("%d",&n1);
    printf("Enter the elements of the first array: ");
    for(i=0;i<n1;i++){
        scanf("%d",&num1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d",&n2);
    printf("Enter the elements of the second array: ");
    for(i=0;i<n2;i++){
        scanf("%d",&num2[i]);
    }
    for(i=0;i<n1;i++){
        m[i]=num1[i];
    }
    for(i=0;i<n2;i++){
        m[n1+i]=num2[i];
    }
    printf("Merged array is: ");
    for(i=0;i<n1+n2;i++){
        printf("%d ",m[i]);
    }
    return 0;
}