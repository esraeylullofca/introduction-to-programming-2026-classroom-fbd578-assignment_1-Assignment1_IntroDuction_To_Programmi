#include <stdio.h>

int main(void) {
    int n = 0;

    // 1) n > 0 olana kadar tekrar sor
    while (n <= 0) {
        printf("Enter a positive integer n (> 0): ");
        scanf("%d", &n);
    }

    printf("\n=== Counting ===\n");
    // 2) 1'den n'e kadar yazdır
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n=== Sum 1..n ===\n");
    // 3) toplam hesapla
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);

    printf("\n=== Factorial n! ===\n");
    // 4) faktöriyel hesapla
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %llu\n", fact);

    return 0;
}
