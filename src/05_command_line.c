#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
TASK 5: Command Line
Goal: Use argc/argv.

Program usage:
  ./cmd <operation> <num1> <num2>

Where <operation> is one of:
  add, sub, mul, div

Examples:
  ./cmd add 10 5   -> 15
  ./cmd div 10 2   -> 5
*/

int main(int argc, char *argv[]) {
    // TODO 1: Check if the correct number of arguments is provided
    if (argc != 4) {
        printf("Usage: %s <operation> <num1> <num2>\n", argv[0]);
        printf("Operations: add, sub, mul, div\n");
        return 1;
    }

    // TODO 2: Parse operation and numbers
    char *op = argv[1];
    char *endptr1, *endptr2;

    // Convert strings to long integers using strtol
    long num1 = strtol(argv[2], &endptr1, 10);
    long num2 = strtol(argv[3], &endptr2, 10);

    // Validate numeric input
    if (*endptr1 != '\0' || *endptr2 != '\0') {
        printf("Error: Please enter valid integers.\n");
        return 1;
    }

    // TODO 3-5: Implement operations
    if (strcmp(op, "add") == 0) {
        printf("%ld\n", num1 + num2);
    }
    else if (strcmp(op, "sub") == 0) {
        printf("%ld\n", num1 - num2);
    }
    else if (strcmp(op, "mul") == 0) {
        printf("%ld\n", num1 * num2);
    }
    else if (strcmp(op, "div") == 0) {
        // Handle division by zero
        if (num2 == 0) {
            printf("Error: Division by zero.\n");
            return 1;
        }
        printf("%ld\n", num1 / num2);
    }
    else {
        // Handle unknown operation
        printf("Unknown operation\n");
        return 1;
    }

    return 0;
}
