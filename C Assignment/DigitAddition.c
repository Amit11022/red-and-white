#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter the number: "); // Take input from user
    scanf("%d", &num);  // Read the input number from user

    lastDigit = num % 10;  // Get the last digit by modulo 10 operation

    firstDigit = num;      // Initialize firstDigit with the input number

    // Loop to find the first digit by dividing number until it is less than 10
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;  // Remove the last digit repeatedly
    }

    sum = firstDigit + lastDigit;  // Calculate sum of first and last digits

    printf("The sum of the first and the last digit: %d\n", sum);  // Print the sum to the user

}

