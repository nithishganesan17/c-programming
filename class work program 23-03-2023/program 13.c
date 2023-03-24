/*13. Print the following hill pattern
A B C D E D C B A
  A B C D C B A
    A B C B A
      A B A
        A*/

#include <stdio.h>
int main() {
    int i, j, k, n = 5;
    char ch;

    for (i = 0; i <= n; i++) {
        ch = 'A';
        for (j = 0; j < i; j++) {
            printf("  ");
        }
        for (k = 0; k < n-i+1; k++) {
            printf("%c ", ch++);
        }
        ch -= 2;
        for (k = 0; k < n-i+1; k++) {
            printf("%c ", ch--);
        }
        printf("\n");
    }
    
    return 0;
}

