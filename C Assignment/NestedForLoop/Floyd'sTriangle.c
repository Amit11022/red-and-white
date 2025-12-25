#include <stdio.h>

int main() {
    int i, j;        // Loop control variables
    int num = 11;    // Starting number for Floyd's triangle

    
    for (i = 0; i <= 3; i++) {        // Outer loop controls number of rows (4 rows)

        
        for (j = 0; j <= i; j++) {  // Inner loop prints numbers in each row
            printf(" %d", num);   // Print current number
            num++;              // Increment number
        }

        printf("\n");       // Move to the next line after each row
    }

}



// 11
// 12 13
// 14 15 16
// 17 18 19 20
