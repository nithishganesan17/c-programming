#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for the hill pattern: ");
    scanf("%d", &n);

    int i, j, k;

    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        for (j = 1, k = 'A'; j <= 2 * (n - i) + 1; j++) {
            printf("%c ", k);
            if (j < n - i + 1) {
                k++;
            } else {
                k--;
            }
        }

        printf("\n");
    }

    return 0;
}

