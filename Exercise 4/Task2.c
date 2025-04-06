//
// Created by dawso on 2025-04-06.
//
#include <stdio.h>

int main(){
    float purchaseAmt = 0;
    printf("==E-Commerce Discount Calculator==\n");
    printf("Enter your purchase amount:\n");
    scanf("%f", &purchaseAmt);

    if (purchaseAmt > 100) {
        printf("Discount applied: 10%%\n");
        purchaseAmt *= 0.9;
        printf("Final amount to pay: $%.2f", purchaseAmt);
    }
    else if (purchaseAmt > 50 && purchaseAmt < 100) {
        printf("Discount applied: 5%%\n");
        purchaseAmt *= 0.95;
        printf("Final amount to pay: $%.2f", purchaseAmt);
    }
    else {
        printf("Discount applied: 0%%\n");
        printf("Final amount to pay: $%.2f", purchaseAmt);
    }
    return 0;
}