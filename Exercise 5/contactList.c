//
// Created by dawso on 2025-04-06.
//
#include <stdio.h>
#include <string.h>
int main(){
  char contacts [5][40];
  printf("== 5 Contacts List Program ==\n");
  printf("Enter your 5 contact names:\n");
    for(int i = 0; i < 5; i++){
        scanf("%s", &contacts[i]);
    }

    int i, j;
    int n = 5;
    char temp[40];
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(contacts[i], contacts[j]) > 0) {
                strcpy(temp, contacts[i]);
                strcpy(contacts[i], contacts[j]);
                strcpy(contacts[j], temp);
            }
        }
    }

    printf("Sorting contacts alphabetically:\n");
    for(int i = 0; i < 5; i++){
        printf("%s\n", contacts[i]);
    }
}