#include <stdio.h>

/*
TASK 2: Operators
Goal: Use arithmetic + comparison + logical operators.
*/

int main(void) {
    int a = 0, b = 0;

    // Get input from the user
    printf("Enter integer a: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input for a.\n");
        return 1;
    }

    printf("Enter integer b: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid input for b.\n");
        return 1;
    }

    printf("\n=== Arithmetic ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    // Perform division and modulo only if b is not zero
    if (b != 0) {
        printf("a / b = %d\n", a / b);   // Integer division
        printf("a %% b = %d\n", a % b);  // Remainder
    } else {
        printf("Cannot divide by zero.\n");
    }

    printf("\n=== Comparison ===\n");
    if (a > b) {
        printf("a is greater\n");
    } else if (b > a) {
        printf("b is greater\n");
    } else {
        printf("they are equal\n");
    }

    printf("\n=== Logical checks ===\n");

    // Check if both numbers are positive
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    } else {
        printf("Both numbers are not positive.\n");
    }

    // Check if at least one number is negative
    if (a < 0 || b < 0) {
        printf("At least one number is negative.\n");
    } else {
        printf("No negative numbers.\n");
    }

    return 0;
}
