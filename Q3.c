#include <stdio.h>
#include <string.h>

int main() {
    char number[100];
    char digit;
    int count = 0;
    printf("Enter a number: ");
    scanf("%s", number);
    printf("Enter the digit to count (0-9): ");
    scanf(" %c", &digit);
    while (digit < '0' || digit > '9') {
        printf("Invalid digit! Enter a digit between 0 and 9: ");
        scanf(" %c", &digit);
    }
    for (int i = 0; i < strlen(number); i++) {
        if (number[i] == digit) {
            count++;
        }
    }

    printf("The digit %c appears %d times in %s.\n", digit, count, number);

    return 0;
}
