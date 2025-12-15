#include <stdio.h>

int main() {
    int Basesalary, hra, da, ta;   // Variables for basic salary and allowances
    float grosssalary;             // Variable to store final gross salary

    printf("enter the Basesalary:");  // Ask user to enter base salary
    scanf("%d", &Basesalary);         // Read base salary from user

    hra = Basesalary * 10 / 100;      // Calculate House Rent Allowance (10% of base salary)
    da  = Basesalary * 5  / 100;      // Calculate Dearness Allowance (5% of base salary)
    ta  = Basesalary * 8  / 100;      // Calculate Travel Allowance (8% of base salary)

    grosssalary = Basesalary + hra + da + ta;  // Calculate total gross salary

    printf("grosssalary = %.2f", grosssalary); // Print gross salary with 2 decimal places
}

