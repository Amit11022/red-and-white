#include <stdio.h>

int main() {
    int i, j;                          // Loop variables
    int height = 6;                    // Number of rows
    int width = 5;                     // Number of stars per row

    for (i = 0; i < height; i++) {     // Loop for rows
        for (j = 0; j < width; j++) {  // Loop for columns

            if (i == 0)                // Top horizontal line
                printf("* ");

            else if (i == 2)           // Middle horizontal line
                printf("* ");

            else if (j == 0)           // Left vertical line
                printf("* ");

            else if (j == width - 1 && i == 1) // Right vertical (upper only)
                printf("* ");

            else
                printf("  ");          // Spaces for empty area
        }

        printf("\n");                  // Move to next line
    }

}

//   * * * * *
//   *       *
//   * * * * *
//   *
//   *
//   *

