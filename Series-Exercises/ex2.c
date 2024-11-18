#include <stdio.h>
#include <math.h>

double sum_of_geometric_series(double a, double r, int N) {
    // Formula for the sum of a geometric series:
    // sum = a * (1 - pow(r, N)) / (1 - r)
    double sum = a * (1 - pow(r, N)) / (1 - r);
    return sum;
}

int main() {
    double a, r;
    int N;

    printf("Enter the first term (a): ");
    scanf("%lf", &a);

    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    double result = sum_of_geometric_series(a, r, N);

    printf("The sum of the first %d terms of the geometric series is: %lf\n", N, result);

    return 0;
}