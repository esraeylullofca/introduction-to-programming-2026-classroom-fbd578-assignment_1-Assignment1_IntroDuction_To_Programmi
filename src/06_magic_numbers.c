#include <stdio.h>

/*
TASK 6: Magic Numbers
Goal: Replace magic numbers with named constants and improve readability.
*/

int main(void) {
    /* TODO 1: Define constants */
    const double QUIZ_WEIGHT = 0.40;
    const double EXAM_WEIGHT = 0.60;
    const int PASS_SCORE = 50;
    const int MIN_SCORE = 0;
    const int MAX_SCORE = 100;

    double quiz = 0.0;
    double exam = 0.0;
    double finalScore = 0.0;

    /* Input quiz score */
    printf("Enter quiz score (0-100): ");
    if (scanf("%lf", &quiz) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    /* Input exam score */
    printf("Enter exam score (0-100): ");
    if (scanf("%lf", &exam) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    /* TODO 3: Validate inputs */
    if (quiz < MIN_SCORE || quiz > MAX_SCORE ||
        exam < MIN_SCORE || exam > MAX_SCORE) {
        printf("Error: Scores must be between %d and %d.\n",
               MIN_SCORE, MAX_SCORE);
        return 1;
    }

    /* TODO 2: Compute final score using constants */
    finalScore = quiz * QUIZ_WEIGHT + exam * EXAM_WEIGHT;

    /* Print final score */
    printf("\nFinal score: %.2f\n", finalScore);

    /* TODO 4: Determine PASS/FAIL */
    if (finalScore >= PASS_SCORE) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    /* Extra (optional) feedback */
    if (finalScore >= 90) {
        printf("Performance: Excellent\n");
    } else if (finalScore < PASS_SCORE) {
        printf("Performance: Needs improvement\n");
    }

    return 0;
}
