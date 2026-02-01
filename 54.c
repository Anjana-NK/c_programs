#include <stdio.h>

int main() {
    int n, i, mark, gt80 = 0, gt60 = 0, gt40 = 0, le40 = 0, r81_100 = 0, r61_80 = 0, r41_60 = 0, r0_40 = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter marks:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &mark);
        if (mark < 0 || mark > 100)
        {
            printf("Invalid mark entered. Please enter marks between 0 and 100.\n");
            i--; 
            continue;
        }  

        gt80 += (mark > 80);
        gt60 += (mark > 60);
        gt40 += (mark > 40);
        le40 += (mark <= 40);
        r81_100 += (mark >= 81);
        r61_80  += (mark >= 61 && mark <= 80);
        r41_60  += (mark >= 41 && mark <= 60);
        r0_40   += (mark <= 40);
    }

    printf("\nResults:\n");
    printf("More than 80 marks  : %d\n", gt80);
    printf("More than 60 marks  : %d\n", gt60);
    printf("More than 40 marks  : %d\n", gt40);
    printf("40 or less marks    : %d\n", le40);
    printf("Marks 81 to 100     : %d\n", r81_100);
    printf("Marks 61 to 80      : %d\n", r61_80);
    printf("Marks 41 to 60      : %d\n", r41_60);
    printf("Marks 0 to 40       : %d\n", r0_40);

    return 0;
}
