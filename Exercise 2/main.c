/*
 * Author: Dawson Brown
 * LMD: January 25 2025
 * School: NSCC
 * Course: Intro to C
 * Exercise #2
 */
#include <stdio.h>

int main(){

    // 1. Use Floating-Point Numbers

        // Declare a float variable for the radius of a circle
            float radius = 4.5;

        // Declare a double variable for the constant pi
            const double pi = (double) 22 / 7;

        // Use these variable to calculate the circumference of the circle using the formula:
            double circumference = 2 * pi * radius;

    // 2. Demonstrate Type Conversion: 

        // Explicitly convert the floating-point circumference to an integer and store it in a new variable
            int intCircumference = (int)circumference;

        // Print both the original floating-point value and the integer-converted value
            printf("Circumference is: %f\n", circumference);

    // 3. Use Scienfific Notation:

        // Declare a double variable for Planck's constant and print its value in scientific notation using %e
            double planckConst = 6.626e-34;
            printf("Planck's Constant: %e\n", planckConst);

    // 4. Output formatting:

        // Use printf to format and display the results:

            // The radius of the circle with 2 decimal places
                printf("The radius of the circle: %.2f\n", radius);

            // The floating-point circumference with 3 decimal places
                printf("Floating-point circumference: %.3f\n", (float)circumference);

            // The integer converted circumference as an integer.
                printf("Integer-converted circumference: %d\n", intCircumference);

            // Planck's constant in scientific notation
                printf("Planck's Constant: %e\n", planckConst);
                
    return 0;
}