#include <stdio.h>              

int main()
{
    char str[100];                // Character array to store the string
    int i = 0, len = 0, flag = 1; // i = loop variable, len = string length, flag = palindrome indicator

    printf("Enter any string: "); // Ask user to enter a string
    scanf("%s", str);             // Read the string from user

    while (str[len] != '\0')      // Loop until end of string is reached
    {
        len++;                    // Count number of characters
    }

    for (i = 0; i < len / 2; i++) // Loop from start to middle of string
    {
        if (str[i] != str[len - i - 1]) // Compare characters from both ends
        {
            flag = 0;             // Set flag to 0 if characters do not match
            break;                // Exit loop
        }
    }

    if (flag == 1)                // Check if flag is still 1
        printf("The given string is Palindrome"); // Palindrome case
    else
        printf("The given string is Not Palindrome"); // Not palindrome case

}


//   OUTPUT

//  Enter any string: nayan
//  The given string is Palindrome

