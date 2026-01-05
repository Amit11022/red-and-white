#include <stdio.h>              

int main() {                    
    int arr[] = {10, 25, 5, 40, 15};  // 1D array initialization
    int n = 5;                  // Number of elements in array
    int max = arr[0];           // Assume first element is largest
    int i;                      // Loop variable

    for (i = 1; i < n; i++) {   // Loop through array elements
        if (arr[i] > max) {     // Compare current element with max
            max = arr[i];       // Update max if larger element found
        }
    }

    printf("Largest element = %d", max);  // Print largest element

}

