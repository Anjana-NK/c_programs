#include <stdio.h>

int main() {
    char name[50];
    int i = 0;

    printf("Enter your name: ");
    gets(name);

    printf("ASCII values:\n");

    while(name[i] != '\0') {
        printf("%c = %d\n", name[i], name[i]);
        i++;
    }

    return 0;
}