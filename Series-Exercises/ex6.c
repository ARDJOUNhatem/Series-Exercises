#include <stdio.h>

double harmonic_series(int N) {
    double sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int N = 10;
    printf("The sum of the first %d terms of the harmonic series is: %.2f\n", N, harmonic_series(N));
    return 0;
}