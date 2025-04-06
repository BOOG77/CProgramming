#include <stdio.h>

int main() {
    int myNumbers[4] = {25, 50, 75, 100};

    int number1 = 10;
    int *ptr = &number1;
    int *ptr2 = myNumbers;

    printf("value is %d \n", number1);
    printf("address is %p \n", &number1);
    printf("value is %d \n", *ptr);
    printf("address is %p \n", ptr);

    printf("Value for myNumbers: %p\n", *ptr2);
    ptr2++;
    printf("Value for myNumbers: %d\n", *ptr2);
    ptr2++;
    printf("Value for myNumbers: %d\n", *ptr2);
    ptr2++;
    printf("Value for myNumbers: %d\n", *ptr2);

    for (int i = 0; i < 4 ; i++){
        printf("Index: %d Value: %d Memory: %p\n", i, myNumbers[i], &myNumbers[i]);
    }

    puts("== End of Code ==");
    return 0;
}

