//12.	Program to swap two numbers using call by value
#include <stdio.h>

void swap(int x, int y);

int main() {
    int a = 10, b = 20;
    printf("Before swapping, a = %d and b = %d\n", a, b);
    swap(a, b);
    printf("After swapping, a = %d and b = %d\n", a, b);
    return 0;
}

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Swapped values: x = %d, y = %d\n", x, y);
}

