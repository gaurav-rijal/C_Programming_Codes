/*Write a C program to store and display the details of students using structures. Print the names of
students whose percentage is greater than or equal to 60. */

#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int rollNumber;
    float percentage;
};

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[MAX_STUDENTS];

    // Input student details
    for (int i = 0; i < numStudents; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    // Displaying students with percentage >= 60
    printf("\nStudents with percentage >= 60:\n");
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].percentage >= 60.0) {
            printf("%s\n", students[i].name);
        }
    }

    return 0;
}