//5.C program to find the sum of the natural numbers using while loop
#include <stdio.h>
int main() {
    int a, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    i = 1;

    while (i <= a) {
        sum =sum+ i;
        ++i;
    }

    printf("Sum = %d", sum);
    return 0;
}

