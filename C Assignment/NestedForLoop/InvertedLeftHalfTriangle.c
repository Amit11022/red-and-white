#include <stdio.h>

int main() {
    int i, j, k;  // i = row, j = space, k = number in row

    for(i = 0; i < 5; i++) {  // loop for rows
        for(j = 0; j < i; j++) {  // loop for spaces
            printf("  ");  // print a space
        }

        for(k = 1; k <= 5 - i; k++) {  // loop for numbers in row
            if(k % 2 != 0)             // if position is odd
                printf("1 ");            // print 1
            else                        // if position is even
                printf("0 ");            // print 0
        }

        printf("\n");  // move to next row
    }
    
}


//  1 0 1 0 1
//    1 0 1 0
//      1 0 1
//        1 0
//          1
