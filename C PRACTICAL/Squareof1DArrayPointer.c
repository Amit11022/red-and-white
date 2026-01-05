#include <stdio.h>             

int main() {
    int arr[] = {1, 2, 3, 4, 5};   // Declare and initialize 1D array
    int n = 5;                    // Number of elements in array
    int *ptr = arr;               // Pointer pointing to first element of array
    int i;                        // Loop variable

    printf("Square of array elements:\n"); // Message output

    for (i = 0; i < n; i++) {     // Loop through array elements
        printf("%d ", (*ptr) * (*ptr)); // Print square of current element
        ptr++;                   // Move pointer to next element
    }

}

