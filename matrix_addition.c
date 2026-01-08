// Author : Umair
// Programme : Matrix Sum
#include <stdio.h>
int main() {
    // Declaring and initializing two 2D matrices
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];   // To store the result matrix
    // Adding corresponding elements of both matrices
    for (int i = 0; i < 2; i++) {          // Loop for rows
        for (int j = 0; j < 2; j++) {      // Loop for columns
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // Displaying the sum matrix
    printf("Sum of two matrices is:\n");

    for (int i = 0; i < 2; i++) {          // Loop for rows
        for (int j = 0; j < 2; j++) {      // Loop for columns
            printf("%d\t", sum[i][j]);     // Print each element
        }
        printf("\n");                     // Move to next row
    }

    return 0;
}


    /*
        Explanation of addition:
        i = 0, j = 0 → sum[0][0] = 1 + 5 = 6
        i = 0, j = 1 → sum[0][1] = 2 + 6 = 8
        i = 1, j = 0 → sum[1][0] = 3 + 7 = 10
        i = 1, j = 1 → sum[1][1] = 4 + 8 = 12
    */
