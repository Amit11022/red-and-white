#include <stdio.h>   

int main() {
    int num, count = 0;   // num stores the number, count stores number of digits

    printf("Enter the number: "); // Take input from user
    scanf("%d", &num);   // Read the number from user

    // do-while loop executes at least once
    // It counts digits by removing one digit at a time
    do {
        count++;         // Increment digit count
        num = num / 10;  // Remove the last digit of the number
       }  
	    while (num != 0);  // Continue until number becomes 0
 
    printf("Total number of digits: %d", count); // Display output

}

