#include <stdio.h>

int sum_of_arithmetic_series(int a, int d, int n) {
    // Formula for the sum of an arithmetic series:
    // sum = n/2 * (2*a + (n-1)*d)
    int sum = n * (2 * a + (n - 1) * d) / 2;
    return sum;
}

int main() {
    int a, d, n;

    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    int result = sum_of_arithmetic_series(a, d, n);

    printf("The sum of the first %d terms of the arithmetic series is: %d\n", n, result);

    return 0;
}