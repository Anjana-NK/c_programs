#include<stdio.h> 
int main()
{   
    char str[100];
    int i=0;
    char *p = &str[0];
    printf("enter a character string: ");
    scanf("%[^\n]", str);
    while (*p != '\0')
    {
        printf("address of character %c is ", *p);
        printf("%p\n", p);
        p++;
        i++;
    }


}