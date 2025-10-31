#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Input error\n");
        return 1;
    }

    if (n <= 1) {
        printf("%d is not prime.\n", n);
        return 0;
    }
    if (n == 2) {
        printf("2 is prime.\n");
        return 0;
    }
    if (n % 2 == 0) {
        printf("%d is not prime (even).\n", n);
        return 0;
    }

    for (int i = 3; (long long)i * i <= n; i += 2) {
        if (n % i == 0) {
            printf("%d is not prime (divisible by %d).\n", n, i);
            return 0;
        }
    }

    printf("%d is prime.\n", n);
    return 0;

}
