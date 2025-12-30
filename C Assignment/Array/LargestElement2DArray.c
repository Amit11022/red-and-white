#include <stdio.h>                          

int main() {                                
    int row, column, i, j;                  // row & column size, loop variables
    int a[10][10];                          // Declare 2D array
    int max;                                // Variable to store largest value

    printf("Enter the array's row size: "); // Ask user for number of rows
    scanf("%d", &row);                      // Read row size

    printf("Enter the array's column size: "); // Ask user for number of columns
    scanf("%d", &column);                      // Read column size

    printf("Enter array's elements:\n");    // Ask user to enter elements
    for(i = 0; i < row; i++) {              // Loop for rows
        for(j = 0; j < column; j++) {       // Loop for columns
            printf("a[%d][%d] = ", i, j);   // Display array index
            scanf("%d", &a[i][j]);          // Store element in array
        }
    }

    max = a[0][0];                          // Assume first element is largest
    for(i = 0; i < row; i++) {              // Loop through rows
        for(j = 0; j < column; j++) {       // Loop through columns
            if(a[i][j] > max) {             // Compare current element with max
                max = a[i][j];              // Update max value
            }
        }
    }

    printf("The largest element is: %d", max); // Print largest element

}


//   OUTPUT

//   Enter the array's row size: 3
//   Enter the array's column size: 3

//   Enter array's elements:
//   a[0][0] = 2
//   a[0][1] = 7
//   a[0][2] = 1
//   a[1][0] = 3
//   a[1][1] = 5
//   a[1][2] = 4
//   a[2][0] = 8
//   a[2][1] = 9
//   a[2][2] = 6

//   The largest element is: 9
