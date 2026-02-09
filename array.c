#include<stdio.h>
int main() {
    int n,choice,num[100],i,sum=0,pdt=1,search,c=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    do{
        printf("\n1. Sum of elements\n2. Product of elements\n3. Search an element\n4. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                sum=0;
                for(i=0;i<n;i++){
                    sum+=num[i];
                }
                printf("Sum of elements = %d\n",sum);
                break;
            case 2:
                pdt=1;
                for(i=0;i<n;i++){
                    pdt*=num[i];
                }
                printf("Product of elements = %d\n",pdt);
                break;
            case 3:
                printf("Enter the element to be searched: ");
                scanf("%d",&search);
                c=0;
                for(i=0;i<n;i++){
                    if(num[i]==search){
                        c++;
                    }
                }
                if(c>0){
                    printf("Element found %d times in the array.\n",c);
                }else{
                    printf("Element not found in the array.\n");
                }
                break;
            case 4:
                printf("Exiting the program.\n");
                break;    
        }
    }while(choice!=4);
}