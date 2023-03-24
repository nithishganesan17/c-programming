#include <stdio.h>

void calculate(int num, void (*process)(int)) {
    process(num);
}

void square(int num) {
    printf("The square of %d is %d\n", num, num*num);
}

void cube(int num) {
    printf("The cube of %d is %d\n", num, num*num*num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    calculate(num, square);
    calculate(num, cube);
    
    return 0;
}

