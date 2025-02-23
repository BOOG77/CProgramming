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
        // studentTotal float for use in displaying student's total grades
        // numberRead int for use in error handling
        // it's defined in this scope because it isn't used outside of it
        float studentTotal = 0;
        int numberRead = 0;

        // enter name
        printf("Please enter the student name:");
        scanf(" %[^\n]", &name);
        printf("You entered the name as: %s \n", name);

        // subject 1
        printf("Enter grade for Subject 1:");
        numberRead = scanf(" %f", &grade1);

        // https://www.youtube.com/watch?v=_i2faEmp2lo
        // handling string input when the program requires a number
        while (numberRead != 1) {
            printf("...\n");
            scanf("%*[^\n]");
            printf("Enter grade for Subject 1(0-100):");
            numberRead = scanf("%f", &grade1);
        }

        // handling input that is less than 0 or greater than 100
        // also handling string input within this loop, without this if a string is entered an infinite loop happens
        while(grade1 < 0 || grade1 > 100){
            printf("...\n");
            printf("Enter grade for Subject 1(0-100):");
            numberRead = scanf("%f", &grade1);
            while (numberRead != 1) {
                printf("...\n");
                scanf("%*[^\n]");
                printf("Enter grade for Subject 1(0-100):");
                numberRead = scanf("%f", &grade1);
            }
        }

        // subject 2
        printf("Enter grade for Subject 2:");
        numberRead = scanf("%f", &grade2);

        // https://www.youtube.com/watch?v=_i2faEmp2lo
        // handling string input when the program requires a number
        while (numberRead != 1) {
            printf("...\n");
            scanf("%*[^\n]");
            printf("Enter grade for Subject 2(0-100):");
            numberRead = scanf("%f", &grade2);
        }

        // handling input that is less than 0 or greater than 100
        // also handling string input within this loop, without this if a string is entered an infinite loop happens
        while(grade2 < 0 || grade2 > 100){
            printf("...\n");
            printf("Enter grade for Subject 2(0-100):");
            numberRead = scanf("%f", &grade2);
            while (numberRead != 1) {
                printf("...\n");
                scanf("%*[^\n]");
                printf("Enter grade for Subject 2(0-100):");
                numberRead = scanf("%f", &grade2);
            }
        }

        // subject 3
        printf("Enter grade for Subject 3:");
        numberRead = scanf("%f", &grade3);

        // https://www.youtube.com/watch?v=_i2faEmp2lo
        // handling string input when the program requires a number
        while (numberRead != 1) {
            printf("...\n");
            scanf("%*[^\n]");
            printf("Enter grade for Subject 3(0-100):");
            numberRead = scanf("%f", &grade3);
        }

        // handling input that is less than 0 or greater than 100
        // also handling string input within this loop, without this if a string is entered an infinite loop happens
        while(grade3 < 0 || grade3 > 100){
            printf("...\n");
            printf("Enter grade for Subject 3(0-100):");
            numberRead = scanf("%f", &grade3);
            while (numberRead != 1) {
                printf("...\n");
                scanf("%*[^\n]");
                printf("Enter grade for Subject 3(0-100):");
                numberRead = scanf("%f", &grade3);
            }
        }

        // Calculate and display
            // student total marks
            studentTotal = grade1 + grade2 + grade3;
            printf("Total Marks: %f \n", studentTotal);

            // storing gradeTotal for use in calculating the class average
            gradeTotal = studentTotal + gradeTotal;

            // student average marks
            gradeAvg = studentTotal / 3;
            printf("Average Marks: %f \n", gradeAvg);

            // pass status
            if(gradeAvg >= 50){
                printf("Status: Passed \n");
            }
            else{
                printf("Status: Failed \n");
            }

        // displaying how many students have been entered into the system
        studentCount++;
        printf("You entered %d students \n", studentCount);

        // asking if user wants to add another student. the loop stays live while enterStudent == 1, so if the user inputs 1 the loop resets to add another student.
        printf("Do you want to add another student? 1 for Yes 2 for No \n");
        scanf("%d", &enterStudent);
    } while(enterStudent == 1);

    // data summary of all students
    printf("Data summary\n");
    printf("Number of students: %d\n", studentCount);

    // total grades divided by studentCount times 3, 3 subjects are always added per student so this gives us the average of all the subjects
    printf("Class Average: %f", gradeTotal / (studentCount * 3));
}