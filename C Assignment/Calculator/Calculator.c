#include <stdio.h>   

/* Function Declarations */
int add(int a, int b);   // Function to add two numbers
int sub(int a, int b);   // Function to subtract two numbers
int mul(int a, int b);   // Function to multiply two numbers
int div(int a, int b);   // Function to divide two numbers
int mod(int a, int b);   // Function to find modulus

int main()
{
    int choice, a, b;    // Variables for menu choice and numbers

    while (1)            // Infinite loop
    {
        printf("\nPress 1 for +");     // Menu for addition
        printf("\nPress 2 for -");     // Menu for subtraction
        printf("\nPress 3 for *");     // Menu for multiplication
        printf("\nPress 4 for /");     // Menu for division
        printf("\nPress 5 for %%");    // Menu for modulus
        printf("\nPress 0 for the exit"); // Exit option

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);          // Read user choice

        if (choice == 0)               // Check for exit
        {
            break;                     // Exit the loop
        }

        printf("Enter the first number: ");
        scanf("%d", &a);               // Read first number
        printf("Enter the second number: ");
        scanf("%d", &b);               // Read second number

        switch (choice)                // Switch based on choice
        {
            case 1:
                printf("Addition of %d and %d is %d\n", a, b, add(a, b)); // Addition
                break;

            case 2:
                printf("Subtraction of %d and %d is %d\n", a, b, sub(a, b)); // Subtraction
                break;

            case 3:
                printf("Multiplication of %d and %d is %d\n", a, b, mul(a, b)); // Multiplication
                break;

            case 4:
                if (b != 0)            // Check division by zero
                    printf("Division of %d and %d is %d\n", a, b, div(a, b)); // Division
                else
                    printf("Division by zero is not allowed\n"); // Error message
                break;

            case 5:
                if (b != 0)            // Check modulus by zero
                    printf("Modulus of %d and %d is %d\n", a, b, mod(a, b)); // Modulus
                else
                    printf("Modulus by zero is not allowed\n"); // Error message
                break;

            default:
                printf("Invalid choice\n"); // Invalid menu option
        }
    }
    
           return 0;   // End of program
          
}

/* Function Definitions */
int add(int a, int b)
{
    return a + b;    // Return sum
}

int sub(int a, int b)
{
    return a - b;    // Return difference
}

int mul(int a, int b)
{
    return a * b;    // Return product
}

int div(int a, int b)
{
    return a / b;    // Return quotient
}

int mod(int a, int b)
{
    return a % b;    // Return remainder
}


//   OUTPUT


//   Enter your choice: 1
//   Enter the first number: 5
//   Enter the second number: 3
//   Addition of 5 and 3 is 8

//   Press 1 for +
//   Press 2 for -
//   Press 3 for *
//   Press 4 for /
//   Press 5 for %
//   Press 0 for the exit

//   Enter your choice: 4
//   Enter the first number: 10
//   Enter the second number: 5
//   Division of 10 and 5 is 2

//   Press 1 for +
//   Press 2 for -
//   Press 3 for *
//   Press 4 for /
//   Press 5 for %
//   Press 0 for the exit

//   Enter your choice: 0

