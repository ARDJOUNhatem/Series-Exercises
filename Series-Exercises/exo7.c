#include <stdio.h>

double factorial_series(int N) {
    double sum = 0;
    for (int i = 1; i <= N; i++) {
        double factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += factorial;
    }
    return sum;
}

int main() {
    int N = 5;
    printf("The sum of the factorials of the first %d natural numbers is: %.2f\n", N, factorial_series(N));
    return 0;
}