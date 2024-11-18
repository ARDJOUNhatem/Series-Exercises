#include <stdio.h>

int triangular_number(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n = 6;
    printf("The first %d triangular numbers are: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", triangular_number(i));
    }
    printf("\n");
    return 0;
}
