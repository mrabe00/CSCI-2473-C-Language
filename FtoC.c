/*
Programmer Name: Matthew Rabe
Program Name:    FtoC.c (Fahrenheit to celsius)
Date:            04/30/2023
*/

#include <stdio.h>
// function prottype - ANSI C Standard is to use protyping
// 3 parts to remember function prototype, function definition and function call
double fahrenheit_to_celsius(double);

// body of program, main function
int main(void)

{
    // declare a variable to hold the fahrenheit value, this variable has the scope of the main function
    double fahrenheit_in;
    fahrenheit_in = 0.0;
    printf("Welcome to the Fahrenheit to Celsius converter program\n");
    printf("Please enter temperature in degrees Fahrenheit: \n");
    // read user input into fahrenheit_in, note my attempt to give the variables descriptive names
    scanf("%lf", &fahrenheit_in);
    // function call
    printf("The temperature %.2f degrees Fahrenheit is %.2f degrees celsius",fahrenheit_in, fahrenheit_to_celsius(fahrenheit_in));
    return 0;
}

// function definition outside the main function
double fahrenheit_to_celsius(double p_fahrenheit)
{
    // variable celsius has function scope it is invalid anywhere outside the function, the main function cannot see this value
    double celsius;
    celsius = (p_fahrenheit - 32.0) * (5.0/9.0);
    return celsius;
}