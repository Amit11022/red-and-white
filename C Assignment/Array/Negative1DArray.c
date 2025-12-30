#include <stdio.h>              

int main() {                    
    int n, i;                   // n = size of array, i = loop variable
    int a[100];                 // Declare array with max size 100

    printf("Enter the array's size: ");   // Ask user for array size
    scanf("%d", &n);                      // Read array size

    printf("Enter array's elements:\n");  // Ask user to enter elements
    for(i = 0; i < n; i++) {              // Loop to read array elements
        printf("a[%d] = ", i);            // Display array index
        scanf("%d", &a[i]);               // Store input in array
    }

    printf("Negative elements from an Array: ");    //  for output
    for(i = 0; i < n; i++) {                        // Loop through array
        if(a[i] < 0) {                              // Check negative value
            printf("%d ", a[i]);                    // Print negative element
        }
    }
}


//   OUTPUT

//  Enter the array's size: 5

//  Enter array's elements:
//  a[0] =  2
//  a[1] = -4
//  a[2] =  1
//  a[3] = -3
//  a[4] = -5

//  Negative elements from an Array: -4 -3 -5
