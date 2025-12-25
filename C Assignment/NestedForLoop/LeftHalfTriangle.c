#include <stdio.h>

int main() {
    int i, j, k;
    int num;  // will hold starting number for each row

    
    for (i = 1; i <= 5; i++) {      // Outer loop for rows

        for (j = i; j < 5; j++) {   // Print spaces
            printf("  ");
        }
        
        num = 6 - i;   // Calculate starting number for this row

        for (k = num; k <= 5; k++) {  // Print numbers from num to 5
            printf("%d ", k);
        }

        printf("\n");   // Move to next line
    }

}


//          5
//        4 5
//      3 4 5
//    2 3 4 5
//  1 2 3 4 5



