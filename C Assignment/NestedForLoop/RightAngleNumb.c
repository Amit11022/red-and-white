#include <stdio.h>

int main() {
    int i, j;   // Loop control variables

    // Outer loop controls the number of rows
    for (i = 0; i < 5; i++) {

        // Inner loop prints numbers in each row
        for (j = 0; j <= i; j++) {
            // Print numbers starting from 41
            printf("%d ", 41 + j);
        }

        // Move to the next line after each row
        printf("\n");
    }
}
    
    
//   41
//   41 42
//   41 42 43
//   41 42 43 44
//   41 42 43 44 45




