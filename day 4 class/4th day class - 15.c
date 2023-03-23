#include <stdio.h>

int main() {
    int mat[3][3], i, j, sum=0;

    printf("Enter elements of 3x3 matrix: \n");

    // Read elements of matrix
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Display diagonal elements and find sum
    printf("Diagonal elements are: ");
    for(i=0; i<3; i++) {
        printf("%d ", mat[i][i]);
        sum += mat[i][i];
    }

    // Display sum of diagonal elements
    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}

