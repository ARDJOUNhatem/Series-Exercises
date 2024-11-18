#include <stdio.h>
#include <math.h>

double alternating_series(int N) {
    double sum = 0;
    for (int i = 0; i < N; i++) {
        sum += pow(-1, i) * (i + 1);
    }
    return sum;
}

int main() {
    int N = 10;
    printf("The sum of the first %d terms of the alternating series is: %.2f\n", N, alternating_series(N));
    return 0;
}