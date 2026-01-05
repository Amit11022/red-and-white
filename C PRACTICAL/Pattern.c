#include <stdio.h>

int main() {
    int i, j;                           // loop variable

    for (i = 1; i <= 5; i++) {          // Outer loop for rows
        for (j = 1; j <= i; j++) {      // Inner loop for columns
            printf("%d ", i * i);       // Print square of i
        }
        printf("\n");                   // New line after each row
    }

}

// OUTPUT


