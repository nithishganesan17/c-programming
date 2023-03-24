/*15.	Write a Program to display the diagonal elements in a matrix array and also find the sum of them.
Sample input:
1 4 3
4 2 6
7 1 3
*/

#include <stdio.h>
int main() {
    int i, j, n = 3, sum = 0;
    int matrix[3][3] = {{1, 4, 3}, {4, 2, 6}, {7, 1, 3}};

    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    printf("\nSum of diagonal elements = %d\n", sum);
    
    return 0;
}

