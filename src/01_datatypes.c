#include <stdio.h>

/*
TASK 1: Data Types
Goal: Practice basic C types and printing.
*/

int main(void) {
    // TODO 1: Print sizes
    printf("=== Sizes of Data Types (bytes) ===\n");
    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("char: %zu\n", sizeof(char));

    // TODO 2: Read input from user
    int age = 0;
    double height = 0.0;
    char firstLetter = '?';

    printf("\nEnter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input for age.\n");
        return 1;
    }

    printf("Enter your height in meters (e.g., 1.72): ");
    if (scanf("%lf", &height) != 1) {
        printf("Invalid input for height.\n");
        return 1;
    }

    printf("Enter the first letter of your name: ");
    if (scanf(" %c", &firstLetter) != 1) {  // Space before %c skips newline
        printf("Invalid input for first letter.\n");
        return 1;
    }

    // TODO 3: Print summary
    printf("\n=== Summary ===\n");
    printf("You are %d years old, %.2f meters tall, and your name starts with '%c'.\n",
           age, height, firstLetter);

    return 0;
}
