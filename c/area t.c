#include <stdio.h>

int main() {
    int firstangle, secondangle, thirdangle;  // Variables to store the three angles of a triangle

    printf("enter the value of firstangle:"); // Ask user to enter first angle
    scanf("%d", &firstangle);                 // Read first angle

    printf("enter the value of secondangle:"); // Ask user to enter second angle
    scanf("%d", &secondangle);                 // Read second angle

    // Calculate the third angle using the triangle angle sum property (sum = 180)
    thirdangle = 180 - (firstangle + secondangle);

    printf("%d", thirdangle);   // Print the third angle
}

