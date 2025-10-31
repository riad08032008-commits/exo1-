#include <stdio.h>
int main() {
    int U0, U1, Un, i;
    U0 = 1;
    U1 = 1;
    printf("Enter the term number N (N >= 0): ");
    scanf("%d", &i);
    if (i < 0) {
        printf("Error: N must be non-negative.\n");
        return 1;
    }
    if (i == 0) {
        Un = U0;
    } else if (i == 1) {
        Un = U1;
    } else {
        for (int n = 2; n <= i; n++) {
            Un = U0 + U1;
            U0 = U1;
            U1 = Un;
        }
    }
    printf("The %d-th term of the sequence is: %d\n", i, Un);
    return 0;
}