//
// Created by dawso on 2025-04-06.
//
#include <stdio.h>

int main(){
    int CAD = 1;
    float USD = 0.75;
    float userCAD;
    float userUSD;

    printf("==CAD to USD conversion calculator==\n");
    printf("Enter your CAD value:\n");
    scanf("%f", &userCAD);
    userUSD = userCAD * USD;
    printf("$%.2f CAD converts to $%.2f USD\n", userCAD, userUSD);
    return 0;
 }