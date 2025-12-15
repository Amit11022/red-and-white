#include <stdio.h>

int main() {
    int cel;        // variable to store Celsius value (integer)
    float fen;      // variable to store Fahrenheit value (float)

    printf("enter the value of cel:");   // ask user for Celsius input
    scanf("%d", &cel);                   // read Celsius value from user

    fen = (1.8 * cel) + 32;              // convert Celsius to Fahrenheit

    printf("value of fen is: %.2f", fen); // print Fahrenheit value with 2 decimals
}

