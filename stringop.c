#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], result[200];
    int choice;

    do
    {
        printf("\nSTRING OPERATIONS MENU\n");
        printf("1. String Length (strlen)\n2. String Copy (strcpy)\n3. String Concatenation (strcat)\n4. String Compare (strcmp)\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of string = %lu\n", strlen(str1)); // Finds the number of characters in a string (excluding '\0')
                break;

            case 2:
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(result, str1);// first the string u wanna copy then og string
                printf("Copied string = %s\n", result);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string = %s\n", str1);// add both string and display it together
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);

                if(strcmp(str1, str2) == 0)//compares using each ascii value
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}