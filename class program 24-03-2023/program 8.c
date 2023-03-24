//8. To write a C code to implement a function to compute power of a value.
#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;
    int i;
    
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

int main() {
    double base, result;
    int exponent;
    
    printf("Enter the base value: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent value: ");
    scanf("%d", &exponent);
    
    result = power(base, exponent);
    
    printf("%.2lf to the power of %d is %.2lf\n", base, exponent, result);
    
    return 0;
}

