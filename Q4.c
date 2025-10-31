#include <stdio.h>

int main() {
    int a, b, r, q = 0;
    
    printf("enter two integers: ");
    scanf("%d%d", &a, &b);
    
    if (b == 0) {
        printf("Error: Cannot divide by zero!\n");
        return 1;
    }
    
    r = a;
    
    if (b > 0) {
        if (a >= 0) {
            while (r >= b) { q++; r -= b; }
        } else {
            while (r < 0) { q--; r += b; }
        }
    } else { // b < 0
        if (a >= 0) {
            while (r >= -b) { q--; r += b; }
        } else {
            while (r <= b) { q++; r -= b; }
        }
    }
    
    printf("the quotient is %d and the remainder is %d\n", q, r);
    return 0;
}