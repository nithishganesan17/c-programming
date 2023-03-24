//10. Program to add two numbers using Function with no arguments and no return value
#include <stdio.h>

void add(void);

int main() {
    add();
    return 0;
}

void add(void) {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum = %d", sum);
}

