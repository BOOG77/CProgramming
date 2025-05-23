#include <stdio.h>

    int main() {
        int myAge = 43;     // An int variable
        int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge
        // Output the value of myAge (43)
        printf("%d\n", myAge);
        // Output the memory address of myAge (0x7ffe5367e044)
        printf("%p\n", &myAge);
        // Output the memory address of myAge with the pointer (0x7ffe5367e044)
        printf("%p\n", ptr);

        // datatype for pointer must match variable
        float myAge2 = 43.5, *ptr2 = &myAge2;
        printf("Pointer 2(myAge2): %p\n", ptr2);
        printf("myAge2: %f\n", myAge2);
    }

