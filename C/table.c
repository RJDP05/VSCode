#include <stdio.h>

int main() {
    // Declare variables
    int marks[10][5];
    float percentage[10];
    char grade[10];
    
    // Input marks for 10 students in 5 subjects
    printf("Enter marks for 10 students in 5 subjects:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    
    // Calculate percentage and grade for each student
    for (int i = 0; i < 10; i++) {
        int total_marks = 0;
        for (int j = 0; j < 5; j++) {
            total_marks += marks[i][j];
        }
        percentage[i] = (float)total_marks / 5;
        
        // Determine grade based on percentage
        if (percentage[i] >= 90) {
            grade[i] = 'A';
        } else if (percentage[i] >= 80) {
            grade[i] = 'B';
        } else if (percentage[i] >= 70) {
            grade[i] = 'C';
        } else if (percentage[i] >= 60) {
            grade[i] = 'D';
        } else {
            grade[i] = 'F';
        }
    }
    
    // Display marks, percentage, and grade for each student
    printf("\nStudent\tSubject 1\tSubject 2\tSubject 3\tSubject 4\tSubject 5\tPercentage\tGrade\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%d\t\t", marks[i][j]);
        }
        printf("%.2f\t\t%c\n", percentage[i], grade[i]);
    }
    
    return 0;
}