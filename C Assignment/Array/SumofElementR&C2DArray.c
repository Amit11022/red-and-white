#include <stdio.h>                               

int main() {                                     
    int r, c, i, j;                              // r = rows, c = columns, i & j = loops
    int a[10][10];                               // Declare 2D array
    int row, col;                                // Selected row and column numbers
    int rowSum = 0, colSum = 0;                  // Variables to store sums

    printf("Enter the array's row size: ");      // Ask user for row size
    scanf("%d", &r);                             // Read row size
	                                        
    printf("Enter the array's column size: ");   // Ask user for column size
    scanf("%d", &c);                             // Read column size

    printf("Enter array's elements:\n");         // Ask user to enter elements
    for(i = 0; i < r; i++) {                     // Loop through rows
        for(j = 0; j < c; j++) {                 // Loop through columns
            printf("a[%d][%d] = ", i, j);        // Show array index
            scanf("%d", &a[i][j]);               // Store element in array
        }
    }

    printf("Enter row number: ");                // Ask for row number
    scanf("%d", &row);                           // Read row number

    printf("Elements of row %d: ", row);         // Display row elements
    for(j = 0; j < c; j++) {                     // Loop through selected row
        printf("%d ", a[row][j]);                // Print row element
        rowSum += a[row][j];                     // Add element to row sum
    }
    printf("\nThe sum of row %d: %d\n", row, rowSum); // Print row sum

    printf("Enter column number: ");             // Ask for column number
    scanf("%d", &col);                           // Read column number

    printf("Elements of column %d: ", col);      // Display column elements
    for(i = 0; i < r; i++) {                     // Loop through selected column
        printf("%d ", a[i][col]);                // Print column element
        colSum += a[i][col];                     // Add element to column sum
    }
    printf("\nThe sum of column %d: %d", col, colSum); // Print column sum

}


//  OUTPUT


//  Enter the array's row size: 3
//  Enter the array's column size: 3

//  Enter array's elements:
//  a[0][0] = 2
//  a[0][1] = 7
//  a[0][2] = 1
//  a[1][0] = 3
//  a[1][1] = 5
//  a[1][2] = 4
//  a[2][0] = 8
//  a[2][1] = 9
//  a[2][2] = 6

//  Enter row number: 0
//  Elements of row 0: 2 7 1
//  The sum of row 0: 10

//  Enter column number: 2
//  Elements of column 2: 1 4 6
//  The sum of column 2: 11

