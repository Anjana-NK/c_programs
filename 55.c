#include <stdio.h>

int main() {
    int math, phy, chem, total, mp_total;

    printf("Enter marks for Math, Physics, and Chemistry: ");
    scanf("%d %d %d", &math, &phy, &chem);
    total = math + phy + chem;
    mp_total = math + phy;
    if ((math >= 60 && phy >= 50 && chem >= 40 && total >= 200) || (mp_total >= 150)) {
        printf("\nResult: ELIGIBLE\n");
    } else {
        printf("\nResult: NOT ELIGIBLE\n");
    }

    return 0;
}