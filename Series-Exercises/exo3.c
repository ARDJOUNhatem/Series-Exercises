#include <stdio.h>

void generate_fibonacci(int N) {
    int fib1 = 0, fib2 = 1, next_fib;

    printf("Fibonacci Series: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", fib1);
        next_fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("\n");
}

int main() {
    int N;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &N);

    generate_fibonacci(N);

    return 0;
}