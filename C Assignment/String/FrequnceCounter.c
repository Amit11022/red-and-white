#include <stdio.h>                       

int main()
{
    char str[100];                      // Array to store input string
    int freq[256] = {0};                // Array to store frequency of characters
    int i;                              // Loop counter
     
    printf("Enter any string: ");       // Ask user to enter a string
    scanf("%s", str);                   // Read the string from user
     
    for (i = 0; str[i] != '\0'; i++)    // Loop until end of string
    {
        freq[str[i]]++;                 // Increase count of character
    }

    printf("Frequence of each letter:\n"); // Display message
     
    for (i = 0; i < 256; i++)           // Loop for all ASCII characters
    {
        if (freq[i] != 0)               // Check if character exists
        {
            printf("%c => %d\n", i, freq[i]); // Print character and its frequency
        }
    }
}



//   OUTPUT

//  Enter any string: development
//  Frequence of each letter:
//  d => 1
//  e => 3
//  l => 1
//  m => 1
//  n => 1
//  o => 1
//  p => 1
//  t => 1
//  v => 1

