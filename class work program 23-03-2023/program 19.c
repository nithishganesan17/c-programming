#include <stdio.h>

unsigned int add_binary(unsigned int a, unsigned int b)
{
    unsigned int carry = 0, sum = 0;
    while (b != 0) {
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    return a;
}

int main()
{
    unsigned int s1, s2, result;
    printf("Enter the first binary number: ");
    scanf("%u", &s1);
    printf("Enter the second binary number: ");
    scanf("%u", &s2);
    result = add_binary(s1, s2);
    printf("The sum of the binary numbers is: %u\n", result);
    return 0;
}

