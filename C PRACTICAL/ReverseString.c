#include <stdio.h>                 

void reverseString(char str[]) {    // Function to reverse a string
    int i = 0, j = 0;               // i for start index, j for end index
    char temp;                      // Temporary variable for swapping

    while (str[j] != '\0') {        // Find length of the string
        j++;                        // Move to next character
    }
    j = j - 1;                      // Set j to last character index

    while (i < j) {                 // Loop until middle of string
        temp = str[i];              // Store character at start
        str[i] = str[j];            // Copy end character to start
        str[j] = temp;              // Copy stored character to end
        i++;                        // Move start index forward
        j--;                        // Move end index backward
    }
}

int main() {
    char str[] = "Hello";            // Declare and initialize string

    reverseString(str);              // Call function to reverse string
    printf("Reversed string: %s", str); // Print reversed string

}

