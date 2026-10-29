
#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 2) {
        printf("%d is not a prime number.\n", number);
        return 0;
    }

    for (int divisor = 2; divisor <= number / divisor; divisor++) {
        if (number % divisor == 0) {
            printf("%d is not a prime number.\n", number);
            return 0;
        }
    }

    printf("%d is a prime number.\n", number);
    return 0;
}
