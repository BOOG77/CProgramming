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
            printf("Circumference is: %d", circumference);

    // 3. Use Scienfific Notation:

        // Declare a double variable for Planck's constant and print its value in scientific notation using %e
            double planckConst = 6.626e-34;

    // 4. Output formatting:

        // Use printf to format and display the results:

            // The radius of the circle with 2 decimal places
                printf("The radius of the circle: %f.2", radius);

            // The floating-point circumference with 3 decimal places
                printf("Floating-point circumference: %f", (float)circumference);

            // The integer converted circumference as an integer.
                printf("Integer-converted circumference: %d", intCircumference);

            // Planck's constant in scientific notation
                double planckConst = 6.626e-34;
                printf("PlanckConst is %e\n", planckConst);
                
    return 0;
}