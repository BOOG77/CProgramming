#include <stdio.h>

int main(){
    // 1. Program Requirements.
    // You must write a program in C that performs the following tasks:

        // Floating-Point Values:
            
            // Declare two float variables and assign them real numbers
                float a = 10.0, b = 10.0;
              
            // Calculate the sum, difference, multiplication, and division of these numbers.
                printf("Our two float values are A: %f, and B: %f\n", a, b);

                float sumResult = a + b;
                printf("Sum: %.2f\n", sumResult);

                float subtractionResult = a - b;
                printf("Difference: %.2f\n", subtractionResult);

                float multiplicationResult = a * b;
                printf("Multiplication: %.2f\n", multiplicationResult);

                float divisionResult = a / b;
                printf("Division: %.2f\n", divisionResult);

        // Arithmetic Operators:

            // Use the modulus operator to find the remainder of a division involving two integers
                int c = 10, d = 5;
                float intModulusResult = c / b;
                printf("Our two int values are C: %d, D: %d\n", c, d);
                printf("Modulus: %f\n", intModulusResult);
        
        // Character Data Type (char):

            // Declare a char variable and assign it a letter (e.g., 'A')
                char e = 'e';
                printf("Char: %c ASCII: %d\n", e, e);

        // Input and Output with printf() and scanf()

            // Prompt the user to input an integer and a float
                printf("Input an integer\n");
                int userInteger;
                scanf("%d", &userInteger);

                printf("Input a number with two decimal places\n");
                float userFloat;
                scanf("%f", &userFloat);

                printf("Thank you for your submission: %d, %.2f\n", userInteger, userFloat);

        // Increment/Decrement Operations

            // Declare an integer variable and demonstrate the use of pre and post-increment operators
                
                // Establishing a baseline
                    int incrementInt = 5;
                    printf("Increment integer: %d\n", incrementInt);

                // Incrementing, then printing (pre)    
                    printf("Pre-increment demonstration: %d\n", ++incrementInt);

                // Printing, then incrementing (post)
                    printf("Post-increment demonstration: %d\n", incrementInt++);
                
                // Showing that the number incremented
                    printf("Increment integer: %d\n", incrementInt);
        
        // Logical Operators

            // Write a program that checks if a number entered by the user is both positive and even
            
                // Getting the number from user input
                    printf("Enter an integer\n");
                    int userInteger2;
                    scanf("%d", &userInteger2);
            
                // Checking if the number is positive and even
                    if(userInteger2 > 0 && userInteger2 % 2 == 0){
                        printf("Your number is positive, and even!");
                    }
                    else{
                        printf("Your number isn't positive and even.");
                    }

}