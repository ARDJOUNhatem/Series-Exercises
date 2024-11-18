#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double exponential_series(double x, int N) {
    double sum = 0;
    for (int i = 0; i <= N; i++) {
        sum += pow(x, i) / factorial(i);
    }
    return sum;
}

int main() {
    double x = 2.0;
    int N = 10;
    printf("The sum of the first %d terms of the exponential series with x = %.2f is: %.2f\n", N, x, exponential_series(x, N));
    return 0;
}