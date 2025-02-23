#include <stdio.h>

int main(){
    char name[100];
    int enterStudent;
    int studentCount = 0;
    int gradeTotal;
    int gradeAvg;

    // prompt the user to input student details (name, grades for 3 subjects).

    do{
        // enter name
        printf("Please enter the student name:");
        scanf(" %[^\n]", &name);
        printf("You entered the name as: %s \n", name);
        
        // grades for 3 subjects initialized
        int grade1, grade2, grade3;

        // 1. Prompt the user
        printf("Enter grade for Subject 1: ");
        scanf("%d", &grade1);

        // 2. Validate the input
        if(grade1 < 0 || grade1 > 100){
            printf("Enter grade for Subject 1(0-100): ");
            scanf("%d", grade1);
        }

        printf("Enter grade for Subject 2: ");
        scanf("%d", &grade2);
        if(grade2 < 0 || grade2 > 100){
            printf("Enter grade for Subject 2(0-100): ");
            scanf("%d", grade2);
        }

        printf("Enter grade for Subject 3: ");
        scanf("%d", &grade3);
        if(grade1 < 0 || grade1 > 100){
            printf("Enter grade for Subject 3(0-100): ");
            scanf("%d", grade3);
        }

        // Calculate and display
            // total marks
            gradeTotal = grade1 + grade2 + grade3;
            printf("Total Marks: %d", gradeTotal);

            // average marks
            gradeAvg = gradeTotal / 3;
            printf("Average Marks: %d", gradeAvg);

            // pass status
            if(gradeAvg >= 50){
                printf("Status: Passed");
            }
            else{
                printf("Status: Failed");
            }

        studentCount++;
        printf("You entered %d students \n", studentCount);

        printf("Do you want to add another student? 1 for Yes 2 for No \n");
        scanf("%d", &enterStudent);
    } while(enterStudent == 1);

    printf("Data summary\n");
    printf("Number of students: %d\n", studentCount);
    printf("Total marks: %d", gradeTotal);
}