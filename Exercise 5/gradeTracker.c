//
// Created by dawso on 2025-04-06.
//
#include <stdio.h>
int main(){
    float grades[5];
    float gradeAvg = 0;

    printf("== Grade Average Calculator ==\n");
    printf("5 Courses are supported\n");
    for(int i = 0; i < 5; i++){
        printf("Enter Grade #%d", i + 1);
        scanf("%f", &grades[i]);
    }
    printf("Grades processed.\n");

    for(int i = 0; i < 5; i++){
        gradeAvg += grades[i];
    }
    printf("Grade Average: %.2f\n", gradeAvg / 5);

    for (int i = 1; i < 5; ++i) {
        if (grades[0] < grades[i]) {
            grades[0] = grades[i];
        }
    }
    printf("Highest Grade: %.2f\n", grades[0]);

    for (int i = 1; i < 5; ++i) {
        if (grades[0] > grades[i]) {
            grades[0] = grades[i];
        }
    }
    printf("Lowest Grade: %.2f\n", grades[0]);
}