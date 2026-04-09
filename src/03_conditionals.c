#include <stdio.h>

/*
TASK 3: Conditional Statements
Goal: if / else if / else + input validation.
*/

int main(void) {
    int score = -1;

    printf("Enter exam score (0-100): ");

    // Read input and validate numeric entry
    if (scanf("%d", &score) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    // Validate score range
    if (score < 0 || score > 100) {
        printf("Invalid score\n");
        return 1;
    }

    // Bonus: Perfect score check
    if (score == 100) {
        printf("Perfect score!\n");
    }

    // Grade logic using else-if ladder
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
