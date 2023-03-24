#include <stdio.h>

int main() {
    int i;
    printf("Printing even numbers from 1 to 10:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 1) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

