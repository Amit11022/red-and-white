#include <stdio.h>          

int main()
{
    char str[100];          // Array to store the string
    char *ptr;              // Pointer to access string characters
    int length = 0;         // Variable to store length of string

    printf("Enter any string: "); // input from user to enter a string
    gets(str);              // Reads the string from user

    ptr = str;              // Assigns base address of string to pointer

    while (*ptr != '\0')    // Loop until end of string
    {
        length++;           // Increments length counter
        ptr++;              // Moves pointer to next character
    }

    printf("The length of a string is: %d", length); // Displays string length
}


//  OUTPUT

//  Enter any string: hello world
//  The length of a string is: 11
