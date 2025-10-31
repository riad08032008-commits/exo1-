#include <stdio.h>

int main() {
    int a, b, r;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        r = a % b;  // remainder of a divided by b
        a = b;      // set a to the previous b
        b = r;      // set b to the remainder
    }
    printf("The GCD is: %d\n", a);

    return 0;
}
