#include <stdio.h>

int main(){
    char name[100];
    int enterStudent;
    int studentCount = 0;
    float gradeTotal = 0;
    float gradeAvg;
    float grade1, grade2, grade3;

    // prompt the user to input student details (name, grades for 3 subjects).

    do{
        float studentTotal = 0;
        // enter name
        printf("Please enter the student name:");
        scanf(" %[^\n]", &name);
        printf("You entered the name as: %s \n", name);

        // 1. Prompt the user
        printf("Enter grade for Subject 1:");
        scanf("%f", &grade1);

        // 2. Validate the input
        if(grade1 < 0 || grade1 > 100){
            printf("Enter grade for Subject 1(0-100):");
            scanf("%f", &grade1);
        }

        printf("Enter grade for Subject 2:");
        scanf("%f", &grade2);
        if(grade2 < 0 || grade2 > 100){
            printf("Enter grade for Subject 2(0-100):");
            scanf("%f", &grade2);
        }

        printf("Enter grade for Subject 3:");
        scanf("%f", &grade3);
        if(grade1 < 0 || grade1 > 100){
            printf("Enter grade for Subject 3(0-100):");
            scanf("%f", &grade3);
        }

        // Calculate and display
            // total marks
            studentTotal = grade1 + grade2 + grade3;
            gradeTotal = studentTotal + gradeTotal;
            printf("Total Marks: %f \n", studentTotal);

            // average marks
            gradeAvg = studentTotal / 3;
            printf("Average Marks: %f \n", gradeAvg);

            // pass status
            if(gradeAvg >= 50){
                printf("Status: Passed \n");
            }
            else{
                printf("Status: Failed \n");
            }

        studentCount++;
        printf("You entered %d students \n", studentCount);

        printf("Do you want to add another student? 1 for Yes 2 for No \n");
        scanf("%d", &enterStudent);
    } while(enterStudent == 1);

    printf("Data summary\n");
    printf("Number of students: %d\n", studentCount);
    printf("Class Average: %f", gradeTotal / (studentCount * 3));
}