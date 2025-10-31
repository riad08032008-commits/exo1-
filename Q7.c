#include <stdio.h>

int main() {
    int N;
    printf("Enter N (>=10): ");
    if (scanf("%d", &N) != 1) {
        fprintf(stderr, "Input error\n");
        return 1;
    }

    if (N < 10) {
        printf("Sum = 0\n");
        return 0;
    }

    long long sum = 0;
    for (int i = 10; i <= N; ++i) {
        int s = 0;
        for (int d = 1; d <= i / 2; ++d) {
            if (i % d == 0) s += d;
        }
        if (s == i) sum += i;
    }

    printf("Sum of perfect numbers between 10 and %d = %lld\n", N, sum);
    return 0;
}