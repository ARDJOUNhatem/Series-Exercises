#include <stdio.h>

double sum_of_squares(int N) {
    double sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int N = 10;
    printf("The sum of squares of the first %d natural numbers is: %.2f\n", N, sum_of_squares(N));
    return 0;
}