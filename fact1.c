#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.");
    }
    else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }

        printf("Factorial of %d = %lld", num, factorial);
    }

    return 0;
}

