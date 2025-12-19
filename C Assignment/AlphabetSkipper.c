#include <stdio.h>   

int main() {
    int i = 97;      // Initialize i with ASCII value of 'a'

    do {
        printf("%c ", i);  // Print the character
        i++;               // Move to next alphabet
        i += 3;            // Skip next 3 alphabets
    } while (i <= 122);     // Continue till 'z'

}

