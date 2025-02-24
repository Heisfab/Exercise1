#include <stdio.h>

#define NUM_STUDENTS 10 // Update the number of students to 10

// Structure to store student information
struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[NUM_STUDENTS]; // Array to hold 10 students

    // Input student names and marks
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter the name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove newline character if present
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        getchar(); // to consume the newline character left by scanf
    }

    // Output student names and marks
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %s, Marks: %d\n", i + 1, students[i].name, students[i].marks);
    }

    return 0;
}
