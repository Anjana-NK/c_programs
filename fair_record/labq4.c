#include <stdio.h>

int main()
{
    int a[10][10];      // matrix
    int m,n;            // rows and columns
    int i,j,k;
    int largest, second;
    int min, col;
    int saddle = 0;     // flag to check if saddle point exists

    printf("Enter number of rows and columns: ");
    scanf("%d%d",&m,&n);

    printf("Enter matrix elements:\n");

    // Reading matrix elements
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    /* ---------------- SECOND LARGEST ELEMENT ---------------- */

    // Step 1: assume first element is largest
    largest = a[0][0];

    // Step 2: find largest element in matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] > largest)
                largest = a[i][j];
        }
    }

    // Step 3: assume second largest initially
    second = a[0][0];

    // Step 4: find largest element that is not equal to the largest
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] > second && a[i][j] != largest)
                second = a[i][j];
        }
    }

    printf("Second largest element = %d\n",second);


    /* ---------------- SADDLE POINT ---------------- */

    // Check each row
    for(i=0;i<m;i++)
    {
        // Assume first element of row is minimum
        min = a[i][0];
        col = 0;

        // Find smallest element in that row
        for(j=1;j<n;j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];  // update minimum
                col = j;        // store its column position
            }
        }

        // Now check that column to see if min is largest in column
        for(k=0;k<m;k++)
        {
            if(a[k][col] > min)
                break;  // if any element is larger, not saddle point
        }

        // If loop completed fully, then it is saddle point
        if(k == m)
        {
            printf("Saddle Point = %d at row %d column %d\n",min,i+1,col+1);
            saddle = 1;
        }
    }

    // If no saddle point found
    if(saddle == 0)
        printf("No Saddle Point\n");

    return 0;
}