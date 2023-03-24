/*25.	To implement a simple calculator using switch case statement.

Read the operator symbol and operands n1, n2
If operator = + then calculate result = n1 + n2
Else if operator = – then calculate result = n1 – n2
Else if operator = * then calculate result = n1 * n2
Else if operator = / then calculate result = n1 / n2
Else if operator = % then calculate result = n1 % n2
Else
print "Invalid operator"*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char op;
    float n1, n2, result;

    printf("Enter operator (+, -, *, /, %): ");
    scanf("%c", &op);

    printf("Enter two operands: ");
    scanf("%f%f", &n1, &n2);

    switch(op) {
        case '+':
            result = n1 + n2;
            printf("%.2f + %.2f = %.2f", n1, n2, result);
            break;
        case '-':
            result = n1 - n2;
            printf("%.2f - %.2f = %.2f", n1, n2, result);
            break;
        case '*':
            result = n1 * n2;
            printf("%.2f * %.2f = %.2f", n1, n2, result);
            break;
        case '/':
            if(n2 == 0) {
                printf("Error: division by zero");
                exit(0);
            }
            result = n1 / n2;
            printf("%.2f / %.2f = %.2f", n1, n2, result);
            break;
        case '%':
            if(n2 == 0) {
                printf("Error: modulo by zero");
                exit(0);
            }
            result = (int)n1 % (int)n2;
            printf("%.2f %% %.2f = %.2f", n1, n2, result);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
