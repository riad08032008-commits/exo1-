#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Input error\n");
        return 1;
    }

    if (n < 0) {
        printf("Please enter a positive number\n");
        return 1;
    }

    printf("Original number: %d\n", n);
    
    int mirror = 0;
    while (n > 0) {
        mirror = mirror * 10 + (n % 10);
        n /= 10;
    }
    
    printf("Mirror: %d\n", mirror);
    return 0;
}