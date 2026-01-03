#include <stdio.h>                      

/* Function Declaration */
void cubeArray(int arr[][10], int size); // Function to print cube of array elements

int main()
{
    int arr[10][10];                   // Declare 2D array
    int n, i, j;                       // Variables for size and loops

    printf("Enter array's size: ");    // Ask user for array size
    scanf("%d", &n);                   // Read array size

    printf("\nEnter array elements:\n"); // Message to enter array elements
    for (i = 0; i < n; i++)            // Loop for rows
    {
        for (j = 0; j < n; j++)        // Loop for columns
        {
            printf("a[%d][%d] = ", i, j); // Display index position
            scanf("%d", &arr[i][j]);   // Read array element
        }
    }

    printf("\nCubes of all elements:\n"); // Message before displaying cubes
    cubeArray(arr, n);                 // Call function to print cubes

    return 0;                          // End of main function
}

/* Function Definition */
void cubeArray(int arr[][10], int size)
{
    int i, j;                          // Loop variables

    for (i = 0; i < size; i++)         // Loop for rows
    {
        for (j = 0; j < size; j++)     // Loop for columns
        {
            printf("%d ", arr[i][j] * arr[i][j] * arr[i][j]); // Print cube of element
        }
        printf("\n");                  // Move to next line
    }
}


//  OUTPUT


//  Enter array's size: 2

//  Enter array elements:
//  a[0][0] = 3
//  a[0][1] = 2
//  a[1][0] = 5
//  a[1][1] = 4

//  Cubes of all elements:
//  27 8
//  125 64

