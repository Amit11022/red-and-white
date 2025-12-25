#include <stdio.h>

int main() {
    int i, j, k;  // i=row, j=spaces, k=numbers

    for(i = 1; i <= 5; i++) {  // loop for rows

        // print spaces
        for(j = i; j < 5; j++) {  // loop for spaces before numbers
            printf("  ");          // print a space
        }

        // print decreasing part first
        for(k = 5 - i + 1; k <= 5; k++) {  // loop for left side numbers
            printf(" %d", k);               // print number
        }

        // print increasing part after the peak
        for(k = 4; k >= 5 - i + 1; k--) {  // loop for right side numbers
            printf(" %d", k);               // print number
        }

        printf("\n");  // move to next row
    }

}



//           5
//         4 5 4
//       3 4 5 4 3
//     2 3 4 5 4 3 2
//   1 2 3 4 5 4 3 2 1
