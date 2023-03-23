//c program to reverse using for loop
#include <stdio.h>

int main() {
	int j;
    int num, i = 0, remainder;
    int digits[10];
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Store each digit of the number in an array
    while (num != 0) {
        remainder = num % 10;
        digits[i] = remainder;
        i++;
        num /= 10;
    }
    
    printf("Reversed Number = [");
    for (j = 0; j < i; j++) {
        printf("%d", digits[j]);
        if (j < i-1) {
            printf(", ");
        }
    }
    printf("]");
    
    return 0;
}

