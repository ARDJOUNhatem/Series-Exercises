#include <stdio.h>
#include <math.h>

double arithmetic_geometric_series(int N, double a, double d, double r) {
    double sum = 0;
    for (int n = 1; n <= N; n++) {
        double term = (a + (n - 1) * d) * pow(r, n - 1);
        sum += term;
    }
    return sum;
}

int main() {
    int N = 10;
    double a = 1.0, d = 2.0, r = 1.5;
    double result = arithmetic_geometric_series(N, a, d, r);
    printf("The sum of the first %d terms of the arithmetic-geometric series is: %.2f\n", N, result);
    return 0;
}