#include <stdio.h>

/*
TASK 2: Operators
Goal: Use arithmetic + comparison + logical operators.
*/

int main(void) {
    int a = 0, b = 0;

    printf("Enter integer a: ");
    scanf("%d", &a);
    printf("Enter integer b: ");
    scanf("%d", &b);

    printf("\n=== Arithmetic ===\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    // Check for division by zero
    if (b != 0) {
        printf("%d / %d = %d (integer division)\n", a, b, a / b);
        printf("%d %% %d = %d (remainder)\n", a, b, a % b);
    } else {
        printf("Cannot divide by zero (b is 0).\n");
    }

    printf("\n=== Comparison ===\n");
    if (a > b) {
        printf("a is greater than b\n");
    } else if (b > a) {
        printf("b is greater than a\n");
    } else {
        printf("a and b are equal\n");
    }

    printf("\n=== Logical checks ===\n");
    // Check if BOTH are positive
    if (a > 0 && b > 0) {
        printf("BOTH numbers are positive.\n");
    } else {
        printf("They are NOT both positive.\n");
    }

    // Check if AT LEAST ONE is negative
    if (a < 0 || b < 0) {
        printf("AT LEAST ONE number is negative.\n");
    } else {
        printf("Neither number is negative.\n");
    }

    return 0;
}
