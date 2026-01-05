#include <stdio.h>            

int main() {
    char ch;                       // Declare a variable to store the character

    printf("Enter a character: "); // user to enter a character
    scanf("%c", &ch);              // Read the character from user input

    // Check if the character is a vowel using switch
    switch(ch) {
        case 'a':                // If character is 'a'
        case 'e':                // or 'e'
        case 'i':                // or 'i'
        case 'o':                // or 'o'
        case 'u':                // or 'u'
        case 'A':                // or 'A'
        case 'E':                // or 'E'
        case 'I':                // or 'I'
        case 'O':                // or 'O'
        case 'U':                // or 'U'
            printf("%c is a vowel.\n", ch); // Print if it's a vowel
            break;               // Exit switch after match
        default:                 // If none of the above cases match
            printf("%c is a consonant.\n", ch); // Print consonant
    }

}

//  OUTPUT



