#include <stdio.h>          

int main() {                
    int i, j, k;            // Loop variables

    for (i = 1; i <= 5; i++) {           // Loop for rows

        for (j = 1; j <= i; j++) {       // Print left side numbers
            printf("%d", j);             // Display number
        }

        for (k = i; k < 5; k++) {        // Loop for middle spaces
            printf("  ");                // Print two spaces
        }

        for (j = 1; j <= i; j++) {       // Loop for right side numbers
            printf("%d", i - j + 1);     // Print numbers in reverse
        }

        printf("\n");                    // Move to next line
    }

}


   //    1        1
   //    12      21
   //    123    321
   //    1234  4321
   //    1234554321

