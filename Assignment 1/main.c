#include <stdio.h>

int main(){
    char name[100];
    int enterStudent;
    int studentCount = 0;

    // prompt the user to input student details (name, grades for 3 subjects).

    do{
        printf("Please enter the student name: \n");
        scanf("%[^\n]", name);
        printf("You entered the name as: %s \n", name);
        studentCount++;
        printf("You entered %d students \n", studentCount);

        printf("Do you want to add another student? 1 for yes 2 for no \n");
        scanf("%d", &enterStudent);
    } while(enterStudent == 1);

    printf("Data summary\n");
    printf("Number of students: %d\n", studentCount);

    printf("end of code");
}