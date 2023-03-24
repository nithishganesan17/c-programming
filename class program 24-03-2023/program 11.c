//11.	Program to add two numbers using Function with arguments and with return value
#include <stdio.h>

int add(int num1, int num2);

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    sum = add(num1, num2);
    printf("Sum = %d", sum);
    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}

