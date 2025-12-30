#include <stdio.h>                               

int main() {                                     
    int row, column, i, j;                       // row & column sizes, loop variables
    int a[10][10];                               // Declare 2D array

    printf("Enter the array's row & column size: "); // Ask user for row and column
    scanf("%d %d", &row, &column);                   // Read row and column values

    printf("Enter array's elements:\n");         // Ask user to enter array elements
    for(i = 0; i < row; i++) {                   // Loop through rows
        for(j = 0; j < column; j++) {            // Loop through columns
            printf("a[%d][%d] = ", i, j);        // Display index position
            scanf("%d", &a[i][j]);               // Store element in array
        }
    }

    printf("The transpose matrix of an array:\n"); // Display transpose 
    for(j = 0; j < column; j++) {                  // Loop for transpose columns
        for(i = 0; i < row; i++) {                 // Loop for transpose rows
            printf("%d ", a[i][j]);                // Print transpose element
        }
        printf("\n");                              // Move to next row
    }

}


//  OUTPUT

//  Enter the array's row & column size: 3 3

//  Enter array's elements:
//  a[0][0] = 2
//  a[0][1] = 4
//  a[0][2] = 1
//  a[1][0] = 3
//  a[1][1] = 5
//  a[1][2] = 4
//  a[2][0] = 8
//  a[2][1] = 2
//  a[2][2] = 6

//  The transpose matrix of an array:
//  2 3 8
//  4 5 2
//  1 4 6
